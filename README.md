# Glove-FORR3FV


## Hugmynd
* Við viljum gera auðvelt og þægilegt viðmót, margar hugmyndir komu upp en við vorum mest spenntir fyrir hanska. Hanskinn á að vera eins lítið áberandi og hægt er, hann á að lesa hreyfingar á puttum og halla. Allar upplýsingar frá skynjurunum sendast beint á Raspberry PI og vinnur svo úr þeim gögnum, t.d. kveikja ljós.

## Input
* Flex sensor:
  * Skynjari fyrir hvern fingur, les hvað mikið er búið að beyja fingurinn.
* Gyro:
  * Skynjari sem les halla á allri hendinni.
* Accelerometer:
  * Skynjari sem les hröðun á hendinni.
* Magnetometer:
  * Skynjari sem les í hvaða átt er snúið.

## Output
* Fyrst datt okkur í hug að stjórna fjarstýrðum bíl, en svo fannst okkur við geta tekið þetta lengra. Hanskinn á að geta þjónað sem eðlilegt output tæki, lesa þarf bara hvað notandinn er að gera og Raspberry PI gerir viðeigandi ráðstafanir (keyrir réttann profile eftir því hverju notandinn er að stýra)

## Partar
| PartType | Partar                                                           | Fjöldi | Vefslóð                                                                                                             |
|----------|------------------------------------------------------------------|--------|---------------------------------------------------------------------------------------------------------------------|
| Tölva    | Nano V3.0 ATmega328P Controller Board for Arduino                | 1      | https://www.gearbest.com/boards-shields/pp_1313295.html?wid=1433363                                                 |
| Tölva    | Raspberry Pi 3 - Model B+                                        | 1      | https://www.modmypi.com/raspberry-pi/raspberry-pi-a-plusb-plus23-1015/rpi3-model-b-plus/raspberry-pi-3-model-b-plus |
| Sensor   | Flex Sensor 2.2"                                                 | 5      | https://www.sparkfun.com/products/10264                                                                             |
| Sensor   | MPU-6050                                                         | 1      | https://www.gearbest.com/sensors/pp_009636731429.html?wid=1433363                                                   |
| Module   | HC-06 Serial Port Slave Transceiver Bluetooth Module for Arduino | 1      | https://www.gearbest.com/other-accessories/pp_009935025230.html?wid=1433363                                         |

## Tengingar

![alt text](https://github.com/Robertingi00/Glove-FORR3FV/blob/master/Diagram/allConnection.png "conncetion diagram")

## IP Address
10.201.32.55
