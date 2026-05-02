/*
    강의 내용 : https://www.youtube.com/watch?v=xND0t1pr3KY
    run custom shortcuts : option + r

    1. arithmetic operaters = + - / * % ++ --
    2. user input

*/

#include <stdio.h>
#include <string.h>

int main()
{

    // 1. arithmetic operaters

    int x = 10;
    int y = 3;
    int z = 0;

    z = x + y;
    z = x - y;
    z = x * y;
    z = x % y;
    z = x / y; // 0 -> (int) = (int) / (int) : impossible
    printf("result : %d \n", z);

    int x2 = 2;
    int y2 = 3;
    float z2 = 0;

    z2 = x2 / y2; // 0.000000 -> (float) = (int) / (int) : impossible
    printf("result : %f \n", z2);

    int x3 = 2;
    float y3 = 3;
    float z3 = 0;

    z3 = x3 / y3; // 0.000000 -> (float) = (int) / (float) : possible
    printf("result : %f \n", z3);

    x++;    // 10 + 1
    x--;    // (10 + 1) - 1
    x += 2; // ((10 + 1) - 1) +2
    x -= 2; // (((10 + 1) - 1) +2) -2
    x *= 3;
    x /= 4;

    printf("x : %d \n", x);

    // 2. user input

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    scanf("%d", &age);
    scanf("%f", &gpa);    // 3.13333 + \n
    scanf(" %c", &grade); // _%c : \n이 grade에 자동으로 입력되는 것을 방지

    getchar(); // clear '\n'
    // scanf("%s", &age); // abc defg 입력 시, _에 의해 abc만 저장
    fgets("%s", sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // 마지막 칸 내용을 \n -> \0 으로 변경
    // strlen은 string.h 필요

    printf("name : %s \n", name);
    printf("age : %d \n", age);
    printf("gpa : %f \n", gpa);
    printf("grade : %c \n", grade);

    return 0;
}
