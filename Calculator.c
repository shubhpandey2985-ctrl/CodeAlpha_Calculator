#include <stdio.h>

void displayMenu(void)
{
    printf("\n============================= CALCULATOR MENU =============================\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("==========================================================================\n");
    printf("Enter your choice: ");
}

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

void clearInputBuffer(void)
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
    }
}

int main(void)
{
    int choice;
    float firstNumber, secondNumber, result;

    while (1)
    {
        displayMenu();

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a valid menu choice.\n");
            clearInputBuffer();
            continue;
        }

        clearInputBuffer();

        switch (choice)
        {
        case 1:
            printf("Enter first number: ");
            if (scanf("%f", &firstNumber) != 1)
            {
                printf("Invalid input. Please enter a number.\n");
                clearInputBuffer();
                break;
            }

            printf("Enter second number: ");
            if (scanf("%f", &secondNumber) != 1)
            {
                printf("Invalid input. Please enter a number.\n");
                clearInputBuffer();
                break;
            }

            clearInputBuffer();
            result = add(firstNumber, secondNumber);
            printf("Result: %.2f\n", result);
            break;

        case 2:
            printf("Enter first number: ");
            if (scanf("%f", &firstNumber) != 1)
            {
                printf("Invalid input. Please enter a number.\n");
                clearInputBuffer();
                break;
            }

            printf("Enter second number: ");
            if (scanf("%f", &secondNumber) != 1)
            {
                printf("Invalid input. Please enter a number.\n");
                clearInputBuffer();
                break;
            }

            clearInputBuffer();
            result = subtract(firstNumber, secondNumber);
            printf("Result: %.2f\n", result);
            break;

        case 3:
            printf("Enter first number: ");
            if (scanf("%f", &firstNumber) != 1)
            {
                printf("Invalid input. Please enter a number.\n");
                clearInputBuffer();
                break;
            }

            printf("Enter second number: ");
            if (scanf("%f", &secondNumber) != 1)
            {
                printf("Invalid input. Please enter a number.\n");
                clearInputBuffer();
                break;
            }

            clearInputBuffer();
            result = multiply(firstNumber, secondNumber);
            printf("Result: %.2f\n", result);
            break;

        case 4:
            printf("Enter first number: ");
            if (scanf("%f", &firstNumber) != 1)
            {
                printf("Invalid input. Please enter a number.\n");
                clearInputBuffer();
                break;
            }

            printf("Enter second number: ");
            if (scanf("%f", &secondNumber) != 1)
            {
                printf("Invalid input. Please enter a number.\n");
                clearInputBuffer();
                break;
            }

            clearInputBuffer();
            if (secondNumber == 0.0f)
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                result = divide(firstNumber, secondNumber);
                printf("Result: %.2f\n", result);
            }
            break;

        case 5:
            printf("Thank you for using the Calculator.\n");
            return 0;

        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }

    return 0;
}
