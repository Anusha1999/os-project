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

