#include <stdio.h>
#include <time.h>

#define MST (-7)
#define UTC (0)
#define CCT (+8)


int main(int argc, char ** argv)
{

   time_t rawtime;
   struct tm * ptm;

   time(&rawtime);

   ptm = gmtime(&rawtime);
   
   puts("Current time around the World : ");
   printf("US : %2d:%2d\n", (ptm->tm_hour+MST)%24, ptm->tm_min);
   printf("Iceland : %2d:%2d\n", (ptm->tm_hour+UTC)%24, ptm->tm_min);
   printf("China : %2d:%2d\n", (ptm->tm_hour+CCT)%24, ptm->tm_min);



   return 0;
}
