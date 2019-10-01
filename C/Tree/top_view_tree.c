//Top View Of a BST in C
#include <stdio.h>
#include <stdlib.h>
//Tree
typedef struct Tree{
    int data;
    struct Tree* left;
    struct Tree* right;
}Tree;
//Tree with distance
typedef struct sTree{
    Tree* node;
    int dist;
}sTree;
//Data node for Queue
typedef struct Node{
    sTree* snode;
    struct Node* next;
}Node;
//Queue
typedef struct Queue{
    struct Node* front;
    struct Node* rear;
}Queue;
//Map for key value pairs
typedef struct map{
    int key;
    int value;
}Map;
//Linked List for Map to connect
typedef struct LL{
    Map* m;
    struct LL* next;
}LL;

//Queue fucntions

sTree* top(Queue* head){
    return head->front->snode;
}

Queue* push(Queue* head, sTree* nn){
    Node* n= (Node*)malloc(sizeof(Node));
    n->snode = nn;
    n->next = NULL;
    if(head->rear == NULL){
        head->front = n;
        head->rear = n;
    }
    else{
    head->rear->next = n;
    head->rear = n;
    }
    return head;
}

Queue* pop(Queue* head){
    if(head->front->next)
    head->front = head->front->next;
    else if(head->front == head->rear){
    head->front = NULL;
    head->rear = NULL;
    }
    else{
        printf("Element can't be popped\n");
    }
    return head;
}

int isEmpty(Queue* head){
    if(head->front == NULL)
        return 1;
    return 0;
}

//Linked List Functions
LL* lls = NULL;
LL* lle = NULL;
LL* add(LL* head, int value,int key){
    LL* nn = (LL*)malloc(sizeof(LL));
    Map* nm = (Map*)malloc(sizeof(Map));
    nm->key = key;
    nm->value = value;
    nn->m = nm;
    nn->next = NULL;
    if(!head){
        head = nn;
        lls = nn;
        lle = nn;
    }
    else if(key < lls->m->key){
        nn->next = head;
        head = nn;
        lls = head;
    }
    else if(key > lle->m->key){
        lle->next = nn;
        lle = lle->next;
    }
    return head;
}

//Binary Search Tree Insertion
Tree* BST(Tree* root,int d){
    if(root == NULL){
        Tree* nn = (Tree*)malloc(sizeof(Tree));
        nn->data = d;
        nn->left = NULL;
        nn->right = NULL;
    }
    else if(root->data > d){
        root->left = BST(root->left,d);
    }
    else{
        root->right = BST(root->right,d);
    }
}


int main()
{
    Tree* root = NULL;
    Queue* head = (Queue*)malloc(sizeof(Queue));
    head->front = NULL;
    head->rear = NULL;
    LL* lhead = NULL;
    int n;
    printf("Enter the number of elements in the tree:\n");
    scanf("%d",&n);
    printf("Enter the node values\n");
    for(int i=0;i<n;i++){
        int val;
        scanf("%d",&val);
        root = BST(root,val);
    }
    sTree* nn = (sTree*)malloc(sizeof(sTree));
    nn->node = root;
    nn->dist = 0;
    head = push(head,nn);
    while(!isEmpty(head)){
        sTree* temp = top(head);
        head = pop(head);
        //left node push
        sTree* newnl = (sTree*)malloc(sizeof(sTree));
        if(temp->node->left != NULL){
        newnl->node = temp->node->left;
        newnl->dist = temp->dist-1;
        head = push(head,newnl);
        }
        //right node push
        sTree* newnr = (sTree*)malloc(sizeof(sTree));
        if(temp->node->right != NULL){
        newnr->node = temp->node->right;
        newnr->dist = temp->dist+1;
        head = push(head,newnr);
        }
        //Add in Map
        lhead = add(lhead,temp->node->data,temp->dist);
    }
    while(lhead){
        printf("%d ",lhead->m->value);
        lhead = lhead->next;
    }
    return 0;
}

