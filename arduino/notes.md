Testing a 2x2 NKRO keyboard matrix using Arduino Uno.

THINGS LEARNED:
Columns are connected to 5v power source with a pull-up resistor. May be able to use internal pullup resistors, but couldn't get this to work

Rows are NOT connected to ground. By setting rows to INPUT, a high impedance state is imposed, allowing little to no current to enter the pins effecticely disconnecting the circuit.

We have to scan each row 1 by 1. To do this, the row is set to OUTPUT, LOW, and by checking which columns are set to LOW, we can determine which keys in a row are pressed. This process is repeated for every row on the keyboard.

NEXT STEPS:
Use the NUCLEO64 board to test the same principles on the STM32 microcontroller.
Learn how to design the schematic for the MCU's supporting circuitry and the keyboard matrix.
Design the PCB layout using the schematic.
Order the parts for breadboard testing.
Order the PCB.
