#include<stdio.h>
#include<conio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
int k=0;
int end=1;
void draw()
{
printf("\n $$$$$$######@@@@@@!!!!!!****** TIK TAK TOE GAME ******!!!!!!@@@@@@######$$$$$$ \n");
printf("\n PLAYER 1 SYMBOL ||x|| \n");
printf("\n PLAYER 2 SYMBOL ||0|| \n");
printf("\n LETS START \n");
printf("\n");
printf("\n");
printf("\n\n\n\t\t %c | %c | %c",a[0],a[1],a[2]);
printf("\n\t\t---|---|---");
printf("\n\t\t %c | %c | %c",a[3],a[4],a[5]);
printf("\n\t\t---|---|---");
printf("\n\t\t %c | %c | %c",a[6],a[7],a[8]);
printf("\n");
printf("\n");
}
void takeinput()
{
char position;
printf("\n ENTER THE POSITION: \n");
scanf("%c",&position);
if(k==0)
{
for(int i=0;i<=8;i++)
{
if(a[i]==position)
{
a[i]='x';
k=1;
break;
}
}
}
else
{
for(int i=0;i<=8;i++)
{
if(a[i]==position)
{
a[i]='0';
k=0;
break;
}
}
}
}
int game_end()
{

if(a[0]=='x'&&a[1]=='x'&&a[2]=='x')
return(1);
else if(a[0]=='x'&&a[3]=='x'&&a[6]=='x')
return(1);
else if(a[0]=='x'&&a[4]=='x'&&a[8]=='x')
return(1);
else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
return(1);
else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
return(1);
else if(a[2]=='x'&&a[4]=='x'&&a[6]=='x')
return(1);
else if(a[1]=='x'&&a[4]=='x'&&a[5]=='x')
return(1);
else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
return(1);

else if(a[0]=='0' &&a[1]=='0' &&a[2]=='0')
return(2);
else if(a[0]=='0' &&a[3]=='0' &&a[6]=='0')
return(2);
else if(a[0]=='0' &&a[4]=='0' &&a[8]=='0')
return(2);
else if(a[1]=='0' &&a[4]=='0' &&a[7]=='0')
return(2);
else if(a[2]=='0' &&a[5]=='0' &&a[8]=='0')
return(2);
else if(a[2]=='0' &&a[4]=='0' &&a[6]=='0')
return(2);
else if(a[3]=='0' &&a[4]=='0' &&a[5]=='0')
return(2);
else if(a[6]=='0' &&a[7]=='0' &&a[8]=='0')
return(2);
else if(a[0]!='1'&&a[1]!='2'&&a[2]!='3'&&a[3]!='4'&&a[4]!='5'&&a[5]!='6'&&a[6]!='7'&&a[7]!='8'&&a[8]!='9')
return(4);
else
return(3);
}
void result()
{
int score;
score=game_end();
if(score==1)
{
printf("\n PLAYER 1 HAS WON THE TIC TAK TOE GAME \n");
end=0;
}
else if(score==2)
{
printf("\n PLAYER 2 HAS WON THE TIC TAK TOE GAME \n");
end=0;
}
else if(score==4)
{
printf("\n MATCH IS DRAWN YOU SHOULD TRY AGAIN TO FIND THE BEST \n");
end=0;
}
else;
}
int main()
{
char ch;
start_again:
clrscr();
draw();
while(end)
{
takeinput();
clrscr();
draw();
result();
}
printf("\n DO YOU WANT TO TRY THE GAME ONE MORE TIME \n");
printf(" \n IF YOU WANT THEN PLEASE  PRESS Y  OR IF YOU WANT TO EXIT THEN PLEASE PRESS N\n");
fflush(stdin);    /* fflush(stdin) is used to clear the output buffer and move the buffered data to console or disk */
scanf("%c",&ch);
if(ch=='y'||ch=='Y')
{
a[0]='1';
a[1]='2';
a[2]='3';
a[3]='4';
a[4]='5';
a[5]='6';
a[6]='7';
a[7]='8';
a[8]='9';
k=0;
end=1;
goto start_again;
}
printf("\n  THANK YOU FOR TRYING THE GAME \n");
getch();
}
