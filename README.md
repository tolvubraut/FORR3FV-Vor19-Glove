# Glove-FORR3FV


## Hugmynd
* **Gamalt:** Við vildum gera nýtt víðmót, margar hugmyndir komu upp en við vorum mest spenntir fyrir hanska. Hanskinn á að vera lítill svo hann fellur inn í umhverfið. Hannskinn er með nokkur input og sendir á master tölvuna sem tekur á móti sendinugnni og sendir hvað á að gera, til dæmis að kveikja ljós.

* **Nýtt:** Við viljum gera auðvelt og þægilegt viðmót, margar hugmyndir komu upp en við vorum mest spenntir fyrir hanska. Hanskinn á að vera eins lítið áberandi og hægt er, hann á að lesa hreyfingar á puttum og halla. Allar upplýsingar frá skynjurunum sendast beint á Raspberry PI og vinnur svo úr þeim gögnum, t.d. kveikja ljós.

## Input
**Gamalt:**
* Inputinn á hanskanum eru allir puttarnir. Ef þú beyjir buttan þinn þá mun einhvað gerast. Við erum með 32 takk á hanskanum sem við getum látið gera alskonar hluti.
* Gyro, það verður gyro til að geta fundo snúning handarinnar.
* Accelerometer, það verður accelerometer til þess að geta vitað hvort hendinn sé að fara hreyfasig.
* Magnetometer, magnetometer verður notaður til þess að finna áttirnar, eins og áttaviti.

**Nýtt:**
* Flex sensor:
  * Skynjari fyrir hvern fingur, les hvað mikið er búið að beyja fingurinn.
* Gyro:
  * Skynjari sem les halla á allri hendinni.
* Accelerometer:
  * Skynjari sem les hröðun á hendinni.
* Magnetometer:
  * Skynjari sem les í hvaða átt er snúið.

## Output
**Gamalt:**
* Fyrsta humyndinn var að stjórna litlum bíl. En svo fórum við í að pæla hvering við getum notað hanskann í annað, planið er að hanskinn gæti  stjórnað öllu. Það þarf bara að tengann við tækið sem hann á að stjórna og vita hvað hann á að senda til tækið.

**Nýtt:**
* Fyrst datt okkur í hug að stjórna fjarstýrðum bíl, en svo fannst okkur við geta tekið þetta lengra. Hanskinn á að geta þjónað sem eðlilegt output tæki, lesa þarf bara hvað notandinn er að gera og Raspberry PI gerir viðeigandi ráðstafanir (keyrir réttann profile eftir því hverju notandinn er að stýra)

## Partar
| PartType | Partar                                                           | Fjöldi | Vefslóð                                                                                                             |
|----------|------------------------------------------------------------------|--------|---------------------------------------------------------------------------------------------------------------------|
| Tölva    | Nano V3.0 ATmega328P Controller Board for Arduino                | 1      | https://www.gearbest.com/boards-shields/pp_1313295.html?wid=1433363                                                 |
| Tölva    | Raspberry Pi 3 - Model B+                                        | 1      | https://www.modmypi.com/raspberry-pi/raspberry-pi-a-plusb-plus23-1015/rpi3-model-b-plus/raspberry-pi-3-model-b-plus |
| Sensor   | Flex Sensor 2.2"                                                 | 5      | https://www.sparkfun.com/products/10264                                                                             |
| Sensor   | MPU-9250                                                         | 1      | https://www.gearbest.com/sensors/pp_244846.html?wid=1433363                                                         |
| Module   | HC-06 Serial Port Slave Transceiver Bluetooth Module for Arduino | 1      | https://www.gearbest.com/other-accessories/pp_009935025230.html?wid=1433363                                         |

## Tengingar

![alt text](https://github.com/Robertingi00/Glove-FORR3FV/blob/master/Diagram/allConnection.png "conncetion diagram")
