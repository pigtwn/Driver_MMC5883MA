#include  "mbed.h"
#include "MMC5883MA.hpp"

int main(){
    MMC5883MA sensorMag;
    MAGFIELD dataMag;
    printf("Product ID = 0x%x\r\n",sensorMag.id);
    int count = 100;
    while(count--){
        sensorMag.getMag(&dataMag);
        puts("\nMagnatic Field Strength");
        printf("x = %f\ty = %f\tz = %f\r\n",dataMag.x,dataMag.y,dataMag.z);
        wait(1);
    }
    return 0;
}
