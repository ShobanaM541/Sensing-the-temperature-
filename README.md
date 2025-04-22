# 🌡️ DHT11 Temperature & Humidity Display with LCD1602 I2C

This project uses an Arduino to collect temperature and humidity data from a **DHT11 sensor** and displays it on a **16x2 LCD with I2C interface**. The temperature is shown in **Celsius (°C)** and **Fahrenheit (°F)** on the LCD, while **Kelvin (K)** and **humidity (%)** are printed to the Serial Monitor.

---

## 🧰 Components Used

- Arduino Uno
- DHT11 Temperature & Humidity Sensor
- LCD1602 I2C Display (I2C address: `0x3F` or `0x27`)
- Jumper wires
- Breadboard

---

## 🔧 Features

- 📟 Live temperature display on LCD in °C and °F
- 💧 Humidity data via Serial Monitor
- 🌡️ Kelvin temperature also shown on Serial Monitor
- 🔁 Real-time data refresh every 500 milliseconds
- 🖥️ LCD with backlight for clear visibility

---

## ▶️ How to Use

1. Connect the DHT11 sensor to a digital pin (e.g., D2).
2. Connect LCD via I2C to A4 (SDA) and A5 (SCL) on Arduino.
3. Upload the Arduino code to the board.
4. Open the Serial Monitor at 9600 baud rate.
5. View real-time temperature and humidity data on both LCD and Serial Monitor.

---

## 📦 Required Libraries

- `dht11`
- `LiquidCrystal_I2C`
- `Wire.h` (usually included by default in Arduino IDE)


---

## 🧠 Author

**Shobana M** – Data Analyst & BCA Student  
Saveetha College of Liberal Arts and Sciences, Chennai

---

## 📌 Notes

- If LCD doesn’t display, try changing I2C address in the code.
- Ensure your sensor is powered correctly (5V & GND).
