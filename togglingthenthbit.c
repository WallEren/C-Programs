#include <stdio.h>

int main()
{
    int num, nthbit, corresponding_bit, newnum;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter nth bit: ");
    scanf("%d", &nthbit);
    corresponding_bit = (num>>nthbit)&1;
    printf("Corresponding Bit: %d\n", corresponding_bit);
    if (corresponding_bit==1)
    {
        newnum = num ^ (1 << nthbit);
    }
    else
    {
      newnum = num | (1 << nthbit);
    }
    printf("Number before toggling nth bit : %d\n", num);
    printf("Number after toggling nth bit: %d\n", newnum);
}
