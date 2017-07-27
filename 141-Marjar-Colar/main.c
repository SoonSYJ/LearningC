// this is a script for testing %
// the negative valus can do % and it is negative if the first param is negative
#include <math.h>
#include <stdio.h>
int main()
{
  int T;
  int x,y,a,b;
  scanf("%d",&T);
  while(T--){
      scanf("%d %d %d %d",&x, &y, &a, &b);
      printf("%d %d %d %d\n", x, y, a, b);
      if(x==1||y==1||){
        printf("INF");
      }
  }



  return 0;
}
