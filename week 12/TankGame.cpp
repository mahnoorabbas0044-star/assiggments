#include<iostream>
using namespace std;
void printMaze(){
    cout<<"#############################"<<endl;
    cout<<"#                           #"<<endl;
    cout<<"#                           #"<<endl;
    cout<<"#                           #"<<endl;
    cout<<"#                           #"<<endl;
    cout<<"#                           #"<<endl;
    cout<<"#                           #"<<endl;
    cout<<"#                           #"<<endl;
    cout<<"#                           #"<<endl;
    cout<<"#                           #"<<endl;
    cout<<"#                           #"<<endl;
    cout<<"#                           #"<<endl;
    cout<<"#                           #"<<endl;
    cout<<"#                           #"<<endl;
    cout<<"#                           #"<<endl;
    cout<<"#                           #"<<endl;
    cout<<"#                           #"<<endl;
    cout<<"#############################"<<endl;
}
char box = 219;
char tank1[6]= {box,box,box,'-','-','>'};
char tank2[6]= {'0',' ','0',' ',' ',' '};

char enemy1[6]={' ',' ',' ','-','-','-'};
char enemy2[6]={'<','=','=','(','-',')'};
char enemy3[6]={' ',' ',' ','\\','@','/'};
char enemy4[6]={' ',' ',' ','*','*','*'};
int tankX = 5;
int tankY = 5;
int enemyX = 30;
int enemyY = 10;
void printTank()
{
    gotoxy(tankX , tankY);
    for(int index = 0; index<6; index++)
    {
        cout<<tank1[index];
    }
    gotoxy(tankX,tankY+1);
    for(int index=0;index<6;index++)
    {
        cout<<tank2[index];
    }
}
void printEnemy()
{
    gotoxy(enemyX,enemyY);
    for(int index=0;index<6;index++)
    {
        cout<<enemy1[index];
    }
    gotoxy(enemyX,enemyY+1);
    for(int index=0;index<6;index++)
    {
        cout<<enemy2[index];
    }
    gotoxy(enemyX,enemyY+2);
    for(int index=0;index<6;index++)
    {
        cout<<enemy3[index];
    }
    gotoxy(enemyX,enemyY+3);
    for(int index=0;index<6;index++)
    {
        cout<<enemy4[index];
    }
}
void moveTankerLeft()
{
    char next = getCharAtxy(tankX-1,tankY);
    if(next == ' ')
    {
        eraseTank();
        tankX = tankX-1;
        printTank();
    }
}
void moveTankerRight()
{
    char next = getCharAtxy(tankX+6,tankY);
    if(next == ' ')
    {
        eraseTank();
        tankX = tankX+1;
        printTank();
    }
}
void moveTankUp()
{
    char next = getCharAtxy(tankX,tankY-1);
    if(next == ' ')
    {
        eraseTank();
        tankY=tankY-1;
        printTank();
    }
}
void moveTankDown()
{
    char next = getCharAtxy(tankX,tankY+2);
    if(next == ' ')
    {
        eraseTank();
        tankY = tanky+1;
        printTank();
    }
}
void moveEnemy()
{
    if(enemyDirection == "Up")
    {
        char next = getCharAtxy(enemyX,enemyY-1);
        if(next == ' ')
        {
            eraseEnemy();
            enemyY--;
            printEnemy();
        }
        if(next == '#')
        {
            enemyDirection = "Down";
        }
    }
    if(enemyDirection =="Down")
    {
        char next = getCharAtxy(enemyX,enemyY+4);
        if(next == ' ')
        {
            eraseEnemy();
            enemyY++;
            printEnemy();
        }
        if(next = '#')
        {
            enemyDirection = "Up";
        }
    }
}
void eraseEnemy()
{
    gotoxy(enemyX,enemyY);
    for(int index=0;index<6;index++)
    {
        cout<<" ";
    }
    gotoxy(enemyX,enemyY+1);
    for(int index=0;index<6;index++)
    {
        cout<<" ";
    }
    gotoxy(enemyX,enemyY+2);
    for(int index=0;index<6;index++)
    {
        cout<<" ";
    }
    gotoxy(enemyX,enemyY+3);
    for(int index=0;index<6;index++)
    {
        cout<<" ";
    }
}
void eraseTank()
{
    gotoxy(tankX,tankY);
    for(int index=0;index<6;index++)
    {
        cout<<" ";
    }
    gotoxy(tankX,tankY+1);
    for(int index=0;index<6;index++)
    {
        cout<<" ";
    }
}
//Player Bullets
int bulletX[100];
int bulletY[100];
bool isBulletActive[100];
int bulletCount = 0;
void generateBullet()
{
    bulletX[bulletCount]= tankX+7;
    bulletY[bulletCount]=tankY;
    isBulletActive[bulletCount]= true;
    gotoxy(tankX+7,tankY);
    cout<<".";
    bulletCount++;
}
void moveBullet()
{
    for(int x=0;x<bulletCount;x+++)
    {
        if(isBulletActive[x]== true)
        {
            char next = getCharAtxy(bulletX[x]+1)
        }
    }
}
