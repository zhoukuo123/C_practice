#include <stdio.h>

#define  N  8
struct student {
    char num[10];
    float a[N];
    float ave;
};

void fun(struct student *s);

int main() {
    struct student s = {"007", 89.5, 98.0, 67.5, 88.0, 90, 77, 79, 97};
    int i;
    fun(&s);
    printf("The %s's student data:\n", s.num);
    for (i = 0; i < N; i++)
        printf("%4.1f\n", s.a[i]);
    printf("ave=%7.2f\n", s.ave);
    return 0;
}

void fun(struct student *s) {
    double sum = 0;
    int i;
    for (i = 0; i < 8; i++) {
        sum += s->a[i];
    }
    s->ave = sum / 8.0;
}
