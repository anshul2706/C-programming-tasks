#include <stdio.h>
int main()
{
  int age,i;
  long phone;
  char name[20];
  printf("Enter name\n");
  scanf("%s\n",name);
  printf("Enter age and phone number\n");
  scanf("%d %li",&age,&phone);
  for(i=0;name[i]!='\0';i++)
  {
    printf("%c",name[i]);
  }
  printf("\n%d\n%li\n",age,phone);
  return 0;
}
