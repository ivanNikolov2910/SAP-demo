#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    /*Да се напише програма, която прочита от клавиатурата едно цяло число и изкарва числова пирамида:
        1
        2 2
        3 3 3 */
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    /*Да се напише програма, която прочита от клавиатурата две реални числа и извежда стойностите на фукция f(x) = x*x-4
   за всички стойности в дадения интервал. Стъпката на обхождане е 0.01*/
    float f, l;
    scanf("%f %f", &f, &l);
    for (float i = f; i <= l; i += 0.1)
    {
        printf("%.2f\n", i * i - 4);
    }

    // comment for new_ver
    // round 2
    return 0;
}