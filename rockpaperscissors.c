#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int randomnumber(int);
int main()
{
    int per=0,comp=0;
    int c,p;
    int n=4;
    char* name;
    name=(char*)malloc(sizeof(char)*20);
    printf("* Welcome to Soumyadeb's Rock Paper Scissors Game *\n");
    printf("Enter your name :\n");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]=0;
    printf("Hey %s!\nThese are the conditions for the game:\n",name);
    printf("Rock : 0\nPaper : 1\nScissors : 2\nThe Max score is 5\n\n");
    for(int i=0;per!=5&&comp!=5;i++)
    {
        printf("The score is- ");
        printf("computer:%d   %s:%d",comp,name,per);
        printf("\nChoose yours :");
        scanf("%d",&p);
        c=randomnumber(3);
        printf(" The computer chooses : %d\n",c);
        if((c==0&&p==1)||(c==1&&p==2)||(c==2&&p==0)) per++;
        else if((c==0&&p==0)||(c==1&&p==1)||(c==2&&p==2)) continue;
        else comp++;

    }
    if(comp==5) printf("Compuer wins!");
    else if(per==5) printf("%s Wins!",name);
    free(name);
    return 0;
}
int randomnumber(int n)
{
    srand(time(NULL));
    return rand()%n;
}
