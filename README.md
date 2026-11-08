# posture-guardian
Non-contact desk posture monitor using dual ToF lasers, ESP32 and servo alerts
# Posture Guardian

A non-contact desk device that detects slouching and "text neck" using two
laser distance sensors, and alerts you with a moving flag — no wearables needed.

## Why this project
Slouching Guard is my first engineering build. When I was thinking about my first build I have put a list of requirements that I needed to hit with this project. First of all just like all the engineering projects this should solve a proble, Second of all it needs to be doable for a 1st year Mechatronic Engineering student(me). Third of all I wanted it to be integrated into my daily life so It will constantly going to be useful and as I tried to combine all of those factors, the idea was born and then now in the progress of being brought into flesh.

>  **Work in progress** — currently at Stage 1 (sensor testing)

![Components](images/components_overview.jpg)

## How it works
Two VL53L0X time-of-flight lasers measure the distance to your torso and head.
If your head moves forward relative to your chest (text neck), or both move
closer (slouching) for more than 10 seconds, a servo raises a warning flag in
your peripheral vision.

## Hardware
| Part | Purpose |
|---|---|
| ESP32-WROOM-32 | Microcontroller |
| 2× VL53L0X ToF laser sensors | Torso + head distance |
| SSD1306 0.96" OLED | Status display |
| 2× MG90S servos | Head-tracking gimbal + warning flag |
| Tactile button | Calibration |

## Wiring
| Signal | ESP32 pin |
|---|---|
| I2C SDA | GPIO 21 |
| I2C SCL | GPIO 22 |
| Laser XSHUT (torso / head) | GPIO 18 / 19 |
| Servo: head gimbal / flag | GPIO 25 / 26 |
| Button | GPIO 4 |

## Progress
- [x] Stage 0 — Toolchain setup, first flash
- [x] Soldering — sensor headers
- [x] Stage 1a — I2C scan (laser detected at 0x29)
- [ ] Stage 1b — Read distances
- [ ] Stage 1c — OLED + both lasers (address reassignment)
- [ ] Stage 2 — Calibration button
- [ ] Stage 3 — Servos (gimbal + flag)
- [ ] Stage 4 — Posture detection logic
- [ ] Stage 5 — CAD + 3D-printed enclosure
- [ ] Stage 6 — BLE + OTA updates

## Repository structure
- `firmware/` — code for each project stage
- `exercises/` — practice sketches from learning embedded C++
- `images/` — build photos
- `cad/` — SolidWorks parts, assemblies, and STL files for printing
- `LOG.md` — dated build diary

## What I'm learning
Embedded C++ (Arduino), I2C communication, soldering, debugging hardware,
non-blocking timing, CAD (Solidworks), 3d printing, and Git/GitHub.
