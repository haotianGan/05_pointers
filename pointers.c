#include <stdio.h>

int main(){
    char myChar = 0; //1 byte
    int myInt = 0; //4 bytes
    long myLong = -922; //8 bytes
    printf("-Char- \nDecimal: %ul\nHex: %p\n\n", &myChar, &myChar);
    printf("-Int- \nDecimal: %ul\nHex: %p\n\n", &myInt, &myInt);
    printf("-Long- \nDecimal: %ul\nHex: %p\n\n", &myLong, &myLong);

    char *myCharPointer = &myChar;
    int *myIntPointer = &myInt;
    long *myLongPointer = &myLong;
    
    //Modify variables
    *myCharPointer = 5;
    *myIntPointer = 50;
    *myLongPointer = 922;
    //Print out modified variables
    printf("%d\n", myChar);
    printf("%d\n", myInt);
    printf("%ld\n\n", myLong);

    //Declare and initialize an unsigned int variable
    unsigned int myUnsignedInt = 4294967295;
    unsigned int *myUIntPointer = &myUnsignedInt;
    unsigned char *myUIntPointerButItsChar = &myUnsignedInt;

    //Print pointer and their dereferenced values
    printf("myUIntPointer: %p points to %u\n", myUIntPointer, *myUIntPointer);
    printf("myUIntPointerButItsChar: %p points to %hhu\n\n", myUIntPointerButItsChar, *myUIntPointerButItsChar);

    //Print out unsigned int
    printf("-My unsigned int- \nHexadecimal: %x\nDecimal: %u\n\n", myUnsignedInt, myUnsignedInt);

    //Print out my unsigned int but one byte at a time
    unsigned char *p = &myUnsignedInt;
    printf("%lu One byte: %hhx, %hhu\n", p, *p, *p);
    p++;
    printf("%lu One byte: %hhx, %hhu\n", p,*p, *p);
    p++;
    printf("%lu One byte: %hhx, %hhu\n", p,*p, *p);
    p++;
    printf("%lu One byte: %hhx, %hhu\n", p,*p, *p);
    p++;

    //Add one to each byte
    p = &myUnsignedInt;
    *p+=1;
    printf("%lu One byte: %hhx, %hhu\n", p, *p, *p);
    p++; *p+=1;
    printf("%lu One byte: %hhx, %hhu\n", p, *p, *p);
    p++; *p+=1;
    printf("%lu One byte: %hhx, %hhu\n", p, *p, *p);
    p++; *p+=1;
    printf("%lu One byte: %hhx, %hhu\n", p, *p, *p);


    p = &myUnsignedInt;
    
    printf("After adding one to each byte: %u\n", myUnsignedInt);

    //Add 16 to each byte
    p = &myUnsignedInt;
    *p+=16;
    printf("%lu One byte: %hhx, %hhu\n", p, *p, *p);
    p++; *p+=16;
    printf("%lu One byte: %hhx, %hhu\n", p, *p, *p);
    p++; *p+=16;
    printf("%lu One byte: %hhx, %hhu\n", p, *p, *p);
    p++; *p+=16;
    printf("%lu One byte: %hhx, %hhu\n", p, *p, *p);

    p = &myUnsignedInt;
    
    printf("After adding 16 to each byte: %u", myUnsignedInt);
}