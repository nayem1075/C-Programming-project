#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of Subject : ");
    scanf("%d",&n);

    int marks[n];

    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("Subject %d. Number = ",i+1);
        scanf("%d",&marks[i]);
    }

      int lowestMarks = marks[0],highestMarks = marks[0],failedCount = 0;
      float averageMarks,totalMarks = 0;

     for(i=0; i<n; i++)
     {
         totalMarks = totalMarks + marks[i];
         if(lowestMarks > marks[i])
         {
             lowestMarks = marks[i];
         }
         if(highestMarks < marks[i])
         {
             highestMarks = marks[i];
         }
         if(marks[i] < 40)
         {
             failedCount++;
         }
     }

    averageMarks = totalMarks/n;

  printf("\nTotal Marks = %.2f\n",totalMarks);
  printf("Lowest Marks = %d\n",lowestMarks);
  printf("Highest Marks = %d\n",highestMarks);
  printf("Average Marks = %.2f\n",averageMarks);

  if(failedCount==0)
  {
      printf("Pass all subjects\n");
  }
  else
  {
      printf("Failed %d subjects",failedCount);
  }

  return 0;
}
