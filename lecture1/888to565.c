#include <stdio.h>
/* Decodind RGB 888 to RGB 565 (simplified)*/
int main() {
    int r=0; // variables for each color
    int g=0;
    int b=0;
    printf("Converter 888 to 565");
    printf("\n level of R (0 to 255):"); // manual input each color level
    scanf("%d", &r);
    printf("\n level of G (0 to 255):");
    scanf("%d", &g);
    printf("\n level of B (0 to 255):");
    scanf("%d", &b);
    r=r >> 3; // now maximum number is "31" in decimal against 255. It is routh conversion
    g=g >> 2; 
    b=b >> 3;   
    printf("\n New level of R: %d", r);  
    printf("\n New level of G: %d", g);
    printf("\n New level of B: %d", b);
    
    return 0;
}