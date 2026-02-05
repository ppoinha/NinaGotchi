Nina AI Companion: Interactive ESP32 Desktop Pet
Nina is an interactive, emotive desktop companion powered by an ESP32 and a 2.4" TFT Touch Display. She features a dynamic personality with over 20 random moods, interactive animations (petting, feeding, shaking), and a dedicated "Learning Mode" for educational use.

🌟 Features
Dynamic Emotions: Over 20 unique facial expressions that change every 10 seconds.

Interactive Touch Sensors:

Petting: Nina reacts with heart-eyes when you touch the heart icon.

Feeding: Watch Nina eat a chocolate chip cookie with a realistic 5-second chewing animation.

Shaking: Nina expresses distress with a floating, fading "Aghhhh !!!" animation when shaken.

Learning Mode: Toggle between "Pet Mode" and "Learning Mode" to display randomized letters and numbers.

Energy Saving: Nina automatically goes to sleep with a "Zzz" animation after 5 minutes of inactivity to save power.

🛠 Hardware Requirements
Controller: ESP32 (DevKit V1 or similar).

Display: 2.4" or 2.8" ILI9341 TFT LCD with XPT2046 Touch Controller.

Communication: SPI Protocol.

⚙️ Installation & Library Setup
To compile this project, you will need the Arduino IDE and the following libraries:

TFT_eSPI by Bodmer.

XPT2046_Touchscreen by Paul Stoffregen.

⚠️ Critical Step: Configuring User_Setup.h
The TFT_eSPI library requires manual hardware configuration before the code will display correctly.

Navigate to your Arduino libraries folder (usually Documents/Arduino/libraries).

Open the TFT_eSPI folder and locate the file User_Setup.h.

Replace the contents or edit the file to match the following pinout used in this project:

C++

#define TFT_MISO 19
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS   15  // Chip select control pin
#define TFT_DC    2  // Data Command control pin
#define TFT_RST   4  // Reset pin (could connect to RST pin)

#define ILI9341_DRIVER // Ensure the correct driver is uncommented

// Touch Controller Pins
#define TOUCH_CS 33
🚀 Usage
Sidebar Controls:

Heart: Trigger the petting animation.

Cookie: Feed Nina (features a shrinking cookie and chewing mouth).

Spiral: Shake Nina (triggering the "Aghhhh !!!" floating text).

1/A / X: Toggle Learning Mode / Return to Pet Mode.

Interaction: Nina will breathe and blink naturally. If she falls asleep, simply tap the screen to wake her up.

📝 License
This project is open-source. Feel free to modify Nina's expressions and behaviors!
