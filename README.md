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
