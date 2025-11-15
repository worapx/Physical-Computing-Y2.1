#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int value) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->data = value;
    n->next = NULL;
    return n;
}

void printList(Node *head) {
    Node *p = head;
    while (p) {
        printf("%d", p->data);
        if (p->next) printf(" -> ");
        p = p->next;
    }
    printf("\n");
}

Node *reorder(Node *head) {
    if (!head || !head->next) return head;

    int count = 0;
    Node *p = head;
    while (p) {
        count++;
        p = p->next;
    }

    Node **arr = (Node **)malloc(sizeof(Node*) * count);
    p = head;
    for (int i = 0; i < count; i++) {
        *(arr + i) = p;
        p = p->next;
    }

    Node *newHead = NULL;
    Node *tail = NULL;
    int left = 0, right = count - 1;
    int turn = 0; 

    while (left <= right) {
        Node *nextNode = NULL;
        if (turn % 4 == 0) nextNode = *(arr + right--);
        else if (turn % 4 == 1) nextNode = *(arr + left++);
        else if (turn % 4 == 2) nextNode = *(arr + left++);
        else nextNode = *(arr + right--);

        nextNode->next = NULL;
        if (!newHead) newHead = tail = nextNode;
        else {
            tail->next = nextNode;
            tail = nextNode;
        }
        turn++;
    }

    free(arr);
    return newHead;
}

int main() {
    int n;
    scanf("%d", &n);

    Node *head = NULL, *tail = NULL;
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        Node *newNode = createNode(val);
        if (!head) head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    Node *newList = reorder(head);
    printList(newList);

    return 0;
}
