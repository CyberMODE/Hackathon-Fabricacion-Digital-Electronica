# Hackathón de fabricación dixital de deseño e produción de circuítos electrónicos

Neste hackathón aprenderedemos a deseñar as nosas PCB co software libre KiCad, partindo do esquema ao deseño do ciruito para compoñentes THD e SMD.

Unha vez que temos o PCB deseñado, veremos como xerar os ficheiros para crear as nosas placas, os ficheiros Gerbers para enviar a fabricar, ou SVG para fabricar en local cunha CNC.

Usando Gimp xeraremos os PNG necesarios para fresarlo na PCB, ou os negativos para facer a PCB con outros medios.

O exercicio que faremos é unha pequena PCB para aloxar un microcontrolador ATtiny412 que acenda e apague un LED.

Unha vez teñamos a PCB fresada, aprenderemos a soldar compoñentes SMD, usando nosas PCB e os compoñentes que serán proporcionados a cada participante do Hackathon.

Unha vez soldada a placa e revisada que este todo correctamente pasaremos a programar o microcontrolador mediante Arduino.

Ao final do día cada participante terá a habilidade de crear as súas propias PCB e programar as súas microcontroladores, un punto de partida para facer prototipos funcionais a baixo custo.

# Equipo necesario

Cada alumno debe traer o seu computador PC/Mac/Linux co seguinte software instalado:

- KiCad 6.x https://www.kicad.org
- Gimp http://www.gimp.org.es/descargar-gimp.html
- GSender https://sienci.com/gsender/
- Arduino https://www.arduino.cc/en/software

Proporcionarase en caso de non telo instalado acceso a internet para descargalos e memoría USB´s co instalador do software.

# Recursos online

Fab electronics component library for KiCad https://gitlab.fabcloud.org/pub/libraries/electronics/kicad

Mods Project http://modsproject.org

ATtiny library for Arduino IDE http://drazzy.com/package_drazzy.com_index.json

# Lista de materiais BOM

- Placas de Circuito de PCB **FR1**
- Fresa 0.4 End Mill -> 1/32 -> 0,4 MM -> TRACES
- Fresa 0.8 End Mill -> 1/64 -> 0,8 MM -> CUT

| Compoñente | Unidades | Código | Tenda | Footprint |
| ----- | ---- | ---- | ---- | ---- |
| ATtiny412 | 1 | ATTINY412-SSF-ND | [Digikey](https://www.digikey.es/en/products/detail/microchip-technology/ATTINY412-SSF/9947539) | SOIC-8_3.9x4.9mm_P1.27mm |
| Cap 10 uF | 1 | GRT31CC8YA106ME01L | [Digikey](https://www.digikey.es/en/products/detail/murata-electronics/GRT31CC8YA106ME01L/5416847) | C_1206 |
| Res 499 Ohms | 1 | RC1206FR-07499RL | [Digikey](https://www.digikey.es/en/products/detail/yageo/RC1206FR-07499RL/728944) | R_1206 |
| LED RED | 1 | 1516-1076-1-ND  | [Digikey](https://www.digikey.es/es/products/detail/qt-brightek-qtb/QBLP615-R/4814674) | LED_1206 |
| Connector 1x03_P2.54mm_Horizontal | 3 | S1143E-36-ND  | [Digikey](https://www.digikey.es/es/products/detail/sullins-connector-solutions/GBC36SGSN-M89/862355) | PinHeader_1x03_P2.54mm_Horizontal_SMD |



#### Evento patrocinado por Xunta de Galicia e Amtega Axencia para a Modernización Tecnolóxica

