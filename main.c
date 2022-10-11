#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
int keuze;
    srand (time(NULL));
   int opslaan =  rand() % 3 ;
   // if(opslaan==0){
 //       printf("de computer heeft steen gekozen \n");
//   }
 //  if(opslaan==1){
//       printf("de computer heeft papier gekozen \n");
 //  }
  // if(opslaan==2){
   //    printf("de computer heeft schaar gekozen \n");
//   }
   printf("steen=0 papier=1 schaar=2 \n");
  scanf("%d",&keuze);
  if(keuze==0){
      if(opslaan==0){
          printf("gelijkspel\n");
      }
        if(opslaan==1) {
            printf("de computer wint\n");
        }
        if(opslaan==2){
            printf("jij wint\n");
        }
  }
  if(keuze==1){
      if(opslaan==0){
          printf("jij wint\n");
      }
      if(opslaan==1){
          printf("gelijkspel\n");
      }
      if(opslaan==2){
          printf("de computer wint\n");
      }
  }
  if(keuze==2){
      if(opslaan==0){
          printf("de computer wint\n");
      }
      if(opslaan==1){
          printf("jij wint\n");
      }
      if(opslaan==2){
          printf("gelijkspel\n");
      }
  }
  else{
      printf("geen uitkomst\n verkeerd cijfer ingevuld\n");
  }
}
