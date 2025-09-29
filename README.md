# 🌟 Mini Project 3 – ATmega32 Embedded System

This project was developed as part of the **Embedded Systems course** using the **ATmega32 microcontroller**.  
It integrates **sensors (LDR & LM35)**, **ADC**, **PWM**, and **DC Motor control with H-Bridge**, along with an LCD interface.  

---

## 📌 Project Objectives
- Practice designing **modular drivers** (ADC, PWM, LCD, DC Motor, LDR, LM35).  
- Learn how to **interface sensors** with the ATmega32.  
- Use **PWM** to control motor speed.  
- Control **RGB LEDs** based on light intensity.  
- Display **temperature readings** from LM35 on an LCD.  

---

## 🛠️ Features
- **LDR Sensor** (ADC channel 0):  
  - Measures light intensity (0–100%).  
  - Controls RGB LED behavior according to light percentage.  

- **LM35 Sensor** (ADC channel 2):  
  - Measures temperature in °C.  
  - Displays the value on LCD.  

- **DC Motor with H-Bridge**:  
  - Rotate CW / CCW / Stop.  
  - Motor speed controlled by PWM duty cycle.  

- **LCD (16x2)**:  
  - Displays real-time sensor readings (temperature, messages, etc.).  

---

## 📂 Project Structure
