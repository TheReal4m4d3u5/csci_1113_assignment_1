/*
                                                    Avery Jacobson 
                                                    csci 1113
                                                    James Polzin
*/

#include <stdio.h>

int main()
{
    int meter1, meter2, meter3, meter4, meter5;
    float kilo1, kilo2, kilo3, kilo4, kilo5;
    float yard1, yard2, yard3, yard4, yard5;
    float mile1, mile2, mile3, mile4, mile5;
    
    meter1 = 100;
    meter2 = 200;
    meter3 = 400;
    meter4 = 800;
    meter5 = 1500;
    
    kilo1 = meter1 * .001;
    kilo2 = meter2 * .001;
    kilo3 = meter3 * .001;
    kilo4 = meter4 * .001;
    kilo5 = meter5 * .001;
    
    yard1 = meter1 * 1.094;
    yard2 = meter2 * 1.094;
    yard3 = meter3 * 1.094;
    yard4 = meter4 * 1.094;
    yard5 = meter5 * 1.094;
    
    mile1 = meter1 * .0006215;
    mile2 = meter2 * .0006215;
    mile3 = meter3 * .0006215;
    mile4 = meter4 * .0006215;
    mile5 = meter5 * .0006215;
    
    
    
    printf("Table of Olympic running distances\n");
    printf("____________________________________________________\n");
    printf("Meters      Kilometers         Yards           Miles\n");
    printf("%6i %15.3f %13.3f %15.3f\n", meter1, kilo1, yard1, mile1);
    printf("%6i %15.3f %13.3f %15.3f\n", meter2, kilo2, yard2, mile2);
    printf("%6i %15.3f %13.3f %15.3f\n", meter3, kilo3, yard3, mile3);
    printf("%6i %15.3f %13.3f %15.3f\n", meter4, kilo4, yard4, mile4);
    printf("%6i %15.3f %13.3f %15.3f\n", meter5, kilo5, yard5, mile5);
    
    return 0;
    
}
