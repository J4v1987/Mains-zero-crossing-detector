# Mains-zero-crossing-detector
<h3>Arduino Nano as Mains Zero-Crossing Detection Tool.</h3>
<br></br>
![IMG_20250506_184608](https://github.com/J4v1987/Mains-zero-crossing-detector/blob/main/Media/IMG_20250506_184608.jpg)
<br></br>
![20250506 - zero-crossing tool](https://github.com/user-attachments/assets/f0cd21ee-68f3-4c42-b6bd-8ac4ae1d6990)
<br></br>
<p>Full-wave rectifies mains signal and compares it to a near-ground VDC signal to produce a 'zero' crossing signaling pulse.</p>
<p>Comparison yields a current-sinking pulse, normally high.</p>
<p>Pin D3 receives a digital (0-5VDC) falling edge trigger.</p>
<p>Pin D2 receives a 0-5VDC pulse, generated with a push-button SW1 generated.</p>
<p>Fast response time on zero-crossing of 1µs + Arduino digital processing cycles.</p>
<p>Topology schematic available in 20250507 - SCH - Mains zero-crossing detector (components to be selected and dimensioned to suit application, glad to accompany</p>
<br></br>
<p>By: Javier.</p>
<p>Portfolio: https://sites.google.com/view/b-eng-jarl/home</p>
<p>Arduino Forums: j4v13r_987</p>
<p>GitHub: J4v1987</p>
<br></br>
<h4>History:</h4>
  <p>H1. Loaded to Arduino Nano V3 using Arduino IDE 2.3.6. Deemed operational as per read-me media.</p>
<br></br>
<h4>Further reading:</h4>
  <p>FR1. Atmel (2015). ATmega328P 8-bit AVR Microcontroller with 32K Bytes In-System Programmable Flash DATASHEET. [online] Available at: https://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf.</p>
  <p>FR2. Texas Instruments (2025). LM393B, LM2903B, LM193, LM293, LM393 and LM2903 Dual Comparators. (2025). [online] Texas Instruments. Available at: https://www.ti.com/lit/ds/symlink/lm2903b.pdf [Accessed 31 Mar. 2025].</p>
<br></br>
<h4>Acknowledgements:</h4>
  <p>ACK1. Harvard-style references: MyBib Contributors (2019). Harvard Referencing Generator – FREE – (updated for 2019). [online] MyBib. Available at: https://www.mybib.com/tools/harvard-referencing-generator.</p>
  <p>ACK2. Peer-checking and internet data scraping: Pi.ai. (2025). AVR PWM [thread]. Pi, your personal AI. [online] Available at: https://pi.ai.</p>
