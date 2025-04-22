# 🌡️ DHT11 Temperature & Humidity Display with LCD1602 I2C

This Arduino project reads temperature and humidity data from a **DHT11 sensor** and displays it on a **16x2 LCD with I2C interface**. The temperature is shown in **Celsius, Fahrenheit**, and optionally **Kelvin** on the serial monitor.

---

## 🧰 Components Used

- Arduino Uno
- DHT11 Temperature and Humidity Sensor
- LCD1602 I2C Display (address: `0x3F`)
- Jumper wires
- Breadboard

---

## 🔧 Features

- Displays real-time temperature in Celsius (°C) and Fahrenheit (°F)
- Humidity reading shown on the Serial Monitor
- Backlit LCD display with clear formatting
- Celsius, Fahrenheit, and Kelvin outputs on Serial Monitor

---

## 📂 Code Overview

- `dht11.h` is used to interact with the DHT11 sensor.
- LCD is initialized using `LiquidCrystal_I2C` library.
- A custom `getTemp(char type)` function returns temperature in `C`, `F`, or `K`.

---

## 📺 Output Example

**LCD Display:**
