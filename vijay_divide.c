init divide() {
    int a = 10;
    int b = 0;
    int c;

    // Check for division by zero
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return -1; // Return an error code
    }

    c = a / b;
    printf("Result: %d\n", c);
    return 0;
}