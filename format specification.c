#include<stdio.h>
int main(){
	printf("Opposite of %s is %s", "wrong", "right");
	printf("\nFirst Integer: %d", 12345);
	printf("\nSecond Integer: %4d", 45); //reserves 4bits for the integer
	printf("\nThird Integer: %i",1234);
	printf("\nfloating point value: %.3f", 12345.678995); //3 digits after dot
	printf("\nHexadecimal: %x", 15);
	printf("\nOctal: %o", 8);
	printf("\nSigned value: %d", -82); 
	printf("\nUnsigned value: %u", 82); //gives garbae output if input is negative
	printf("\nWe work with our %d%%", 100); //prints %
	return 0;
}
