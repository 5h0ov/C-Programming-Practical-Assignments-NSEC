#include<stdio.h>
#include<String.h>
struct cricket
{
    char name[50];
    char team[50];
    float batavg;
};
void main()
{
    struct cricket x[10];
    int i,max;
    float hba=0.0;
    printf("Enter the player name, team name and batting average below:-\n");
    for(i=0;i<10;i++)
    {
        printf("Player %d:\n",i+1);
        printf("Name: ");
        fgets(x[i].name,50,stdin);
        printf("Team: ");
        fgets(x[i].team,50,stdin);
        printf("Batting Average: ");
        scanf("%f", &x[i].batavg);
        getchar();
    }

    for(i=0;i<10;i++)
    {
        if(x[i].batavg>hba)
        {
            max=i;
            hba=x[i].batavg;
        }
    }
    printf("The Player with the Highest Batting Average is:\n%s\n%s\n%.2f",x[max].name,x[max].team,hba);
}