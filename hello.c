#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  srand(time(NULL));

  printf("%d ", rand()%100 +1);
  return 0;
}
