// Online C compiler to run C program online
#include<stdio.h>
unsigned int nand(unsigned char A,const unsigned char B);

int main()
{
    //outputs for Half adder
   unsigned char S_HA, Cout_HA;
    

    //inputs for Half adder
   unsigned char A = 0x00, B = 0x01;
    

    //HALF ADDER Logic
    unsigned char nand1 = nand(A,B);
    unsigned char nand2 = nand(nand1,A);
    unsigned char nand3 = nand(nand1,B);
    S_HA = nand(nand2,nand3); 
    Cout_HA = nand(nand1,nand1);
    
    printf("Sum = %x Carry = %x",(unsigned int)S_HA, (unsigned int)Cout_HA);
    return 0;
}


unsigned int nand(unsigned char A,unsigned char B)
{
   return !(A&B);
}