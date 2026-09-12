#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;
    printf("How many motors are carrying the packages?\n");
    scanf("%d", &motorCount);

    printf("How many kg of packages do we expect?\n");
    scanf("%d", &totalPackageWeight);

  if (totalPackageWeight <= motorCount * MOTOR_CAPACITY) 
  {printf("Yes, the conveyor belt can carry the package");} 
  else { printf("no, the conveyor belt cannot carry the package");}
  
  return 0;
}
