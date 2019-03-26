
#include <stdio.h>
#include <stdlib.h>
void Details(int (*ptr)[3]);
void locations(int (*ptr)[3]);
int check1(int (*ptr1)[3],char *name1);
int check2(int (*ptr2)[3],char *name2);
int check3(int (*ptr3)[3],char *name3);
void system_input(int (*ptr4)[3]);
int main()
{
    int array[3][3],a,b,e;
    int switch1;
    char name1[15];
    char name2[15];
    char name3[]="System";
    int turn1;
    int turn2;
    int position1;
    int position1b;
    int position2;
    int position2b;
    printf("Enter 1 for Human to Human or 0 for Human to System\n");
    scanf("%d",&switch1);
    if(switch1==1)
    {
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            array[a][b]=5;
        }
    }
    printf("Enter name of Player1\n");
    scanf("%s",name1);
    printf("Enter name of Player name2\n");
    scanf("%s",name2);
    for(a=1;a>0;a++)
   {

    printf("This table show you about location\n");
    locations(array);
    printf("Your display for your game\n");
    Details(array);
    printf("%s enter 0 for your turn in this game\n",name1);
    for(b=1;b>0;b++)
    {
    scanf("%d",&turn1);
    if(turn1!=0)
    {
        printf("Wrong input enter 0 for your turn\n");
        continue;
    }
    else
    {

        printf("Enter position with space\n");
        for(e=1;e>0;e++){
        scanf("%d %d",&position1,&position1b);
        if(array[position1][position1b]==0||array[position1][position1b]==1)
        {
            printf("Sorry system cannot overwrite values enter again\n");
            printf("This table show you about location\n");
            locations(array);
            printf("Your display for your game\n");
            Details(array);
            continue;
        }
        else
        {
            break;
        }
        }
        array[position1][position1b]=turn1;
        break;
    }

    }
     int call=90;
     call=check1(array,name1);
     if(call==1)
     {
         break;
     }
    if(a==5)
    {
        printf("Game is tied\n");
        break;
    }

    printf("This table show you about location\n");
    locations(array);
    printf("Your display for your game\n");
    Details(array);

    printf("%s enter 1 for your turn in this game\n",name2);
    for(b=1;b>0;b++)
    {
    scanf("%d",&turn2);
    if(turn2!=1)
    {
        printf("Wrong input enter 1 for your turn\n");
        continue;
    }
    else
    {

        printf("Enter position with space\n");
        for(e=1;e>0;e++){
        scanf("%d %d",&position2,&position2b);
        if(array[position2][position2b]==0||array[position2][position2b]==1)
        {
            printf("Sorry system cannot overwrite values enter again\n");
            printf("This table show you about location\n");
            locations(array);
            printf("Your display for your game\n");
            Details(array);
            continue;
        }
        else
        {
            break;
        }
        }
        array[position2][position2b]=turn2;
        break;
    }

    }
     int call2;
     call2=check2(array,name2);
     if(call2==1)
     {
         break;
     }

}
    }



    else if(switch1==0)
    {
      for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            array[a][b]=5;
        }
    }
    printf("Enter name of Player1\n");
    scanf("%s",name1);
    for(a=1;a>0;a++)
   {

    printf("This table show you about location\n");
    locations(array);
    printf("Your display for your game\n");
    Details(array);
    printf("%s enter 0 for your turn in this game\n",name1);
    for(b=1;b>0;b++)
    {
    scanf("%d",&turn1);
    if(turn1!=0)
    {
        printf("Wrong input enter 0 for your turn\n");
        continue;
    }
    else
    {

        printf("Enter position with space\n");
        for(e=1;e>0;e++){
        scanf("%d %d",&position1,&position1b);
        if(array[position1][position1b]==0||array[position1][position1b]==1)
        {
            printf("Sorry system cannot overwrite values enter again\n");
            printf("This table show you about location\n");
            locations(array);
            printf("Your display for your game\n");
            Details(array);
            continue;
        }
        else
        {
            break;
        }
        }
        array[position1][position1b]=turn1;
        break;
    }

    }
     int call=90;
     call=check1(array,name1);
     if(call==1)
     {
         break;
     }
    else if(a==5)
    {
        printf("Game is tied\n");
        break;
    }

    printf("This table show you about location\n");
    locations(array);
    printf("Your display for your game\n");
    Details(array);
    system_input(array);
    printf("Your display for your game\n");
    Details(array);
     int call3;
     call3=check3(array,name3);
     if(call3==1)
     {
         break;
     }
   }
}
}
void Details(int (*array)[3])
{
    int a,b;
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            printf(" %d",array[a][b]);
        }
            printf("\n");

    }
}
void locations(int (*array)[3])
{
    int a,b;
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            printf("%d",a);
            printf("%d  ",b);
        }
            printf("\n");

    }
}







int check1(int (*array)[3],char *name1)
{
      if((array[0][0]==0)&&(array[0][1]==0)&&(array[0][2]==0))
    {
        printf("Congrats you won the game ::%s",name1);
        return(1);
    }
    else if((array[1][0]==0)&&(array[1][1]==0)&&(array[1][2]==0))
    {
        printf("Congrats you won the game ::%s",name1);
        return(1);
    }
    else if((array[2][0]==0)&&(array[2][1]==0)&&(array[2][2]==0))
    {
        printf("Congrats you won the game ::%s",name1);
        return(1);
    }
    else if((array[0][0]==0)&&(array[1][0]==0)&&(array[2][0]==0))
    {
        printf("Congrats you won the game ::%s",name1);
        return(1);
    }
    else if((array[0][1]==0)&&(array[1][1]==0)&&(array[2][1]==0))
    {
        printf("Congrats you won the game ::%s",name1);
        return(1);
    }
    else if((array[0][2]==0)&&(array[1][2]==0)&&(array[2][2]==0))
    {
        printf("Congrats you won the game ::%s",name1);
        return(1);
    }
    else if((array[0][0]==0)&&(array[1][1]==0)&&(array[2][2]==0))
    {
        printf("Congrats you won the game ::%s",name1);
        return(1);
    }
    else if((array[2][0]==0)&&(array[1][1]==0)&&(array[0][2]==0))
    {
        printf("Congrats you won the game ::%s",name1);
        return(1);
    }
    return(0);
}





int check2(int (*array)[3],char *name2)
{
      if((array[0][0]==1)&&(array[0][1]==1)&&(array[0][2]==1))
    {
        printf("Congrats you won the game ::%s",name2);
        return(1);
    }
    else if((array[1][0]==1)&&(array[1][1]==1)&&(array[1][2]==1))
    {
        printf("Congrats you won the game ::%s",name2);
        return(1);
    }
    else if((array[2][0]==1)&&(array[2][1]==1)&&(array[2][2]==1))
    {
        printf("Congrats you won the game ::%s",name2);
        return(1);
    }
    else if((array[0][0]==1)&&(array[1][0]==1)&&(array[2][0]==1))
    {
        printf("Congrats you won the game ::%s",name2);
        return(1);
    }
    else if((array[0][1]==1)&&(array[1][1]==1)&&(array[2][1]==1))
    {
        printf("Congrats you won the game ::%s",name2);
        return(1);
    }
    else if((array[0][2]==1)&&(array[1][2]==1)&&(array[2][2]==1))
    {
        printf("Congrats you won the game ::%s",name2);
        return(1);
    }
    else if((array[0][0]==1)&&(array[1][1]==1)&&(array[2][2]==1))
    {
        printf("Congrats you won the game ::%s",name2);
        return(1);
    }
    else if((array[2][0]==1)&&(array[1][1]==1)&&(array[0][2]==1))
    {
        printf("Congrats you won the game ::%s",name2);
        return(1);
    }
    return(0);
}

int check3(int (*array)[3],char *name3)
{
      if((array[0][0]==1)&&(array[0][1]==1)&&(array[0][2]==1))
    {
        printf("Congrats you won the game ::%s",name3);
        return(1);
    }
    else if((array[1][0]==1)&&(array[1][1]==1)&&(array[1][2]==1))
    {
        printf("Congrats you won the game ::%s",name3);
        return(1);
    }
    else if((array[2][0]==1)&&(array[2][1]==1)&&(array[2][2]==1))
    {
        printf("Congrats you won the game ::%s",name3);
        return(1);
    }
    else if((array[0][0]==1)&&(array[1][0]==1)&&(array[2][0]==1))
    {
        printf("Congrats you won the game ::%s",name3);
        return(1);
    }
    else if((array[0][1]==1)&&(array[1][1]==1)&&(array[2][1]==1))
    {
        printf("Congrats you won the game ::%s",name3);
        return(1);
    }
    else if((array[0][2]==1)&&(array[1][2]==1)&&(array[2][2]==1))
    {
        printf("Congrats you won the game ::%s",name3);
        return(1);
    }
    else if((array[0][0]==1)&&(array[1][1]==1)&&(array[2][2]==1))
    {
        printf("Congrats you won the game ::%s",name3);
        return(1);
    }
    else if((array[2][0]==1)&&(array[1][1]==1)&&(array[0][2]==1))
    {
        printf("Congrats you won the game ::%s",name3);
        return(1);
    }
    return(0);
}

void system_input(int (*array)[3])
{
    int a,b,m=0,d=0;

    if((array[0][0]==0)&&(array[0][1]==0)&&(array[0][2]==5))
    {
        array[0][2]=1;
    }
    else if((array[0][0]==0)&&(array[0][2]==0)&&(array[0][1]==5))
    {
        array[0][1]=1;
    }
    else if((array[0][1]==0)&&(array[0][2]==0)&&(array[0][0]==5))
    {
        array[0][0]=1;
    }
    else if((array[1][0]==0)&&(array[1][1]==0)&&(array[1][2]==5))
    {
        array[1][2]=1;
    }
    else if((array[1][0]==0)&&(array[1][2]==0)&&(array[1][1]==5))
    {
        array[1][1]=1;
    }
    else if((array[1][1]==0)&&(array[1][2]==0)&&(array[1][0]==5))
    {
        array[1][0]=1;
    }
    else if((array[2][0]==0)&&(array[2][1]==0)&&(array[2][2]==5))
    {
        array[2][2]=1;
    }
    else if((array[2][0]==0)&&(array[2][2]==0)&&(array[2][1]==5))
    {
        array[2][1]=1;
    }
    else if((array[2][1]==0)&&(array[2][2]==0)&&(array[2][0]==5))
    {
        array[2][0]=1;
    }
    else if((array[0][0]==0)&&(array[1][0]==0)&&(array[2][0]==5))
    {
        array[2][0]=1;
    }
    else if((array[0][0]==0)&&(array[2][0]==0)&&(array[1][0]==5))
    {
        array[1][0]=1;
    }
    else if((array[1][0]==0)&&(array[2][0]==0)&&(array[0][0]==5))
    {
        array[0][0]=1;
    }
    else if((array[0][1]==0)&&(array[1][1]==0)&&(array[2][1]==5))
    {
        array[2][1]=1;
    }
    else if((array[0][1]==0)&&(array[2][1]==0)&&(array[1][1]==5))
    {
        array[1][1]==1;
    }
    else if((array[1][1]==0)&&(array[2][1]==0)&&(array[0][1]==5))
    {
        array[1][0]=1;
    }
    else if((array[0][2]==0)&&(array[1][2]==0)&&(array[2][2]==5))
    {
        array[2][2]=1;
    }
    else if((array[0][2]==0)&&(array[2][2]==0)&&(array[1][2]==5))
    {
        array[1][2]=1;
    }
    else if((array[1][2]==0)&&(array[2][2]==0)&&(array[0][2]==5))
    {
        array[0][2]=1;
    }
    else if((array[2][0]==0)&&(array[1][1]==0)&&(array[0][2]==5))
    {
        array[0][2]=1;
    }
    else if((array[2][0]==0)&&(array[0][2]==0)&&(array[1][1]==5))
    {
        array[1][1]=1;
    }
    else if((array[1][1]==0)&&(array[0][2]==0)&&(array[2][0]==5))
    {
        array[2][0]=1;
    }
    else if((array[0][0]==0)&&(array[1][1]==0)&&(array[2][2]==5))
    {
        array[2][2]=1;
    }
    else if((array[0][0]==0)&&(array[2][2]==0)&&(array[1][1]==5))
    {
        array[1][1]=1;
    }
    else if((array[1][1]==0)&&(array[2][2]==0)&&(array[0][0]==5))
    {
        array[0][0]=1;
    }

    else if((array[0][0]==1)&&(array[0][1]==1)&&(array[0][2]==5))
    {
        array[0][2]=1;

    }
    else if((array[0][0]==1)&&(array[0][2]==1)&&(array[0][1]==5))
    {
        array[0][1]=1;

    }
    else if((array[0][1]==1)&&(array[0][2]==1)&&(array[0][0]==5))
    {
        array[0][0]=1;

    }
    else if((array[1][0]==1)&&(array[1][1]==1)&&(array[1][2]==5))
    {
        array[1][2]=1;

    }
    else if((array[1][0]==1)&&(array[1][2]==1)&&(array[1][1]==5))
    {
        array[1][1]=1;

    }
    else if((array[1][1]==1)&&(array[1][2]==1)&&(array[1][0]==5))
    {
        array[1][0]=1;

    }
    else if((array[2][0]==1)&&(array[2][1]==1)&&(array[2][2]==5))
    {
        array[2][2]=1;

    }
    else if((array[2][0]==1)&&(array[2][2]==1)&&(array[2][1]==5))
    {
        array[2][1]=1;

    }
    else if((array[2][1]==1)&&(array[2][2]==1)&&(array[2][0]==5))
    {
        array[2][0]=1;

    }
    else if((array[0][0]==1)&&(array[1][0]==1)&&(array[2][0]==5))
    {
        array[2][0]=1;

    }
    else if((array[0][0]==1)&&(array[2][0]==1)&&(array[1][0]==5))
    {
        array[1][0]=1;

    }
    else if((array[1][0]==1)&&(array[2][0]==1)&&(array[0][0]==5))
    {
        array[0][0]=1;

    }
    else if((array[0][1]==1)&&(array[1][1]==1)&&(array[2][1]==5))
    {
        array[2][1]=1;

    }
    else if((array[0][1]==1)&&(array[2][1]==1)&&(array[1][1]==5))
    {
        array[1][1]=1;

    }
    else if((array[1][1]==1)&&(array[2][1]==1)&&(array[0][1]==5))
    {
        array[1][0]=1;

    }
    else if((array[0][2]==1)&&(array[1][2]==1)&&(array[2][2]==5))
    {
        array[2][2]=1;

    }
    else if((array[0][2]==1)&&(array[2][2]==1)&&(array[1][2]==5))
    {
        array[1][2]=1;

    }
    else if((array[1][2]==1)&&(array[2][2]==1)&&(array[0][2]==5))
    {
        array[0][2]=1;

    }
    else if((array[2][0]==1)&&(array[1][1]==1)&&(array[0][2]==5))
    {
        array[0][2]=1;

    }
    else if((array[2][0]==1)&&(array[0][2]==1)&&(array[1][1]==5))
    {
        array[1][1]=1;

    }
    else if((array[1][1]==1)&&(array[0][2]==1)&&(array[2][0]==5))
    {
        array[2][0]=1;

    }
    else if((array[0][0]==1)&&(array[1][1]==1)&&(array[2][2]==5))
    {
        array[2][2]=1;

    }
    else if((array[0][0]==1)&&(array[2][2]==1)&&(array[1][1]==5))
    {
        array[1][1]=1;

    }
    else if((array[1][1]==1)&&(array[2][2]==1)&&(array[0][0]==5))
    {
        array[0][0]=1;

    }
    else if(array[0][0]==5)
    {
        array[0][0]=1;
    }
    else if(array[0][1]==5)
    {
        array[0][1]=1;
    }
    else if(array[0][2]==5)
    {
        array[0][2]=1;
    }
    else if(array[1][0]==5)
    {
        array[1][0]=1;
    }
    else if(array[1][1]==5)
    {
        array[1][1]=1;
    }
    else if(array[1][2]==5)
    {
        array[1][2]=1;
    }
    else if(array[2][0]==5)
    {
        array[2][0]=1;
    }
    else if(array[2][1]==5)
    {
        array[1][1]=1;
    }
    else if(array[2][2]==5)
    {
        array[1][2]=1;
    }
    }
