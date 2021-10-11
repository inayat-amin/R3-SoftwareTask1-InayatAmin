# R3-SoftwareTask1-InayatAmin
 Software Training Deliverable for R3

The task given was to use two 7 segment displays and 2 BCDs and display values 0-99 when turning the knob of a potentiometer. 

For a single display, there are 10 pins, 7 of which connect to their corresponding pins on the BDC. The BDC acts as a converter that converts a 4-bit binary code from the arduino using 4 switches (which are the input pins on the arduino) to a decimal value which is then displayed on the 7 segment display. 

The input pins (switches) for BDC1 are the digital pins 11,10,9,8. The input pins for BDC2 are the digital pins . 7,6,5,4

The 4 bit binary code from the arduino is an analog number that is read from the potentiometer (connected at A0). 

Whatever the value read from A0 is, it is mapped from a sequence of 0-1023 values to a sequence of 0-99 values using the map function on the arduino IDE.

This value is stored in a variable, val, which is then used to get the first and second digits for the display. val is divided by 10 to get the first digit and moded (%) with 10 to get the second digit.

A series of if conditions in two functions (one for the display of the first digit and the other for the display of the second digit) is used to ouput the binary equivalent of the digit to the digital pins of the display. 

So, for a val of '14', the first digit is 1, which is calculated from the function for display 1, where there are a series of if conditions which checks if the value for val is '1'. If it is, it outputs to the digital pins of display 1 a binary sequence for states of the pins. 

The binary value for '1' is '0001', so for the pins 11,10,9,8, the states of them would switch to "LOW, LOW, LOW, HIGH" digital values (as seen in the code for the if condition of val == 1). This is then passed to BDC1 where it converts this binary sequence to the segments of the display to finally output the number '1'. 

This same logic is passed for the second function for the second digit for BDC2 and the second display.

One issue I wasn't sure how to solve was how fast the values displayed when I moved the knob of the potentiometer even slightly on the simulator. I assume I would need to work on the "map" function that would give a reasonable rate for the human eye to notice the values changing on the display. 

TinkerCAD Diagram:
![image](https://user-images.githubusercontent.com/84003766/136723217-d8388677-0242-4a03-921f-7fae29752c3d.png)

TinkerCad link:
https://www.tinkercad.com/things/7szluG42vl5
