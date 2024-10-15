#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
In this programm there will be a user input of any number and its number system (bin, hex, dec)
The user choses a number system and it will be converted into the chosen system
*/

//function decimal to binary
 char* decimal_to_binary(int decimal){
    static char result[33];
    result[32] = '\n';

    for (int i = 31; i >= 0; i--) {
        result[i] = (decimal % 2) + '0';
        decimal /= 2;
    };


    char* binary_str = result;
    while (*binary_str == '0' && *(binary_str + 1) != '\0') {
        binary_str++;
    }

    return (*binary_str == '\0') ? "0" : binary_str;
}

//function decimal to binary
int binary_to_decimal(const char *binary) {
    printf("%s", binary);
    return 6;
}


int main(void)

{
    char type_i, type_o;
    int input_decimal;
    char input_binary[33];

    //loop until valid input is put in
    for(int i = 0; i != 1;)
    {
    //User Chooses a number system
    printf("Choose a number system for your input\n");
    printf("Type:\t\t\"b\" for binary \t\t\"d\" for decimal\t\t\"h\" for hexadecimal\n");
    scanf(" %c", &type_i);
    if (type_i == 'b' || type_i == 'd' || type_i == 'h')
    {
        break;
    }
    else
    {
        printf("invalid input - try again! \n");
    }
    }

    //User inputs number

    if (type_i == 'd') {
        printf("Input your decimal number:\n");
        scanf(" %d", &input_decimal);
    } else if (type_i == 'b') {
        printf("Input your binary number:\n");
        scanf("%s", input_binary);
    }

    // Convert input string to integer

    //loop until valid output is put in
    for(int i = 0; i != 1;)
    {
    //User Chooses a number system
    printf("Choose a number system for your output\n");
    printf("Type:\t\t\"b\" for binary \t\t\"d\" for decimal\t\t\"h\" for hexadecimal\n");
    scanf(" %c", &type_o);
    if (type_o == 'b' || type_o == 'd' || type_o == 'h')
    {
        break;
    }
    else
    {
        printf("invalid input - try again! \n");
    }
    }

    if (type_i == 'd' && type_o == 'b') {
        char *binary_result = decimal_to_binary(input_decimal);
        printf("%s\n", binary_result);
    } else if (type_i == 'b' && type_o == 'd') {
        int decimal_result = binary_to_decimal(input_binary);
        printf("Decimal result: %d\n", decimal_result);
    }

    return 0;
}
