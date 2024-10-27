#include <stdio.h>
#include <stdlib.h>
int strlen(char name[]);
int main()
{
  FILE *poetry;
  poetry = fopen("poetry1.txt", "r");

  //printf("vvedite slovo:\n");
  char * buffer = (char *)calloc(100, sizeof(char));
  //fscanf(poetry, "%s", buffer);
  fgets(buffer, 100, poetry);
  long int resultat = strlen(buffer);
  printf("resultat %ld\n", resultat);

  free(buffer);
  fclose(poetry);
  return 0;
}
int strlen(char name[])
{
    int res = 0;
    int i = 0;
    while(name[i] != '\0')
{
         res = res + 1;
         i++;
}
         return res;

}
