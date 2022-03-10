#include<stdio.h>
#include<conio.h>
void main()
{
  int set1[10],set2[10],set3[20],i,j,n1,n2,ch,k,temp,p=20;
  printf("*************MENU**************\n");
  printf("ENTER YOUR CHOICE");
  printf("\n1.UNION OPERATION\n2.INTERSECTION\n3.DIFFERENCE\n");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1:
      printf("finding union:");
      printf("enter the number of elements in the first set : ");
      scanf("%d",&n1);
      printf("enter the elements of the set1 : ");
      for(i=0;i<n1;i++)
      {
      scanf("%d",&set1[i]);
      }
      printf("enter the number of elemets of set2 : ");
      scanf("%d",&n2);
      printf("enter the elements of set2 : ");
      for(j=0;j<n2;j++)
      {
      scanf("%d",&set2[j]);
      }
      for(i=0;i<n1;i++){
        for(j=0;j<n2;j++)
        {
            if(set1[i]!=set2[j])
            {
                temp=set1[i];
                set1[i]=set2[j];
                set2[j]=set3[k];

            }
        }
      }

      for(k=0;k<n1+n2;k++)
      {
        printf("%d",set3[k]);
      }
      break;


  case 2:
      printf("finding intersection");
    printf("enter the number of elements in the first set :");
      scanf("%d",&n1);
      printf("enter the elements of the set1 :");
      for(i=0;i<n1;i++)
      {
      scanf("%d",&set1[i]);
      }
      printf("enter the number of elemets of set2 :");
      scanf("%d",&n2);
      printf("enter the elements of set2 :");
      for(j=0;j<n2;j++)
      {
      scanf("%d",&set2[j]);
      }

      for(i=0;i<n1;i++){
        for(j=0;j<n2;j++)
        {
            if(set1[i]==set2[j])
            {
                temp=set1[i];
                set1[i]=set2[j];
                set2[j]=set3[k];

            }
        }
      }

      for(k=0;k<n1+n2;k++)
      {
        printf("%d",set3[k]);
      }
      break;
  case 3:
      printf("finding difference");
       printf("enter the number of elements in the first set : ");
      scanf("\n%d",&n1);
      printf("enter the elements of the set1 : \n");
      for(i=0;i<n1;i++)
      {
      scanf("\n%d",&set1[i]);
      }
      printf("enter the number of elemets of set2 : ");
      scanf("%d",&n2);
      printf("enter the elements of set2  : \n");
      for(j=0;j<n2;j++)
      {
      scanf("%d",&set2[j]);
      }
      for(i=0;i<n1;i++)
      {
          for(j=0;j<n2;j++)
          {
              if(set1[i]==set2[j])
              {
                  for(k=0;k<n1+n2;k++)
                  {
                      printf("%d%d",set3[k]);

                  }
              }
          }
      }
      break;
   default :

    printf("invalid choice");
  }

}
