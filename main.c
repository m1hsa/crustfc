#include <stdio.h>

int main(int argc,char *argv[]) {
  if (argc<4) {printf("wrong input\n");return 1;}

  int furnace_count=1;
  if (argc==5) {sscanf(argv[4],"%d",&furnace_count);}

  int ammount;
  sscanf(argv[1],"%d",&ammount);

  int result_time=ammount/furnace_count;

  // argv[2][0] is a resource
  switch (argv[2][0]) {
    case 's':
      result_time/=3;break;
    case 'm':
      result_time*=0.666f;break;
    case 'h':
      result_time*=1.333f;break;
    default: printf("wrong material, only availible is s,m,h\n");return 1;
  }
  // argv[3][0] is a furnace
  switch (argv[3][0]) {
    case 'f':
      result_time*=5;break;
    case 'l':
      break; // large furnace is equal to default
    case 'e':
      result_time*=3;break;
    default: printf("wrong furnace, only availible is f,l,e\n");return 1;
  }
  printf("%d\n",result_time);
  return 0;
}
// made by mIhsa_ AKA viktor shevchenko at 2026-03-04 23:12 EET
// contact: https://mihsa.xyz/contact
