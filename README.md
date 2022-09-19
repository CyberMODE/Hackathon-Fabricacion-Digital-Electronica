# Hackathón de fabricación digital de diseño y producción de circuitos electrónicos

En este hackathon aprenderedemos a diseñar nuestras PCB con el software libre KiCad, partiendo del esquema al diseño del ciruito para componentes THD y SMD.

Una vez que tenemos el PCB diseñado, veremos como generar los ficheros para crear nuestras placas, los ficheros Gerbers para enviar a fabricar, o SVG para fabricar en local con una CNC.

Usando Gimp generaremos los PNG necesarios para fresarlo en la PCB, o los negativos para hacer la PCB con otros medios.

El ejercicio que haremos es una pequeña PCB para alojar un microcontrolador Attiny412 que encienda y apague un LED.

Una vez tengamos la CNC aprenderemos a soldar componentes SMD, usando las PCB que hemos creado y los componentes que serán proporcionados a cada participante del Hackathon.

Una vez soldada la placa y revisada que este todo correctamente pasaremos a programar el microcontrolador mediante Arduino.

Al final del día cada participante tendrá la habilidad de crear sus propias PCB y programar sus microcontroladores, un punto de partida para hacer prototipos funcionales a bajo coste.

# Equipo necesario

Cada alumno puede traer su ordenador PC/Mac/Linux con el siguiente software instalado:

- KiCad 6.x https://www.kicad.org
- Gimp http://www.gimp.org.es/descargar-gimp.html
- GSender https://sienci.com/gsender/
- Arduino https://www.arduino.cc/en/software

Se proporcionará en caso de no tenerlo instalado acceso a internet para descargarlos y memoría USB´s con el instalador del software.

# Recursos online

Fab electronics component library for KiCad https://gitlab.fabcloud.org/pub/libraries/electronics/kicad

Mods Project http://modsproject.org

ATtiny library for Arduino IDE http://drazzy.com/package_drazzy.com_index.json

# Lista de materiales BOM

Placa de Circuito de PCB **FR1**

| Componente | Unidades | Código | Tienda |
| ----- | ---- | ---- | ---- |
| ATtiny412 | 1 | ATTINY412-SSF-ND | [Digikey](https://www.digikey.es/en/products/detail/microchip-technology/ATTINY412-SSF/9947539) |
| Cap 10 uF | 1 | Código |  |
| Res 499 Ohms | 1 | Código | Digikey |
| LED RED | 1 | [Código](https://www.digikey.es/es/products/detail/qt-brightek-qtb/QBLP615-R/4814674) | [Digikey](https://www.digikey.es/es/products/detail/qt-brightek-qtb/QBLP615-R/4814674) |
| PinHeader_1x03_P2.54mm_Horizontal | 3 | S1143E-36-ND  | [Digikey](https://www.digikey.es/es/products/detail/sullins-connector-solutions/GBC36SGSN-M89/862355) |


#### Evento patrocinado por Xunta de Galicia e Amtega Axencia para a Modernización Tecnolóxica

