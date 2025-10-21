# 🌱 Soil Moisture Monitoring and Smart Irrigation System (ESP8266)

An IoT-based smart irrigation project using the **ESP8266 NodeMCU** that monitors soil moisture in real time and automatically controls a water pump.  
Designed for **efficient water usage** and **sustainable agriculture**.

---

## 🧭 Overview
The system measures soil moisture using a sensor and activates a relay-controlled water pump when the soil gets dry.  
Data can be monitored remotely over WiFi, making it ideal for small farms, gardens, and greenhouse setups.

---

## ✨ Features
- Real-time soil moisture monitoring  
- Automatic pump control  
- Remote monitoring via WiFi  
- Low-cost and scalable design  
- Expandable with additional sensors

---

## ⚙️ Hardware & Components
- **NodeMCU (ESP8266):** Main controller with WiFi  
- **Soil Moisture Sensor:** For sensing soil water content  
- **Relay Module:** To switch the water pump  
- **Water Pump:** For irrigation  
- **Power Supply (5V):** To power NodeMCU and relay  
- **Jumper Wires / Breadboard:** For connections  

---

## 🔌 Circuit Setup
- Soil moisture sensor → **A0**  
- Relay IN pin → **D1**  
- VCC and GND → **3.3V** and **GND**  
- Pump connected to the relay output (external 5V/12V power if needed)

---

## 💻 Software Setup
1. Install **Arduino IDE**  
2. Add **ESP8266 board support**  
3. Install libraries:  
   - `ESP8266WiFi.h`  
   - `BlynkSimpleEsp8266.h` *(optional for cloud use)*  
4. Upload the sketch to NodeMCU  
5. Set your **WiFi credentials** and **moisture threshold**  
6. View readings and pump activity in real time

---

## 🌾 Applications
- Smart agriculture and precision farming  
- Home gardens and greenhouses  
- Parks and landscape irrigation  
- Drought-area water management  

---

## 🔮 Future Enhancements
- Add temperature, humidity, or pH sensors  
- Mobile notifications and dashboard display  
- Solar-powered version for remote areas  
- AI-based irrigation prediction  
