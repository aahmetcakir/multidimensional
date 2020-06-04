#include <stdio.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int arrayInput, i, toplam, j, random;
    printf("n*n dizi boyutunu giriniz: ");
    scanf("%d", &arrayInput);
    printf("\n\n");
    int *array = (int *)malloc((arrayInput * arrayInput) * sizeof(int));
    for (i = 0; i < arrayInput; i++)
    {
        for (j = 0; j < arrayInput; j++)
        {
            random = rand() % 100;
            *(array + i * arrayInput + j) = random;
        }
    }
    for (i = 0; i < arrayInput; i++)
    {
        for (j = 0; j < arrayInput; j++)
        {
            toplam += *(array + i * arrayInput + j);
            printf("%d ", *(array + i * arrayInput + j));
        }
        printf("  = satir ortalamasi %d ", toplam / arrayInput);
        toplam = 0;
        printf("\n");
    }
    return 0;
}
