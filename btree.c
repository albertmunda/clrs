#include <stdio.h>
#include <stdlib.h>

#define ORDER 5

typedef struct node {
    int key;
    struct node *left, *right;
} node_t;

node_t * create_node(int key){
    node_t * tmp = (node_t*)malloc(sizeof(node_t));
    tmp->key = key;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}

node_t* insert(node_t item, int key){

}

int main(){

    return 0;
}
