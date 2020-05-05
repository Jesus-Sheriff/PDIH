
# install.packages('tuneR', dep=TRUE)
# install.packages('seewave', dep=TRUE)
# install.packages('soundgen', dep=TRUE)

library(tuneR)
library(seewave)
#library(soundgen)
library(audio)

# establecer el path concreto en cada caso a la carpeta de trabajo
setwd("~/Escritorio/PDIH/P4-sonido/S6-varios-sonidos")
# la siguiente línea, sólo para Ubuntu con Amarok instalado
setWavPlayer('amarok')

# 1. Leer dos ficheros de sonido (WAV o MP3) de unos pocos segundos de duración cada uno.
# cargar archivos de sonido (wav/mp3):
perro <- readWave('perro.wav')
perro
oveja <- readWave('oveja.wav')
oveja
gato  <- readMP3('gato.mp3')
gato

# 2. Dibujar la forma de onda de ambos sonidos.
# mostrar la onda del sonido:
plot( extractWave(perro, from = 1, to = 159732) )
plot( extractWave(gato, from = 1, to = 393984) )

# 3. Obtener la información de las cabeceras de ambos sonidos.
# mostrar los campos del archivo de sonido
str(oveja)
str(gato)

# muestras totales de un sonido
length(gato@left)
# calcular la duración exacta del sonido (con tres decimales)
round(length(gato@left) / gato@samp.rate, 3)


f <- gato@samp.rate    #44100

# escuchar un sonido:
listen(gato,f=f)

# mostrar la onda del sonido:
plot( extractWave(gato, from = 1, to = 393984) )


# escuchar una porción del sonido original:
listen(gato, f=f, from=6.5, to=8.9)


# cortar segmentos de un objeto “wave”:
s2 <- cutw(gato, from=6.5,to=8.9, output="Wave")
s2
plot( extractWave(s2, from = 1, to = 105841) )
listen(s2)

# 4. Unir ambos sonidos en uno nuevo.
# añadir segmentos:
s3 <- pastew(perro, s2, output="Wave")
s3
# 5. Dibujar la forma de onda de la señal resultante.
plot( extractWave(s3, from = 1, to=265573) )
listen(s3)


# eliminar segmentos de sonido:
s4 <- deletew(s3, output="Wave", from = duration(s2), to = duration(perro))
duration(s4)
s4
plot( extractWave(s4, from = 1, to=211681) )
listen(s4)


# escribir el sonido en un archivo WAV:
writeWave(s4, file.path("snd-gato-perro.wav") )


# extraer un canal y crear un sonido mono:
sndObjLeft <- mono(gato, "left")
str(sndObjLeft)
sndObjLeft

listen(sndObjLeft,f=f)

plot( extractWave(sndObjLeft, from = 1, to = 393984) )

writeWave(sndObjLeft, file.path("tmpSndLeft.wav") )

# 6. Pasarle un filtro de frecuencia para eliminar las frecuencias por debajo de3.000Hz
# bwfilter(wave, f, channel = 1, n = 1, from = NULL, to = NULL, bandpass = TRUE, listen = FALSE, output = "matrix")
# filtro pasa banda (bandpass) desde 0Hz a 3000Hz (solo se reproduce esta gama de frecuencias)
# El enunciado pone "eliminar las frecuencias por debajo de 3.000Hz" pero considero que así el efecto es más perceptible
filtro <- bwfilter(s2, f, channel = 1, n=1,from = 0, to = 2000, bandpass = TRUE, listen = TRUE, output = "Wave")
filtro
# 7. Almacenar la señal obtenida como un fichero WAV denominado “mezcla.wav”.
# Yo lo he llamado "filtro_0_2000.wav" en vez de "mezcla.wav"
writeWave(filtro, file.path("filtro_0_2000.wav") )
listen(filtro,f)


# 8. Cargar un nuevo archivo de sonido, aplicarle eco y a continuación darle la vuelta al sonido. Almacenar la señal obtenida como un fichero WAV denominado “alreves.wav”.
# https://www.rdocumentation.org/packages/seewave/versions/2.1.5/topics/echo
# He decidido crear un vector como una función que genera una secuencia
amp <- seq(1, 0, by=-0.2)
amp
delay <- seq(0, 1, by=0.2)
delay
# se multiplica por 1000 para aumentar la amplitud de la onda
con_eco <- 1000*echo(filtro, f, channel = 1, amp, delay, plot = TRUE,listen = TRUE, output = "Wave")
listen(con_eco,f)
writeWave(con_eco, file.path("con_eco.wav") )

# Time reverse of a time wave. Reverse the wave along the time axis.
# https://www.rdocumentation.org/packages/seewave/versions/2.1.5/topics/revw
#revw(wave, f, channel = 1, env = TRUE, ifreq = TRUE,plot = FALSE, output = "matrix", ...)

al_reves <- revw(con_eco, f, channel = 1, env = FALSE, ifreq = FALSE,plot = TRUE, output = "Wave")
listen(al_reves,f)

writeWave(al_reves, file.path("al_reves.wav") )


