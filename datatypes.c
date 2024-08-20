/*
int          - %d for printing
double       - %lf for printing (we can use 'double' for expotential variabls also, it can keep decimal numbers more precisely )
float        - %f for printing (we can use 'float' for expotential variabls also)
char         - %c for printing
*/

 #include <stdio.h>
  int main() {
    
    int age = 10;
    printf("Age = %d", age);
    
    printf("\n");

    double number = 12.45;
    printf("Number = %.2lf", number);  //we added .x before % (x= how many numbers we want to show after decimal) such as .x=.2 | this can be used in any datatype

    printf("\n");

    double number0 = 6.9e6;
    printf("Number0 = %.0lf", number0);

    printf("\n");
    
    float number1 = 10.9f;  //we added f after the decimal number because its a syntax to indicate that the number is a float number rather than a decimal number
    printf("Number1 = %.1f", number1);
    
    printf("\n");

    char character ='X'; // single quotation mark is used in character
    printf("Character = %c", character);

    /* a character data is internally stored as an integer value rather than the character itself. so if we
    use %d to print a char variable, it is equivalent in deserve value */

    printf(" = %d", character);

    printf("\n");

    // "sizeof()" operator is used to find the size of datatypes. it uses '%zu' for printing. the unit is in bytes but the unit will not be shown 

    printf("int size = %zu", sizeof(age));

    printf("\n");
    
    printf("double size = %zu", sizeof(number));

    printf("\n");

    printf("float size = %zu", sizeof(number1));

    printf("\n");
    
    printf("char size = %zu", sizeof(character));

    return 0;
  }