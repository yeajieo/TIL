/*
    강의 내용 : https://www.youtube.com/watch?v=xND0t1pr3KY

    1. 환경 설정 : c runner, c extension pack 설치
    터미널 열기
    c coplier 버전 확인, clang --version
    clang 설치 안 됐으면, xcode-select --install
    run custom shortcuts : option + r

    2. 변수
*/

#include <stdio.h>
// for input/output
#include <stdbool.h>
// for boolean

int main()
{
    printf("i wanna go home!\n");
    printf("but i can't.\n");

    int value = 30; // 4 byte
    printf("hohoho! %d is coming!!\n", value);

    float gpa = 3.54; // 4 byte
    printf("new gpa is %f\n", gpa);
    printf("new gpa is %.1f\n", gpa);
    printf("new gpa is %.2f\n", gpa);

    double longnum = 1.123456789012345;                // 8 byte
    printf("i wanna know the num %lf.\n", longnum);    // 1.1234567
    printf("i wanna know the num %.10lf.\n", longnum); // 1.1234567890
    printf("i wanna know the num %.15lf.\n", longnum); // 1.123456789012345

    char v1 = 'a'; // 1 byte
    printf("new word '%c'!\n", v1);
    // char v2 = 'aa';
    // printf("new word '%c'!\n", v2);

    char longcha[] = "long sentense!";
    printf("let me say %s\n", longcha);

    // 1 byte
    bool online = true;  // 1
    bool newone = false; // 0
    printf("let know the result %d\n", online);
    if (online)
    {
        printf("end");
    }
    else
    {
        printf("go");
    }

    return 0;
    // 0은 정상적으로 종료, 이외의 숫자 에러
}
