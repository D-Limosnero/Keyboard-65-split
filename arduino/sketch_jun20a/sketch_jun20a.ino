// Reference: https://www.gammon.com.au/forum/?id=14175
// Stuff about pullup/pulldown resistors: https://electronics.stackexchange.com/questions/562412/4x4-keyboard-matrix-why-no-pull-down-resistors
// https://www.instructables.com/64-Key-Prototyping-Keyboard-Matrix-for-Arduino/
const int NUMCOLS = 2;
const int NUMROWS = 2;

const int colPins[NUMCOLS] = {2, 3};
const int rowPins[NUMROWS] = {4, 5};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // Initialize the row pins
  for (int i = 0; i < NUMROWS; i++) {
    pinMode(rowPins[i], INPUT);
  }

  // Initailize the column pins
  for (int i = 0; i < NUMCOLS; i++) {
    pinMode(colPins[i], INPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  // Set one row to OUTPUT and LOW and the other rows to input
  for (int row = 0; row < NUMROWS; row++) {
    pinMode(rowPins[row], OUTPUT);
    digitalWrite(rowPins[row], LOW);

    // Check each column if it is low; if low, key is pressed
    for (int col = 0; col < NUMCOLS; col++) {
      if (!digitalRead(colPins[col])) {
        Serial.print("Key press at ");
        Serial.print(row);
        Serial.print(col);
        Serial.print(" detected.\n");
      }
    }

    // Set the row back to high impedance input
    pinMode(rowPins[row], INPUT);
  }
}
