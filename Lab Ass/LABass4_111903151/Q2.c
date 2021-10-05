#include<stdio.h>

#define size 5
#define size2 3

int main(){
    typedef struct name{
        char first[32];
        char middle[32];
        char last[32];
    }stud;
    struct student{
        int roll_no;
        stud s1;
        struct DOB{
            int date;
            int month;
            int year;
        }DOBs;
        int marks[size2];
    };
    float sum=0;
    struct student details[size];
    for (int i=0;i<size;i++){

        printf("Enter roll number :");
        scanf("%d",&details[i].roll_no);

        printf("Enter first name :");
        scanf("%s",details[i].s1.first);
        printf("Enter middle name :");
        scanf("%s",details[i].s1.middle);
        printf("Enter last name :");
        scanf("%s",details[i].s1.last);

        printf("Enter Date of Birth in DDMMYYYY pattern :");
        scanf("%d/%d/%d",&details[i].DOBs.date,&details[i].DOBs.month,&details[i].DOBs.year);

        for (int k=0;k<size2;k++){
            printf("Enter marks of subject%d: ",k+1);
            scanf("%d",&details[i].marks[k]);
        }

    }

    for (int i=0;i<size;i++){

        printf("Roll number :%d\n",details[i].roll_no);

        printf("Full name :%s %s %s\n",details[i].s1.first,details[i].s1.middle,details[i].s1.last);

        printf("Date of Birth :%02d / %02d / %04d \n",details[i].DOBs.date,details[i].DOBs.month,details[i].DOBs.year);
        sum=0;
        for (int k=0;k<size2;k++){
            printf("Marks of subject%d: %d\n",k+1,details[i].marks[k]);
            sum = sum + details[i].marks[k];
        }
        printf("Average Marks of student is %0.2f\n",sum/size2);

    }

    return 0;

}
