int main () {
    float tf;
    printf("Fahrenheit(oF): ");
    scanf("%f", &tf);
    printf("Celsius: %.2f oC", 5.0*(tf-32.0)/9.0);
    return 0;
}
