  # MaRS Electronics Task
  
  ## Q1 – Blinking LEDs
  Tinkercad Link: https://www.tinkercad.com/things/i682sGCrgcT  
  This circuit uses three LEDs connected to an Arduino Uno, each blinking at different time intervals (500 ms, 1000 ms, and 1500 ms). The millis() function is used instead of delay() to track time, allowing all LEDs to blink independently without blocking the program execution. Separate timers are maintained for each LED to ensure accurate timing.
  
  ## Q2 – RGB LED with Potentiometer
  Tinkercad Link: https://www.tinkercad.com/things/fr2QsVm8tqK  
  A potentiometer is connected to an analog input pin to vary voltage, which is read using analogRead(). This value is mapped to control the intensity of red, green, and blue channels of an RGB LED using PWM signals. The same input is also used to control the blinking speed of a separate LED using millis(). As the potentiometer is turned, both color and blinking speed change in real time.
  
  ## Q3 – Reaction Time Tester
  Tinkercad Link: https://www.tinkercad.com/things/bFBEVDz9PIZ  
  In this circuit, an LED turns on after a random delay generated using the random() function. Once the LED lights up, the user presses a pushbutton, and the reaction time is calculated using the difference between two millis() values. The button is configured using INPUT_PULLUP, so it reads LOW when pressed. The result is displayed in the Serial Monitor, and the system resets for the next attempt.
  
  ---
  
  ## Proof of Working
  
  ### Q1
  <img width="998" height="506" alt="Screenshot 2026-04-07 183215" src="https://github.com/user-attachments/assets/350ca2a7-dbbc-4e8c-ab1c-155a10f34664" />
  
  ### Q2
  <img width="919" height="501" alt="Screenshot 2026-04-07 183415" src="https://github.com/user-attachments/assets/5e9c8155-a5bf-4f15-9593-cde7ed6d59a9" />
  
  ### Q3
  <img width="1918" height="823" alt="Screenshot 2026-04-07 184027" src="https://github.com/user-attachments/assets/1ab3879c-aff9-4908-9971-ef6f2f24d896" />
  
  # Section B – Mini Projects
  
  ## 1. Automatic Street Light (LDR Based)
  
  Tinkercad Link: https://www.tinkercad.com/things/jT6y6wLW7iq
  
  This project implements an automatic street light system using an LDR (Light Dependent Resistor) to detect ambient light levels. The system turns ON the light during low light conditions and turns it OFF when sufficient light is present.
  
  This project was implemented in two different ways:
  
  1. Transistor-Based Circuit:
  A BC547 transistor is used along with an LDR and resistors to form a voltage divider. When it becomes dark, the voltage at the base of the transistor increases, turning ON the LED.
  
  2. Arduino-Based Circuit:
  The LDR is connected to an analog pin of the Arduino. The light intensity is read using analogRead(), and based on a threshold value, the LED is controlled using digital output.
  
  Both implementations were successfully tested in:
  - Tinkercad simulation
  - Physical hardware prototype (breadboard)
  
  This demonstrates both basic analog electronics and microcontroller-based implementation of the same concept.
  ---
  
  ## 2. Adaptive Traffic Signal Control Based on Junction Density
  
  Tinkercad Link: https://www.tinkercad.com/things/1ibv538ryhC
  
  This project is my own idea, inspired by real traffic conditions observed in busy junctions where fixed signal timings are inefficient. In many areas, traffic density varies significantly throughout the day, but traffic signals operate with constant timing, leading to unnecessary waiting or signal violations.
  
  To address this, I designed a system that dynamically adjusts the traffic signal timing based on traffic density at the junction.
  
  A potentiometer is used in the simulation to represent traffic density (low, medium, high). The analog value is read using analogRead(), and based on this input, the system classifies traffic into different levels:
  - LOW traffic → shorter green signal time
  - MEDIUM traffic → moderate green signal time
  - HIGH traffic → longer green signal time
  
  The system then adjusts the duration of the green signal accordingly, while maintaining proper sequencing of RED → GREEN → YELLOW signals.
  
  Additionally, real-time data such as:
  - Sensor value
  - Traffic level
  - Green signal duration  
  is displayed on the Serial Monitor for better understanding and debugging.
  
  This project demonstrates how simple sensor inputs can be used to build an intelligent and adaptive traffic management system, improving efficiency and reducing unnecessary waiting time at signals.
  
  ---
  
  ## 3. RGB LED Controller
  
  This project allows switching between multiple colors of an RGB LED using a push button. PWM (Pulse Width Modulation) is used to control the intensity of the red, green, and blue channels, enabling the generation of different colors.
  
  Each button press changes the mode, cycling through predefined colors such as red, green, blue, yellow, cyan, purple, white, and others. A simple debounce mechanism is implemented to avoid multiple triggers from a single press.
  
  This project demonstrates the use of PWM signals, button input handling, and basic user interaction to control output in an embedded system.
  
  ---
  
  ## Proof of Working
  
  ### Simulation (TinkerCAD)
  
  #### Adaptive Traffic Signal
  <img width="1919" height="873" alt="Screenshot 2026-04-08 170338" src="https://github.com/user-attachments/assets/2d9c793b-5533-46cb-bfcf-fd53beaa2d12" />
  <img width="1918" height="805" alt="Screenshot 2026-04-08 165922" src="https://github.com/user-attachments/assets/f9969f37-b642-4a22-887a-28a79aead274" />
  
  #### Automatic Street Light
  <img width="1919" height="833" alt="Screenshot 2026-04-08 183743" src="https://github.com/user-attachments/assets/b33e251e-a67d-4aa5-9dfa-c5f07c56d55c" />
  <img width="1919" height="815" alt="Screenshot 2026-04-08 183731" src="https://github.com/user-attachments/assets/4d6f3b67-4bf8-4b66-8e55-a0affe56ee7d" />
  
  
  ### Hardware Implementation
  
  #### Automatic Street Light (BC547 Transistor)
  <img width="1279" height="716" alt="Screenshot 2026-04-08 222627" src="https://github.com/user-attachments/assets/24e2b4bd-1a51-4437-ac85-c98ba8e3cf81" />
  
  #### Arduino-based Street Light
  <img width="1328" height="877" alt="Screenshot 2026-04-08 223222" src="https://github.com/user-attachments/assets/4304103c-8831-42e4-8eb4-a08845af8fcb" />
  
  ### Video Demonstration
  
  Working videos of the hardware prototypes are provided below:
  
  ---
  
  #### 🔹 Automatic Street Light
  
  - **Using BC547 Transistor (Analog Circuit):**  
    [▶ Watch Video](https://github.com/user-attachments/assets/c7dfcfdc-2d51-4797-9053-87246c336c7e)
  
  - **Using Arduino Microcontroller:**  
    [▶ Watch Video](https://github.com/user-attachments/assets/68a3939b-4022-4e31-a389-efc5a88c8497)
  
  ---
  
  #### 🔹 RGB LED Controller
  
  - **Button-controlled color switching:**  
    [▶ Watch Video](https://github.com/user-attachments/assets/61490ccc-2b2f-4cb6-94a9-91d4aac2e644)
  
  ---

