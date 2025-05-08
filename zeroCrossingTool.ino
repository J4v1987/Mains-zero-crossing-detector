/*
Arduino Nano as Mains Zero-Crossing Detection Tool.

Full-wave rectifies mains signal and compares it to a near-ground VDC signal to produce a 'zero' crossing signaling pulse.
Comparison yields a current-sinking pulse, normally high.
Pin D3 receives a digital (0-5VDC) falling edge trigger.
Pin D2 receives a 0-5VDC pulse, generated with a push-button SW1 generated.
Fast response time on zero-crossing of 1µs + Arduino digital processing cycles.
Topology schematic available in 20250507 - SCH - Mains zero-crossing detector (components to be selected and dimensioned to suit application, glad to accompany.

By: Javier.
Portfolio: https://sites.google.com/view/b-eng-jarl/home
Arduino Forums: j4v13r_987
GitHub: J4v1987

History:
  H1. Loaded to Arduino Nano V3 using Arduino IDE 2.3.6. Deemed operational as per read-me media.

Further reading:
  FR1. Atmel (2015). ATmega328P 8-bit AVR Microcontroller with 32K Bytes In-System Programmable Flash DATASHEET. [online] Available at: https://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf.
  FR2. Texas Instruments (2025). LM393B, LM2903B, LM193, LM293, LM393 and LM2903 Dual Comparators. (2025). [online] Texas Instruments. Available at: https://www.ti.com/lit/ds/symlink/lm2903b.pdf [Accessed 31 Mar. 2025].

Acknowledgements:
  ACK1. Harvard-style references: MyBib Contributors (2019). Harvard Referencing Generator – FREE – (updated for 2019). [online] MyBib. Available at: https://www.mybib.com/tools/harvard-referencing-generator.
  ACK2. Peer-checking and internet data scraping: Pi.ai. (2025). AVR PWM [thread]. Pi, your personal AI. [online] Available at: https://pi.ai.
*/

int counter=0;

void opampInput() {
  counter++;
}

void fetchOutput(){
  //push-button soft debouncing
  delay(1000);
  //print amount of zero-crossing samples 'counter' collected after falling edge trigger,
  Serial.println(counter);
  //reset samples 'counter',
  counter=0;
  //print start of counter which will be tied to timestamp in Arduino IDE serial monitor,
  Serial.println(counter);
}

void setup() {
  //set up an interrupt routine to summon actions on trigger falling edge,
  attachInterrupt (digitalPinToInterrupt(3), opampInput, FALLING);
  //set up an interrupt routine to measure time and samples from trigger last and new falling edge,
  attachInterrupt (digitalPinToInterrupt(2), fetchOutput, FALLING);
  //commence serial communications registers
  Serial.begin(9600);
}

void loop() {
}
