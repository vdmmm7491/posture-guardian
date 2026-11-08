## 2026-11-05 — Stage 0: ESP32 Blink Sketch + GitHub setup
- Installed Arduino IDE + ESP32 core, uploaded blink sketch
- Problem: C-to-C cable was power-only (red LED on, no COM port)
- Fix: switched to A-to-C data cable → detected on COM3
- Set up GitHub repo with firmware/ and exercises/ structure
- Learned: constants vs variables, scope, magic numbers, commenting out code



## 2026-11-08 — Soldering + Stage 1a: I2C scan

### Soldering
- Soldered header pins onto both VL53L0X sensors (breadboard used as a jig)
- Continuity check with multimeter: no shorts between adjacent pins 
- OLED came pre-soldered

### Stage 1a: I2C scanner
- Wired one VL53L0X to the ESP32:
- Built the I2C scanner step by step:
  1. Skeleton (Serial + Wire start)
  2. for loop counting addresses 1–126
  3. Knocking on each address with beginTransmission / endTransmission
- Result: device found at 0x29  (matches VL53L0X default address)

### Concepts learned
- Sketch structure: includes/constants on top, setup() runs once, loop() repeats
- #include libraries, Wire.begin(SDA, SCL)
- for loops , if statements, == and =
- print vs println, printing in HEX
- Scope: variables only exist inside the { } where they're created
- ESP32 boot messages (ROM) vs my program's output
- Compiler errors vs linker errors

### Issues encountered
-The program wouldn't run and the issue was found to be in the faulty connection in the jumper wires.
-Soldering a a couple of the pins was more difficult than expected and I had to use the unsolder gun to fix my mistakes


### Next
- Stage 1b: read real distances from the laser
