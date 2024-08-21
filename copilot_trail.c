#include <stdio.h>

int main() {
    int choice;
    double value, result;

    printf("Calculator with Length Conversion\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Convert inches to meters\n");
    printf("6. Convert meters to inches\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two values to add: ");
            int value1, value2;
            scanf("%lf %lf", &value1, &value2);
            result = value1 + value2;
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            printf("Enter two values to subtract: ");
            scanf("%lf %lf", &value1, &value2);
            result = value1 - value2;
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            printf("Enter two values to multiply: ");
            scanf("%lf %lf", &value1, &value2);
            result = value1 * value2;
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            printf("Enter two values to divide: ");
            scanf("%lf %lf", &value1, &value2);
            if (value2 != 0) {
                result = value1 / value2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case 5:
            printf("Enter value in inches: ");
            scanf("%lf", &value);
            result = value * 0.0254; // Conversion factor: 1 inch = 0.0254 meters
            printf("Result: %.2lf meters\n", result);
            break;
        case 6:
            printf("Enter value in meters: ");
            scanf("%lf", &value);
            result = value / 0.0254; // Conversion factor: 1 meter = 39.37 inches
            printf("Result: %.2lf inches\n", result);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}