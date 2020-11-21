// COMBAT BOTS --- RC ADDON BOARD
//                                                       *..   .#                          ,@,                            .//.
//                           ,#@@                        /@#%@&,&.                       ,@@/.                          *#@#,          %(/,
//                     ..,,*#@#%@& . .....,/@*,,.        ,%%@&@#(,           *(#(,*,,*//%##@@(,.                  *#(&#@@@@*     ,....#@&@&(/////***,,.
//              .*(%@%&%#######%(*%%@@%%##%%#%%%%%%@*    .@#%#@@@.       /@@%################%%#%@#*.           &@%(*(###&/..,/%@%####%#%####%%%@@(*...
//           ,#&@%%%%%####%##%@@##%#%###%#%%%%%%%%%#%%, .@@%%%%%@*     ./@%#%%%%&@@(@@########%%%%%#@/.      .@#########@@##########%%%%%###%%%%@(*.
//        ./&@%%%%#%%%%%#%###%@&%&#@@##%%%%&.  ,#%%%%%@*&#%%%#%##@,./(@#%##%%%%&/. /%####&@,.,######&/     .@###%%##%%#@@@#/#%@%**##%%%%&&#,.
//      ,#@%%%%%%%@@#/(&&%#@.  ,#@#%##%%@ .   ./@%%%%%%@##%######%@#%%#%%%##%@/.  *#####@&@######@@*.    .@%%%%%%%%%%@@%,       @###%%%@@/.
//    .(&%%%%%%%@     .,,    .(@@%%%%%.      ,#@%%%%%@#%###@@##############%@@. ./%#######%####@@#/.    &%%%%%@@@%%%%%@%/(((%&@@###%%&@(.
// ..,%@%%%%%@.      ....   ,#%%#%%%,      .(&%%%##%@#####%((@%%%%#%@@###%@@&/@@%%%%#############%#%&*&%%%%%%%%%%%%%%%%&%%@@@(%#%##%@&*
//  ,%@%%%%@&          .,*#@%%%%%%#.    ,/%%%%%%%@@@%%%#@@,..%#@@(.,@%#@#%&(*,,@%%%%#@,    ,*@%#####%%%%%%%%%%%#%%%&%@@/,,.  %####%@%*
// ./&%%%%%%@    .,*(%@%%@%%&%%%&%&..,(@%%%%%%&@&@@%%%#@/         ,@%%%%@@,  ./@@&%%%*,(@%%##%###&&###&%%&(*,..%%%%%@&*   . %%%##%&%,
// *&@&&%%%%%%&%&%%%%%%%%%@(@%%%%%%%%%%%%%%%&@&*@@%%@@@,         ,@%&%%%/. .**@@@#%%######%%#@@@@@##@#%%,     .%%%%%&/.  ,.%%%%##&/.
//  .*#%%%%%%%%%%%%%%%@/    ,(@%%%%%%%%%@@@,.**.@%@/#,          ,@%@%%&&@%%%%%%%@%&###%%@@&&/,..%@@%%#,       @@%%%&%*    @%@#@@&/
//   ,*(@##@@@@(&..            %####@###(((((((&         &(((((#@%&%@@@&%%%%%%%%&@@%#(((((((/    #@(((/((/(((&@@%&%@*    @%@@@@&/&.
//   ..                       @%((((((((((((((((((     (/(((((#@%%##(###*@((((((%#((((/(//((/ #//((((((((((((((@@%%%,    @((*,/%,.
//   ..                       @%((((((((((((((((((( (@((((((((#&#((((((((@(((((((((((((((/(/@(((((((((((((((((((%@@(.          ....
//                            @%(((((((#@@@(((((((( @@((((((((@@@((((((((@@@@@@((((((((@@@@@@((((((/(#@@@(((((((( @,
//                            @%(#((((## @@(((((((( @@(((((((( %@/(((((((.    @(((#((((/    @(((((((((#@@&@@@@@@
//                            @%#(#(((((((((((((((& @@(((((((( %@((((((((.    @((((/((((    @((((((((((((((@
//                            @%((((((#(((((((((    @@(((#(((( %@((((((((.    @(((((((((    @@@((((((((((((((((%
//                            @%#((##((((((((((((#, @@(((((((( %@(((##(((.    @((((((#((       %@@@@(((((((((((((
//                            @%#((#(###@@@(((((((( @@(((((((( %@((((((((.    @(((((((((        %%(((#@@#((((((((
//                            @%##(((#(# &@(((#(((( @@((#((((( %@((((((((.    @(((((((((    @#(((((((# @@((((((((
//                            @%#####(#(((###(((((( @@((((((#((((((((((((.    @(((((((((    @#(((((((((((((((((((
//                            @%#######(((((((((((( @@(((((((((((((((((((     @((((((#((    @@((((((((((((((((((#
//                            @%#####(##(#((((((/    (@@@(((((#(((((((&       @(((((((((     @@@#(((((((((((((,
//                            @@@@@@@@@@@@@@@@          @@@@@@@@@@@@          @@@@@@@@          @@@@@@@@@@@@

/*
  Pinouts:

  Motors: - (This is where the pins go on-board the Combat Bot PCB)
  Motor 1 - A --> Pin D9  (PB1)
  Motor 1 - B --> Pin D10 (PB2)
  Motor 2 - C --> Pin D5  (PD5)
  Motor 2 - D --> Pin D6  (PD6)

  RGB Pinout: - (This is where the pins go on-board the Combat Bot PCB)
  GND --> GND
  RGB --> D4 (PD4)
  +5V --> +5V

  2 Channel RC Receiver Input: -
  Channel 1 --> D2 (PD2)
  Channel 2 --> D3 (PD3)

  Onboard Programming Header: - (This is where the pins go on-board the Combat Bot PCB)
  GND  --> GND
  +5V  --> +5V
  CS   --> RST (PC6) Reset
  SCK  --> D13 (PB5)
  Miso --> D11 (PB4)
  Mosi --> D12 (PB3)

  Programming the PCB can be done by using an Arduino as an isp with the following connections: -

  Combat PCB    -->   Arduino ISP Programmer
         GND  --> GND
         +5V  --> +5V
         CS   --> D10
         SCK  --> D13
         Miso --> D12
         Mosi --> D11

  You will also need to add the following URL to the additional Boards Manager URLs List:
  https://raw.githubusercontent.com/carlosefr/atmega/master/package_carlosefr_atmega_index.json
  Then go to Tools > Board > Board Manager and search for Barebones ATmega chips. Select it and install.
  
  This is a set of config files by Carlos Rodrigues that lets you program a bare MCU without a bootloader or external clock.
  More information can be found here: https://github.com/carlosefr/atmega
  
  HOW TO PROGRAM:
  
  1)To program the Combat bot pcb you will first need to upload the ARDUINO AS ISP sketch to an arduino uno or nano
  2)Then connect the Arduino to the COMBAT BOT PCB as described above in the programming pinout list.
  3)Under Tools, Change the Board to the new ATMega328/328P option.
  4)Under Tools, Change the Processor to ATMega328p
  5)Under Tools, Change the clock in Internal 8Mhz
  6)Under Tools, Change the Port to the port your arduino is connected to
  7)Under Tools, Change the Programmer to "Arduino as ISP"
  8)Hit Upload and it should then program.

 Code and PCB Creator
 by :- Jake Gibson Shaw-Sutton
*/
  //------------------------------------------------------------------------------------//
 //                                   DESCRIPTION
//------------------------------------------------------------------------------------//
/*
  This code reads the PWM pulse width time coming from channel 1 and channel 2 of the RC receiver,
  then mixes it so that a single joystick can be used to drive a 2 wheeled robot in all directions.
 */
  //------------------------------------------------------------------------------------//
 //                                      SET-UP
//------------------------------------------------------------------------------------//
#define RcChannel1 2
#define RcChannel2 3
#define MotorA 9
#define MotorB 10
#define MotorC 5
#define MotorD 6
#define RGB 4

long Chan1StartTime, Chan1EndTime, Chan1PulseLength, Chan2StartTime, Chan2EndTime, Chan2PulseLength, RWD, LWD, HPWM, VPWM;
int q, w, e, r, temp = 0;

void setup() {
  pinMode(RGB, OUTPUT);
  pinMode(MotorC, OUTPUT);
  pinMode(MotorD, OUTPUT);
  pinMode(MotorA, OUTPUT);
  pinMode(MotorB, OUTPUT);
  pinMode(RcChannel1, INPUT_PULLUP);
  pinMode(RcChannel2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(RcChannel1), ReadChan1, CHANGE);
  attachInterrupt(digitalPinToInterrupt(RcChannel2), ReadChan2, CHANGE);
}


  //-----------------------------------------------------------------------------------//
 //                                      MAIN LOOP
//------------------------------------------------------------------------------------//
void loop() {

  HPWM = map(Chan1PulseLength, 125, 255, 0, 510); // 125 & 255, Experimental Pulse Width Values works for CombatBotPCB V1.0
  VPWM = map(Chan2PulseLength, 96, 237, 0, 510); //   96 & 237, Experimental Pulse Width Values works for CombatBotPCB V1.0

  RWD = VPWM - (HPWM - 255);  // Right Wheel Drive: 0-200 backwards, 200-300 Stationary, 300 - 510 forwards
  LWD = VPWM + (HPWM - 255); //   Left Wheel Drive: 0-200 backwards, 200-300 Stationary, 300 - 510 forwards
  
  //-------------------------------//
 //         Left wheel PWM
//--------------------------------//
  if (LWD >= 300) {                           // Move Fowards
    analogWrite(MotorA, 0);
    analogWrite(MotorB, int(LWD - 255));
  } else if (LWD >= 200 && LWD <= 300) {   //Stationary, apply brake
    analogWrite(MotorB, 1);
    analogWrite(MotorA, 1);
  } else {                              // Move Backwards
    analogWrite(MotorB, 0);
    analogWrite(MotorA, int(255 - LWD));
  }


  //-------------------------------//
 //        Right wheel PWM
//--------------------------------//
  if (RWD >= 300) {                         // Move Fowards
    analogWrite(MotorD, 0);
    analogWrite(MotorC, int(RWD - 255));
  } else if (RWD >= 200 && RWD <= 300) { // Stationary, apply brake
    analogWrite(MotorD, 1);
    analogWrite(MotorC, 1);
  } else {                             // Move Backwards
    analogWrite(MotorC, 0);
    analogWrite(MotorD, int(255 - RWD));
  }

} //END

  //-----------------------------------------------------------------------------------//
 //                  INTERRUPT FUNCTIONS FOR READING RC PWM SIGNAL
//------------------------------------------------------------------------------------//

void ReadChan1() { // CHANNEL 1
  if (digitalRead(RcChannel1) == 1) {
    Chan1StartTime = micros();
  } else {
    Chan1EndTime = micros();
    Chan1PulseLength = Chan1EndTime - Chan1StartTime;
  }
}

void ReadChan2() { // CHANNEL 2
  if (digitalRead(RcChannel2) == 1) {
    Chan2StartTime = micros();
  } else {
    Chan2EndTime = micros();
    Chan2PulseLength = Chan2EndTime - Chan2StartTime;
  }
}
/*
  Due to the way the micros() function works and the internal oscillator of the CombatPCB, 
  the values for the pulse width are not in microseconds.
  If you would like to run this code on a standard Arduino, these values will need 
  changing from 125 & 255 to 1000 & 2000 and from 96 & 237 to 1000 & 2000.
 */
