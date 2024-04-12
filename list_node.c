/***********************************************
#
#    Filename: list_node.c
#
#    Author: ThirteenQ LJQ0 ljq1019395070@163.com
#    Description: list_node exercise
#    Create       : 2024-04-11 09:34:37
#    Last Modified: 2024-04-11 09:34:37
#
***********************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_node {
    int data; // data
    struct list_node *next; // pointer to next node
}list_single;

list_single *create_list(int data);

int main() {
    list_single *head = NULL;
    list_single *end = NULL;
    list_single *node1 = create_list(2000);
    list_single *node2 = create_list(1820);
    list_single *node3 = create_list(0);
    head = node1;
    node1->next = node2;
    node2->next = node3;
    end = node3;
    node3->next = NULL;
    printf("node1.data = %d\n", node1->data);
    printf("node2.next = %p\n", node2->next);
    return 0;
}

list_single *create_list(int data) {
    list_single *node = malloc(sizeof(list_single));
    if(node == NULL) {
        printf("malloc fair!\n");
    }
    memset(node, 0, sizeof(list_single));
    node->data = data;
    node->next = NULL;
    return node;
}
