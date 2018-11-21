#include <stdio.h>
void main()
{
<<<<<<< HEAD
  int WinLotteryNo[20] = {1522, 1711, 5515, 7233, 5614, 8876, 1215, 4232, 9155, 9995}; 
  float WinAmount[10] = {55555, 10000, 10000, 5000, 5000, 5000, 5000, 3000, 3000, 3000};
=======
  int WinLotteryNo[10] = {1522, 1711, 5515, 7233, 5614, 8876, 1215, 4232, 9155, 9995}; 
  float WinAmount[10] = {55555, 10000, 10000, 5000, 5000, 5000, 5000, 3000, 3000, 3000};
>>>>>>> e75710af1ed87858c605e69fc6172dc44e3f36c1
  int N = 10;
  int i, wonnnnn; 
  
  int YourLotteryNo;  
   
  printf("Enter your Lottery Numberrrrrr ((0 to end)): "); 
  scanf("%d", &YourLotteryNo); 
  while (YourLotteryNo != 0) 
  { 
    won = 0; 
    for (i=0;i<N && !won; i++) 
    {
       if (YourLotteryNo == WinLotteryNo[i]) 
       {
          printf("Congratulations You Won %8.2f baht jing jing na\n", WinAmount[i]); 
          won = 1;
       }
    }
    if (!won) 
      printf("Sorry!! Lottery Number %4d did not win\n", YourLotteryNo); 
    printf("Enter your Lottery Number ((0 to end)): "); 
    scanf("%d", &YourLotteryNo); 
  }
  printf("GOODBYE");
  scanf("%d", &i);
}
