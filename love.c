#include <stdio.h>
#include <string.h>

int main(){
      char human1[20], human2[20], couple[40], *p;
      int c, love;

      do{
            printf("Name ->"); scanf("%s", human1);
            printf("Name ->"); scanf("%s", human2);
            strcpy(couple, human1);
            strcat(couple, human2);

            p = couple;
            love = 0;
            while(*p != '\0'){
                  love += (unsigned char)*p;
                  p++;
            }
            love %= 101;
            printf("%sand%slove%d%%\n", human1, human2, love);
      }
      while(printf("Do you want to continue ? y/n"), rewind(stdin), c = getchar(), c == 'y' || c == 'Y');

      return 0;
}
