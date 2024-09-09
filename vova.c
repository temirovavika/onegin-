#include <stdio.h>
void sortirovka_of_numbers(int* numbers, int stolbec);
int main(void)
{
    int numbers[] = {8, 9, 4, 2, 7, 3, 6, 1};
    int stolbec = sizeof(numbers) / sizeof(numbers[0]);
    sortirovka_of_numbers(numbers, stolbec);
    for (int g = 0; g < stolbec; g++)
    {
        printf(" %d ", numbers[g]);
    }

}
void sortirovka_of_numbers(int* numbers, int stolbec)
{
    for (int i = 0; i < stolbec - 1 ; i++ )
    {
        for (int j = 0; j < stolbec - i - 1; j++)
        {
            if (numbers[j] > numbers[j+1])
            {
                int temp = numbers[j];
                           numbers[j] = numbers[j+1];
                                        numbers[j+1] = temp;
            }
        }
    }

}
