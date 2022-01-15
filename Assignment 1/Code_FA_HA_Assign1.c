// Online C compiler to run C program online
#include<stdio.h>
int main()
{
    //outputs for Half adder
    unsigned char S_FA, Cout_FA;
    
    //outputs for Full adder
    unsigned char S_HA, Cout_HA;
    
    //inputs for Half adder
    unsigned char A_HA = 0x01, B_HA = 0x01;
    
    //inputs for Full adder
    unsigned char A=0x01, B=0x01, Cin=0x01;
    
    //HALF ADDER Logic
    S_HA = A_HA^B_HA;
    Cout_HA = A_HA&B_HA;
    
    //FULL ADDER Logic
    S_FA = A^B^Cin;
    Cout_FA = ((A^B)&Cin) + (A&B);
   
    
    //IO for Half adder
    printf("Inputs for Half Adder are  A = %x B = %x", (unsigned int)A_HA,(unsigned int)B_HA);
    printf(" ");
    printf("\n Output for Half Adder Sum= %x Carry = %x \n\n", (unsigned int)S_HA,(unsigned int)Cout_HA);
    
    //IO for Full adder
    printf("Inputs for Full Adder are  A = %x B = %x Cin = %x", (unsigned int)A,(unsigned int)B, (unsigned int)Cin);
    printf(" ");
    printf("\n Output for Full Adder Sum= %x Carry = %x", (unsigned int)S_FA,(unsigned int)Cout_FA);
    
    return 0;
}