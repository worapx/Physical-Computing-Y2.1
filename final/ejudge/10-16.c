#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// DataNode structure using typedef
typedef struct DataNode {
  char* data;
  struct DataNode* next;
} DataNode;
 
// SinglyLinkedList structure using typedef
typedef struct SinglyLinkedList {
  unsigned int count;
  DataNode* head;
} SinglyLinkedList; 
 
// Function prototypes
DataNode *createDataNode(char *data);
SinglyLinkedList *createSinglyLinkedList();
void traverse(SinglyLinkedList *list);
void insert_last(SinglyLinkedList *list, char *data);
void insert_front(SinglyLinkedList* list, char* data);
void delete(SinglyLinkedList* list, char* data); // <-- สร้างตัวนี้
 
// Create a new DataNode
DataNode* createDataNode(char* data) {
  // Allocate memory for the node
  DataNode* newNode = (DataNode*)malloc(sizeof(DataNode));
 
  // Allocate memory for the string and copy the data
  newNode->data = (char*)malloc(strlen(data) + 1);
  strcpy(newNode->data, data);
 
  newNode->next = NULL;
  return newNode;
}
 
// Create a new SinglyLinkedList
SinglyLinkedList* createSinglyLinkedList() {
    SinglyLinkedList *new_list = malloc(sizeof(SinglyLinkedList));
    new_list->count = 0;
    new_list->head = NULL;
    return new_list;
}
 
// Traverse the list and print data
void traverse(SinglyLinkedList* list) {
    if (list->count == 0) {
        printf("This is an empty list.\n");
        return;
    }
    struct DataNode* pointer = list->head;
    while (pointer->next != NULL) {
        printf("%s -> ", pointer->data); // ปริ้นข้อมูลและขยับ pointer ไปเรื่อยๆ จนถึงโหนดตัวสุดท้าย
        pointer = pointer->next;
    }
    printf("%s\n", pointer->data);
}
 
// Insert a new node at the end of the list
void insert_last(SinglyLinkedList* list, char* data) {
    struct DataNode* pNew = createDataNode(data);
    if (list->count == 0) {
        list->head = pNew; // ถ้า Linked List ว่างให้เปลี่ยนตำแหน่ง list->head ไปที่ pNew
    } else {
        DataNode *pointer = list->head; // ถ้า Linked List ไม่ว่างให้สร้าง Pointer ตัวใหม่และขยับไปที่โหนดสุดท้ายและเปลี่ยน pointer->next เป็น pNew
        while (pointer->next != NULL){
            pointer = pointer->next;
        }
        pointer->next = pNew;
    }
    list->count++;
}
 
void insert_front(SinglyLinkedList* list, char* data) {
    DataNode* pNew = createDataNode(data);
    if (list->count == 0) {
        list->head = pNew; // ถ้า Linked List ว่างให้เปลี่ยนตำแหน่ง list->head ไปที่ pNew
    } else {
        DataNode *pointer = list->head; // เปลี่ยนตำแหน่งของ pNew.next ไปที่โหนดตัวแรกสุดและเปลี่ยนตำแหน่ง head node ไปที่ pNew
        list->head = pNew;
        pNew->next = pointer;
    }
    list->count++;
}

void delete(SinglyLinkedList* list, char* data) {
    if (list->count == 0) {
        printf("Cannot delete, %s does not exist.\n", data);
    } else {
        DataNode *current = list->head;
        DataNode *previous = NULL;
        while (current != NULL) {
            if (strcmp(current->data, data) == 0) {
                if (previous == NULL) {
                    list->head = current->next; // Deleting the head node
                } else {
                    previous->next = current->next; // Bypass the current node
                }
                free(current->data);
                free(current);
                list->count--;
                return;
            }
            previous = current;
            current = current->next;
        }
        printf("Cannot delete, %s does not exist.\n", data);
    }
}
 
int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[100]; // Assuming a maximum string length of 99 characters
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data); // Read condition and string data

        if (condition == 'F') {
            insert_front(mylist, data);
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            delete(mylist, data);
        } else {
            printf("Invalid Condition!\n");
        }
    }

    traverse(mylist);
    // Remember to free allocated memory for each node's data
    DataNode* current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
}