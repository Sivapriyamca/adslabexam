#include<stdio.h>
#include<conio.h>
void main()
{
  int set1[10],set2[10],set3[20],i,j,n1,n2,ch,k,temp,flag=0,p;
  printf("*************menu**************");
  printf("enter your choice");
  printf("1.union operation\n2.intersection\n,3.difference");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1:
      printf("enter the number of elements in the first set");
      scanf("%d",&n1);
      printf("enter the elements of the set1");
      for(i=0;i<n1;i++)
      {
      scanf("%d",&set1[i]);
      }
      printf("enter the number of elemets of set2");
      scanf("%d",&n2);
      printf("enter the elements of set2");
      for(j=0;j<n2;j++)
      {
      scanf("%d",&set2[j]);
      }
      k=0;
      for(i=0;i<n1;i++)
      {
        set3[k]=set1[i];
        k++;
      }
      for(i=0;i<n2;i++)
      {
      flag=1;
      for(j=0;j<n1;j++)
      {
          if(set2[i]==set1[j])
          {
              flag=0;
          }
      }

      if(flag==1);
      {
          set3[k]=set2[j];

      }
      k=p;
      for(k=0;k<p;k++)
      {
       printf("%d",set3[k]);
      }
      }
      break;
  case 2:
     printf("enter the number of elements in the first set");
      scanf("%d",&n1);
      printf("enter the elements of the set1");
      for(i=0;i<n1;i++)
      {
      scanf("%d",&set1[i]);
      }
      printf("enter the number of elemets of set2");
      scanf("%d",&n2);
      printf("enter the elements of set2");
      for(j=0;j<n2;j++)
      {
      scanf("%d",&set2[j]);
      }
    k=0;
      for(i=0;i<n1;i++)
      {
        set3[k]=set1[i];
        k++;
      }
      for(i=0;i<n2;i++)
      {
      flag=1;
      for(j=0;j<n1;j++)
      {
          if(set2[i]==set1[j])
          {
              flag=0;
          }
      }

      if(flag==1);
      {
          set3[k]=set2[j];

      }
      k=p;
      for(k=0;k<p;k++)
      {
       printf("%d",set3[k]);
      }
      }
      break;

   default :

    printf("invalid choice");
  }



}
