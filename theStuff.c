#include <stdio.h>
#include <ctype.h>


int main(){
    char hexDigit;
    


    while(1){
        printf("Please enter a hexadecimal digit (Press X to exit program): ");
        scanf(" %c", &hexDigit);

        hexDigit = toupper(hexDigit);
        
         if (hexDigit =='X'){
            break;
        }

        //Logic for translating hex digit (char)
        if ((hexDigit >='0' && hexDigit <='9') || (hexDigit >='A' && hexDigit <='F')){
            int binaryValue = 0;

            //Convert hex decimal to bin Bitwise/Shifting
            if(hexDigit >='0' && hexDigit <='9'){
                binaryValue = hexDigit - '0';
            }
            else{
                binaryValue = hexDigit - 'A' + 10;
            }

            // 4 bit equiv
            printf("Translated  Hex Digit: ,%d%d%d%d\n",
                (binaryValue & 0x8) >> 3,
                (binaryValue & 0x4) >> 2,
                (binaryValue & 0x2) >> 1,
                (binaryValue & 0x1)
                );
        }
    }

    return 0;
