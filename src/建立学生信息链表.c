#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stud_node {
     int    num;
     char   name[20];
     int    score;
     struct stud_node *next;
};
struct stud_node *head, *tail;

void input();

int main()
{
    struct stud_node *p;
	
    head = tail = NULL;
    input();
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}
void input() {
    struct stud_node *current, *pnext;
    head = (struct stud_node *)malloc(sizeof(struct stud_node));
    scanf("%d", &head->num);
    if (head->num == 0) {
        exit(0);
    }
    scanf(" %s %d", head->name, &head->score);
    current = head;
    while(current->num != 0) {
        pnext = (struct stud_node *)malloc(sizeof(struct stud_node));
        scanf("%d", &pnext->num);
        if (pnext->num == 0) {
            break;
        }
        scanf(" %s %d", pnext->name, &pnext->score);
        current->next = pnext;
        current = pnext;
    }
        current->next = NULL;
}
