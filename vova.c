#include <stdio.h>
#include <string.h>

void sortirovka_strok( const char* onegin[], int kolvo_strok);
int main(void)
{

     const char* onegin[] = {"maria",
                        "aleksandra bebrina",
                        "vovanaumkin",
                        "matvey",
                        "bogdan",
                        "alrudia",
                        "gleb",
                        "polina"};

    int kolvo_strok = sizeof(onegin) / sizeof(onegin[0]);
    sortirovka_strok(onegin, kolvo_strok);
    for (int g = 0 ; g < kolvo_strok; g++)
    {
        printf("%s\n", onegin[g]);
    }

}

void sortirovka_strok( const char* onegin[], int kolvo_strok)
{
    for (int i = 0; i < kolvo_strok - 1; i++)
    {
        for (int j = 0; j < kolvo_strok - 1 - i; j++)
        {
           if (strlen(onegin[j]) > strlen(onegin[j+1]))
           {
               const char* temp = onegin[j];
                        onegin[j] = onegin[j+1];
                                    onegin[j+1] = temp;
           }
        }
    }
}
