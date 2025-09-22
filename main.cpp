#include "mbed.h"

int main()
{
    // Initialise the digital pin BUTTON1 (the blue button) as an input
    DigitalIn button(BUTTON1);
    DigitalOut led(LED1);

    // Loop forever...
    while (true) {
        // Is the button being pressed?
        if (button == true) {
            printf("Button is up\n");
            led = false;
        } else {
            printf("Button is down\n");
            led = true;
        }    
        // Wait for 500ms
        thread_sleep_for(500);
    }
}
