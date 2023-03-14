#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0));
  int n, perc;
  int number=0;
  double x,y,pi,percent;
  printf("how many times do you want this to run? ");
  scanf("%d", &n);
  printf("\nthis will run this many times: ");
  printf("%d\n", n);
  for (int i = 0; i<n; i++){
    x = (double) rand()/32767;
    y = (double) rand()/32767;
    if ((x*x)+(y*y)<=1){
        number++;
    };
  };
  pi = (double) number/n;
  pi = (double) pi*4;
  printf("%lf", pi);
  return 0;
}
