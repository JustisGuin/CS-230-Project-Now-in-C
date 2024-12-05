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

    
    }

    return 0;
}