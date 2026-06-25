# Welding Expert System

A C++ console-based welding engineering calculator and expert system for selecting welding parameters, estimating welding performance, and recommending consumable diameters.

---

## Features

### Welding Methods

- SMAW (Shielded Metal Arc Welding)
- GMAW / MIG-MAG (Gas Metal Arc Welding)
- GTAW / TIG (Gas Tungsten Arc Welding)
- FCAW (Flux-Cored Arc Welding)
- SAW (Submerged Arc Welding)

---

## Supported Base Metals

- Mild Steel
- Stainless Steel
- Aluminum
- Copper
- Titanium
- Ti6Al4V
- Nickel 200
- Inconel 625
- Monel 400
- Hastelloy C276
- Stellite 6
- Magnesium
- Brass
- Bronze
- Aluminum Bronze
- Cu-Ni 70/30
- Lead
- Zinc
- AZ91D Magnesium Alloy
- Tantalum
- Zirconium
- Beryllium Copper
- Cast Iron

---

## Engineering Calculations

### Current Calculation

Current range is automatically selected from the internal database.

Formulas:

Imin = Kmin × t

Imax = Kmax × t

Iavg = (Imin + Imax) / 2

where:

- t = plate thickness (mm)
- Kmin, Kmax = material and process constants

---

### Voltage Calculation

V = V0 + a × Iavg

where:

- V0 = base voltage
- a = current sensitivity coefficient

---

### Welding Power

P = V × Iavg

where:

- P = welding power (W)

---

### Travel Speed

S = ((Iavg - 50) × C) / (4 × t)

where:

- C = material speed constant

---

### Heat Input

HI = (η × V × Iavg) / (1000 × S)

where:

- η = welding efficiency

---

## Expert System Functions

### Automatic Database Lookup

After selecting:

- Welding Method
- Base Metal

the software automatically loads:

- Kmin
- Kmax
- Current Sensitivity Coefficient (a)
- Speed Constant (C)

No manual engineering tables are required.

---

### Automatic Diameter Recommendation

#### SMAW Electrodes

| Diameter (mm) | Current (A) |
|---------------|------------|
| 1.6 | 20 - 40 |
| 2.0 | 30 - 60 |
| 2.5 | 50 - 90 |
| 3.2 | 80 - 140 |
| 4.0 | 120 - 200 |
| 5.0 | 160 - 280 |
| 6.0 | 220 - 350 |

#### GMAW Wire

| Diameter (mm) | Current (A) |
|---------------|------------|
| 0.6 | 30 - 80 |
| 0.8 | 50 - 130 |
| 1.0 | 80 - 180 |
| 1.2 | 120 - 280 |
| 1.6 | 200 - 400 |
| 2.0 | 300 - 500 |

#### GTAW Tungsten

| Diameter (mm) | Current (A) |
|---------------|------------|
| 0.5 | 25 |
| 1.0 | 80 |
| 1.6 | 150 |
| 2.4 | 250 |
| 3.2 | 400 |
| 4.0 | 600 |

#### FCAW Wire

| Diameter (mm) | Current (A) |
|---------------|------------|
| 0.9 | 50 - 120 |
| 1.2 | 120 - 250 |
| 1.6 | 180 - 350 |
| 2.0 | 250 - 450 |
| 2.4 | 350 - 600 |

#### SAW Wire

| Diameter (mm) | Current (A) |
|---------------|------------|
| 2.0 | 200 - 400 |
| 2.4 | 300 - 600 |
| 3.2 | 400 - 900 |
| 4.0 | 500 - 1200 |
| 4.8 | 700 - 1500 |
| 6.0 | 900 - 2000 |

---

## Project Structure

```text
WeldingExpertSystem/
│
├── include/
│   ├── MetalData.h
│   ├── MaterialDatabase.h
│   ├── WeldingData.h
│   ├── WeldingCalculator.h
│   ├── DiameterSelector.h
│   └── ReportGenerator.h
│
├── src/
│   ├── MaterialDatabase.cpp
│   ├── WeldingCalculator.cpp
│   ├── DiameterSelector.cpp
│   └── ReportGenerator.cpp
│
└── main.cpp
```

---

## Build

### Linux

```bash
g++ main.cpp src/*.cpp -Iinclude -std=c++17 -o WeldingApp
```

Run:

```bash
./WeldingApp
```

---

## Example Workflow

1. Select Welding Method
2. Select Base Metal
3. Enter Plate Thickness
4. Enter Base Voltage (V0)
5. Enter Efficiency
6. Software calculates:
   - Current Range
   - Average Current
   - Voltage
   - Power
   - Travel Speed
   - Heat Input
   - Recommended Diameter

---

## Author

Developed using C++17 as a welding engineering and educational expert system project.

## Contributors

| Name | Email |
|--------|--------|
| Abolfazl Mohammadi Yaychi| abolfazlqw12@gmail.com |
| Aliakbar Nouri | Aliknouri1382@gmail.com  |
| Reyhaneh Asle Ghasemi | reyhanehaslegasemi@gmail.com |
 Fatemeh Sadat Seyed Aghaee | fssaghaee@gmail.com |
  Zahra Mahootchi |  mahootchi2004@gmail.com |

---

Thank you to all contributors who participated in the development of this project.