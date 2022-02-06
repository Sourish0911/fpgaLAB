// Online C compiler to run C program online
#include<stdio.h>
unsigned int nand(unsigned char A,const unsigned char B);
unsigned int sum(unsigned char A,unsigned char B, unsigned char Cin);
unsigned int carry(unsigned char A,unsigned char B, unsigned char Cin);

int main()
{
    //outputs for Half adder
   unsigned char S_FA, Cout_FA;
    

    //inputs for Half adder
   unsigned char A = 0x01, B = 0x01, Cin = 0x01;
    S_FA = sum(0x01,0x01,0x01);
    Cout_FA = carry(0x01,0x01,0x01);
    printf("Sum = %x Carry = %x",(unsigned int)S_FA, (unsigned int)Cout_FA);
    return 0;
}


unsigned int nand(unsigned char A,unsigned char B)
{
   return !(A&B);
}

unsigned int sum(unsigned char A,unsigned char B, unsigned char Cin)
{
    unsigned char S_FA;
    unsigned char nand1 = nand(A,B);
    unsigned char nand2 = nand(nand1,A);
    unsigned char nand3 = nand(nand1,B);
    unsigned char nand4 = nand(nand2,nand3);
    unsigned char nand5 = nand(nand4,Cin);
    unsigned char nand6 = nand(nand4,nand5);
    unsigned char nand7 = nand(nand5,Cin);
    S_FA = nand(nand6,nand7); 
    return S_FA;
}

unsigned int carry(unsigned char A,unsigned char B, unsigned char Cin)
{
    unsigned char nand1 = nand(A,B);
    unsigned char nand2 = nand(nand1,A);
    unsigned char nand3 = nand(nand1,B);
    unsigned char nand4 = nand(nand2,nand3);
    unsigned char nand5 = nand(nand4,Cin);
    unsigned char nand6 = nand(nand4,nand5);
    unsigned char nand7 = nand(nand5,Cin);
    unsigned char Cout_FA = nand(nand5,nand1);
    return Cout_FA;
}