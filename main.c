#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

#define MAX 10
#define MIN 0

/* Function to calculate the average of a variable number of integers */
double average_1(int count, ...) {
    va_list args;
    double sum = 0;
    int i;

    va_start(args, count);
    for (i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum / count;
}

/* Function to calculate the average of an integer array */
double average(int *arr, int size) {
    double sum = 0;
    int i;

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

/* Function to calculate a specific mathematical expression */
double calculate_expression(double x, double y, double z) {
    return sqrt(fabs(-3 * log(x) * log10(z * z + y) / sqrt(fabs(x)) + 1));
}

/* Function to prompt user input and process the expression */
void process_expression(double (*expr_func)(double, double, double)) {
    double x, y, z, result;
    printf("Enter x, y, and z: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    if (x == 0) {
        printf("Error\n");
        return;
    }

    result = expr_func(x, y, z);
    printf("Result: %lf\n", result);
}

/* Function to manipulate arrays in an unsafe manner (for demonstration purposes) */
void hack_array(){
    int arr1[10], arr2[10];
    int i;

    for(i = 0; i < 10; i++){
        arr1[i] = rand() % (MAX - MIN + MIN) + MIN;
        arr2[i] = rand() % (MAX - MIN + MIN) + MIN;
        printf("%d ", arr1[i]);
        printf("%d\n", arr2[i]);
    }
    *(arr1 + 11) = 99999;  // Deliberate out-of-bounds access
    printf("%d %d %d\n", arr1[8], arr1[9], arr1[11]);
    printf("%d %d %d\n", arr2[0], arr2[1], arr2[2]);
}

int main() {
    int random_numbers[10];
    int array[10];
    int arr[10];
    int i;

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        random_numbers[i] = rand() % 100;
        printf("%d ", random_numbers[i]);
    }
    printf("\n");

    double avg_1 = average_1(10, random_numbers[0], random_numbers[1], random_numbers[2],
                              random_numbers[3], random_numbers[4], random_numbers[5],
                              random_numbers[6], random_numbers[7], random_numbers[8],
                              random_numbers[9]);

    printf("average_1: %.2f\n", avg_1);

    for (i = 0; i < 10; i++) {
        array[i] = rand() % 100;
        printf("%d ", array[i]);
    }
    printf("\n");

    double avg_2 = average(array, 10);
    printf("average_2: %.2f\n", avg_2);

    process_expression(calculate_expression);

    for (i = 0; i < 10; i++) {
        arr[i] = rand() % (MAX - MIN + MIN) + MIN;
        printf("%d ", arr[i]);
    }
    printf("\n");

    hack_array();
    return 0;
}
