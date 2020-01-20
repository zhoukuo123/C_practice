#include <stdio.h>
#include <stdlib.h>

struct link {
    char name[10];
    struct link *pnext;
};

struct link *initlink() {
    struct link *head, *current, *next;
    head = (struct link *)malloc(sizeof(char) * 10);
    if (!head) {
        printf("初始化失败\n");
        exit(0);
    }
    printf("请输入名字:\n");
    char x;
    scanf("%s", head->name);
    getchar();
    current = head;
    printf("是否需要继续输入:(y/n)\n");
    scanf("%c", &x);
    while (x == 'y') {
        next = (struct link*)malloc(sizeof(char) * 10);
        if (!next) {
            printf("初始化失败\n");
            exit(0);
        }
        printf("请输入名字:\n");
        scanf("%s", next->name);
        getchar();
        current->pnext = next;
        current = next;
        printf("是否需要继续输入:\n");
        scanf("%c", &x);
    }
    current->pnext = NULL;
    return head;
}

void display(struct link *p) {
    struct link *current;
    current = p;
    while (p->pnext != NULL) {
        printf("%s\n", p->name);
        p = p->pnext;
    }
    printf("%s\n", p->name);
}
int main()
{
    struct link *p;
    p = initlink();
    display(p);
    return 0;
}

