 #include<stdio.h>
int steps=0;
void quicksort(int [1000],int,int);

int main(){
  int x[1000],size,i;

  printf("Enter size of the array: ");
  scanf("%d",&size);

  for(i =size;i--;i>0)
	{x[i]=i-size;
	if(x[i]<0)
	{x[i]=x[i]-2*x[i];}}
for(i=0;i<size;i++)
{printf("%d ",x[i]);}
  quicksort(x,0,size-1);

  printf("Sorted elements: ");
  for(i=0;i<size;i++)
    printf(" %d",x[i]);

printf("\n total steps: %d \n",steps);
printf("\n smallest element is %d and largest element is %d",x[0],x[size-1]);
   return 0;
}

void quicksort(int x[1000],int first,int last)
{
    int pivot,j,temp,i;

     if(first<last){steps++;
         pivot=first;
         i=first;
         j=last;

         while(i<j){steps++;
             while(x[i]<=x[pivot]&&i<last)
                 i++;steps++;
             while(x[j]>x[pivot])
                 j--;steps++;
             if(i<j){
                 temp=x[i];steps++;
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}

