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

## ⚙️ System Behavior
- **Light intensity levels** (via LDR):  
  - `< 15%` → Red + Green + Blue LEDs ON.  
  - `16–50%` → Red + Green ON.  
  - `51–70%` → Red ON.  
  - `> 70%` → All LEDs OFF.  

- **Temperature monitoring** (via LM35):  
  - Reads °C from ADC.  
  - Displays live value on LCD.  

- **DC Motor control**:  
  - Controlled via PWM (Timer0).  
  - Speed proportional to duty cycle.  
  - Direction set through H-Bridge inputs.  

---

## 🛠️ Hardware Requirements
- ATmega32 (16 MHz).  
- LDR + resistor divider.  
- LM35 temperature sensor.  
- H-Bridge (L293D or SN754410).  
- DC Motor (5V/12V).  
- RGB LED.  
- LCD 16x2.  
- Power supply (5V).  

---

## 🚀 Getting Started
1. Build the project in **Atmel Studio / Microchip Studio**.  
2. Flash the `.hex` file to the ATmega32.  
3. Connect hardware according to schematic.  
4. Run the system and observe LEDs, LCD, and motor operation.  

---

## 📸 Demo
🔗 [LinkedIn](https://www.linkedin.com/posts/moamr04_embeddedsystems-smarthome-iot-activity-7378072442507816960-Ic-Q?utm_source=social_share_send&utm_medium=member_desktop_web&rcm=ACoAAETVuYEB4Qeqhcj92reIoQuR05DbOfhIkgU)   

---

## 👨‍💻 Author
**Edges For Training Team**  

---

## 📜 License
This project is developed for educational purposes as part of **Embedded Systems coursework**.  
You are free to use and modify it for learning.  
