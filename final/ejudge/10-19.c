#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode {
    char *data;
    struct DataNode *next;
} DataNode;

typedef struct SinglyLinkedList {
    unsigned int count;
    DataNode *head;
} SinglyLinkedList;

DataNode *createDataNode(char *data) {
    DataNode *node = (DataNode *)malloc(sizeof(DataNode));
    node->data = (char *)malloc(strlen(data) + 1);
    strcpy(node->data, data);
    node->next = NULL;
    return node;
}

SinglyLinkedList *createSinglyLinkedList() {
    SinglyLinkedList *list = (SinglyLinkedList *)malloc(sizeof(SinglyLinkedList));
    list->count = 0;
    list->head = NULL;
    return list;
}

int main() {
    SinglyLinkedList *mylist = createSinglyLinkedList();

    char *data = (char *)malloc(100 * sizeof(char));

    while (1) {
        // ✅ ใช้ scanf ธรรมดาแทน fgets/gets
        if (scanf("%99s", data) != 1) break;

        if (strcmp(data, "Last") == 0) break;
        if (strlen(data) == 0) continue;

        DataNode *pNew = createDataNode(data);
        if (mylist->count == 0) {
            mylist->head = pNew;
        } else {
            DataNode *p = mylist->head;
            while (p->next != NULL) {
                p = p->next;
            }
            p->next = pNew;
        }
        mylist->count++;
    }

    int index;
    if (scanf("%d", &index) != 1) return 0;

    if (index < 0) index = mylist->count + index;

    if (index >= (int)mylist->count || index < 0) {
        printf("Error\n");
    } else {
        DataNode *p = mylist->head;
        for (int i = 0; i < index; i++)
            p = p->next;
        printf("%s\n", p->data);
    }

    free(data);
    return 0;
}
