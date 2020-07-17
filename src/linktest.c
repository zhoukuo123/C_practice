#include <stdio.h>
#include <stdlib.h>

struct link {
    char name[10];
    struct link *pnext;
};

struct link *initlink() {
    struct link *head, *current, *next;
    head = (struct link *) malloc(sizeof(char) * 10);
    if (!head) {
        printf("初始化失败\n");
        exit(0);
    }
    printf("请输入名字:");
    char x;
    scanf("%s", head->name);
    getchar();
    printf("是否需要继续输入:(y/n)\n");
    scanf("%c", &x);
    current = head;
    while (x == 'y') {
        printf("请输入名字:\n");
        next = (struct link *) malloc(sizeof(char) * 10);
        if (!next) {
            printf("初始化失败\n");
            exit(0);
        }
        scanf("%s", next->name);
        getchar();
        current->pnext = next;
        current = next;
        printf("是否需要继续输入(y/n)\n");
        scanf("%c", &x);
    }
    current->pnext = NULL;
    return head;
}

void display(struct link *p) {
    struct link *current;
    current = p;
    while (current->pnext != NULL) {
        printf("%s\n", current->name);
        current = current->pnext;
    }
    printf("%s\n", current->name);
}

int main() {
    struct link *p;
    p = initlink();
    display(p);
    return 0;
}
