int main () {
    float tc;
    printf("Celsius (oC): ");
    scanf("%f", &tc);
    printf("Kelvin: %.2f K", tc+273.15);
    return 0;
}
