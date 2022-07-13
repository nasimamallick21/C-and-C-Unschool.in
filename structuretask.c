#include<stdio.h>
#include<string.h>

struct employee
{
    char name[30];
    int id;
    float experience;
    float salary;
}s[5];

int main(){
    int n;
    // int n = 5; 

    // struct employee details[n];

    printf("Enter the details of 5 employee \n ");
    printf("\n");

    //store details
    for (int i = 0; i < 5; i++)
    {   
        printf("Employee %d \n",i+1);
        
        //name
        printf("Enter your name : ");
        scanf("%s", s[i].name);

        //id
        printf("Enter your Id : ");
        scanf("%d",&s[i].id);

        //experience
        printf("Enter your experience : ");
        scanf("%f",&s[i].experience) ;

        //salary
        printf("Enter your salary : ");
        scanf("%f",&s[i].salary) ;

        printf("\n");
        printf("----------------------------------------------------\n");
    }

    //print details
        printf("----------------All employee details----------------\n");

    for (int i = 0; i < 5; i++)
    {   
        //name
        printf("Name \t: ");
        printf("%5s \n",s[i].name);

        //id
        printf("Id \t: ");
        printf("%5d \n",s[i].id);

        //experience
        printf("Experience \t: ");
        printf("%0.2f \n",s[i].experience) ;

        //salary
        printf("Salary \t: ");
        printf("%5f \n",s[i].salary) ;

        printf("\n");
        printf("---------------------------------------------\n");
    }

    return 0;
}
