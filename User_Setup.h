#define USER_SETUP_INFO "CYD_FIXED"

#define ILI9341_2_DRIVER    // Use this specific driver for CYD
#define TFT_WIDTH  240      // Note: Low level width (physical)
#define TFT_HEIGHT 320      // Note: Low level height (physical)

// CYD Screen Pins (HSPI)
#define TFT_MISO 12
#define TFT_MOSI 13
#define TFT_SCLK 14
#define TFT_CS   15
#define TFT_DC    2
#define TFT_RST  -1
#define TFT_BL   21

// CYD Touch Pins are NOT defined here because they are on a separate bus!
// We will handle them in the code.

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF

#define SMOOTH_FONT

#define SPI_FREQUENCY  55000000
#define SPI_READ_FREQUENCY  20000000