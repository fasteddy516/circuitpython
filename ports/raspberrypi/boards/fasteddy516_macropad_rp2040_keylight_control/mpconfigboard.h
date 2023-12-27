#define MICROPY_HW_BOARD_NAME "KeyLight Controller (Adafruit MacroPad)"
#define MICROPY_HW_MCU_NAME "rp2040"

#define MICROPY_HW_NEOPIXEL (&pin_GPIO19)

#define DEFAULT_I2C_BUS_SCL (&pin_GPIO21)
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO20)

#define DEFAULT_SPI_BUS_SCK (&pin_GPIO26)
#define DEFAULT_SPI_BUS_MOSI (&pin_GPIO27)
#define DEFAULT_SPI_BUS_MISO (&pin_GPIO28)
