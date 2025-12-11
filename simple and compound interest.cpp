#include <stdio.h> 
#include <math.h> 
int main() { 
float P, R, T; 
float SI, CI;
printf("enter P value");
scanf("%f", &P); 
printf("\n enter R value");
scanf("%f", &R);
printf("\n enter T value");
scanf("%f", &T); 
// Simple Interest 
SI = (P * R * T) / 100; 
// Compound Interest 
CI = P * pow((1 + R / 100), T) - P; 
printf("Simple Interest: %.2f\n", SI); 
printf("Compound Interest: %.2f", CI); 
return 0; 
} 
