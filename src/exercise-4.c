#include <stdio.h>

int main() {

    int x;
    int y;
    int max; //is going to store the number that is the largest

    printf("Enter the first number \n");
    scanf("%d", &x);
    printf("Enter the second number \n");
    scanf("%d", &y);

    if (x > y)
    {
        max = x;
    }
    else if (y > x)
    {
        max = y;
    }
    else if (x == y)
    {
        printf("Both numbers are equal");
        return 0;
    }
    
    printf("The largest number is %d \n", max); 
    
    return 0;
}
