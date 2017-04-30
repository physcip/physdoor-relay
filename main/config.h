/*
 * Application Configuration
 *
 * PASSWORD: Password that must be provided as POST data to "/open"
 * RELAY_TIMEOUT: Number of milliseconds the relay will close the door opener circuit
 */
#define PASSWORD "wiebJatPabImDaikOpHi"
#define RELAY_TIMEOUT 5000
#define RELAY_PIN1 7
#define RELAY_PIN2 8

/*
 * Network Configuration
 *
 * MACADDR: MAC address, should be locally administered
 */
#define MACADDR "7a:4b:5e:49:8d:ba"

/*
 * Hardware Configuration
 *
 * W5100_CSPIN: SPI Chip Select (CS) Pin of W5100, default: D10
 * SERIALPORT: `Serial1` for hardware UART or `Serial` for Serial over USB (Leonardo / DFR0222)
 */
#define W5100_CSPIN 10
#define SERIALPORT Serial1
#define SERIALBAUD 115200