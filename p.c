#include<stdio.h> 

struct student{

    int rollno;
    float marks;

};

void display(struct student *st){

    printf("The roll number is : %d\n",st->rollno);
    printf("The marks is : %d\n",st->marks);

}

int main(){

    struct student *st;
    struct student s = {1,12};
    st = &s;

    display(st);

    return 0;
}

