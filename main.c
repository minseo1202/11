#include <stdio.h>

int main(void)
{
    int i;
    int grade[5];
    int sum = 0;

    for(i=0;i<5;i++)
    {
        printf("grade[%i] = ", i);
        scanf("%d", &grade[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("grade[%i] = %i\n", i, *(grade+i)); // grade+1은 1bit가 아니라 4bit를 더한 주소값. grade+1은 grade[1]과 같음!
        sum = sum + *(grade+i);
    }

    printf("Average : %i\n", sum/5);


    return 0;
}