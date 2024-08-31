#include<stdio.h>
#include<math.h>

int main() {

    int sideA, sideB, sideC;
    // Ask for sides
    printf("What is side A? ");
    scanf("%d", &sideA);
    printf("What is side B? ");
    scanf("%d", &sideB);
    printf("What is side C? ");
    scanf("%d", &sideC);
    printf("Side A is %d, side B is %d and side C is %d\n", sideA, sideB, sideC);
    
    // Semi perimeter
    float s = (sideA + sideB + sideC)/2;
    // Area calculation
    float area = sqrt(s*(s-sideA)*(s-sideB) * (s-sideC));
    printf("Area is: %f", area);
    return 0;
}

