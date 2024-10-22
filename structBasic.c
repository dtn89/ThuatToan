#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

struct myFamilyMember
{
    int age;
    char name[30];
};

int main()
{
    struct myFamilyMember namDang;
    strcpy(namDang.name, "Dang Trung Nam");
    namDang.age = 35;
    struct myFamilyMember phatDang;
    strcpy(phatDang.name, "Dang Thanh Phat");
    phatDang.age = 3;
    struct myFamilyMember ngaTran;
    strcpy(ngaTran.name, "Tran Kim Bao Nga");
    ngaTran.age = 35;

    printf("Member %s is %d years old\n", namDang.name, namDang.age);
    printf("Member %s is %d years old\n", phatDang.name, phatDang.age);
    printf("Member %s is %d years old\n", ngaTran.name, ngaTran.age);
    printf("Size of struct: %ld\n", sizeof(struct myFamilyMember));
    
    return 0;
}
