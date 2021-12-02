#include "t1.h"
#include "t2.h"
#include "t3.h"
#include "t4.h"

int main(void)
{
    uint16_t temp;
    
    while(1)
    {
        if(t1_LED()==1) //Check if both the switches are pressed
        {
           
            TurnLED_ON();//Turn LED ON
            temp=t2_GetADC(); //Get the ADC value
            t3_PWM(temp); //PWM output based on temperature
		    t4_USARTWrite(temp); //To Serial monitor to print Temperature
            

        }
        else  //in all other cases
        {
            TurnLED_OFF();//Turn LED OFF
		    _delay_ms(200);
        }

    }
    return 0;
}
