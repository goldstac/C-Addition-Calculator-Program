#include <stdio.h>
int main() {
    int first_number;
    int second_number;
    printf("Enter First Number \n");
    scanf("%d",&first_number);
    printf("Enter Second Number \n");
    scanf("%d",&second_number);
    int calculate = first_number + second_number;
    printf("The Total Is %d\n",calculate);
    return 0;
}
