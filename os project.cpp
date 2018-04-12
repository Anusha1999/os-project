#include<stdio.h>
  int process_list;
 struct process_info
{
     int type,process_name,at, bt,finish, ct, wai_t, turnaround_time;
}queue[10];
void Sorting()
{
       int i, j,k=20,bt=0;
      struct process_info temp;
      for(i = 0; i < process_list - 1; i++)
      {
          bt=bt+queue[i].bt;
          if(queue[i].type == 200)
          {
              if(i < k && k!= 20)
              {
              k=i;
              }
          }
            for(j = i + 1; j==i+1; j++)
            {
                  if(queue[i].at <=bt && queue[j].at <=bt)
                  {
                      if(queue[i].type == 200 && queue[j].type ==400 && k!=20 )
                      {   
                       temp = queue[k];
                        queue[k] = queue[j];
                        queue[j] = temp;
                        k=i++;
                      }
                      if(queue[i].type == 200 && queue[j].type ==400 && k==20 )
                      {
                       temp = queue[i];
                        queue[i] = queue[j];
                        queue[j] = temp;
                      }
                  }
            }
      }
}
int main()
{
      int i, time = 0, bt = 0;
      printf("\nEnter Processes:\t");
      scanf("%d", &process_list);
      for(i = 0; i < process_list; i++)
      {
            queue[i].process_name = i+1;
            printf("\nEnter Details For Process[%d]:\n", queue[i].process_name);
            queue[i].finish = 0;
            printf("Arrival Time:\t");
            scanf("%d", &queue[i].at );
            printf("Burst Time:\t");
            scanf("%d", &queue[i].bt); 
            printf("type:\t");
            scanf("%d", &queue[i].type);
            bt = bt + queue[i].bt;
      }
      Sorting();
      printf("\n type \n200   -   student\n400  -  teacher\n");
      printf("\nProcess\tArrival\tBurst_Time\ttype\tWaiting Time\n");
      for(time = queue[0].at,i=0; time < bt;i++)
      {
            time = time + queue[i].bt;
            queue[i].ct = time;
            queue[i].wai_t = queue[i].ct - queue[i].at - queue[i].bt;
            queue[i].turnaround_time = queue[i].ct - queue[i].at;
            queue[i].finish = 1;
            printf("%d\t%d\t%d\t\t%d\t%d\n", queue[i].process_name, queue[i].at, queue[i].bt,     queue[i].type, queue[i].wai_t);
      }
    }

