#include <bits/stdc++.h>
using namespace std;

struct node{
    int key;
    struct node *next;
    struct node *prev;
};

typedef struct node * NodePointer;

NodePointer nil;

void init(void){
    nil = (node *)malloc(sizeof(struct node));
    nil->next = nil;
    nil->prev = nil;
}

void printList(){
    NodePointer cur = nil->next;
    int isf = 1;
    while(1){
        if( cur == nil) break;
        if( isf == 0) printf(" ");
        printf("%d", cur->key);
        cur = cur->next;
        isf = 0;//front かどうか
    }
    printf("\n");
}
void deleteNode(NodePointer t){
    t->prev->next = t->next;
    t->next->prev = t->prev;
}
void deleteLast(){
    NodePointer t = nil->prev;
    if( t == nil) return;
    deleteNode(t);
}
void deleteFirst(){
    NodePointer t = nil->next;
    if( t == nil) return;
    deleteNode(t);
}
void delete1(int key){
    NodePointer cur = nil->next;
    while(1){
        if(cur == nil) break;
        if(cur->key == key){
            deleteNode(cur);
            break;
        }
        cur = cur->next;
    }
}

void insert(int key){
    NodePointer x;
    x = (node*)malloc(sizeof(struct node));
    x->key = key;
    
    if(nil->prev == nil){
        nil->prev = x;
        x->next = nil;
        nil->next = x;
        x->prev = nil;
    }
    else{
        nil->next->prev = x;
        x->next = nil->next;
        nil->next =x;
        x->prev = nil;   
    }
}

int main(){
    int key, n, i;
    int size = 0;
    char com[20];
    int np = 0, nd = 0;
    scanf("%d", &n);
    init();
    for ( i = 0; i < n; i++ ){
        //scanf("%s%d", com, &key);
        cin >> com;
        if ( com[0] == 'i' ) {
            cin >> key;
            insert(key); 
            np++; 
            size++;
            }
        else if ( com[0] == 'd' ) {
        if (strlen(com) > 6){
        if ( com[6] == 'F' ) deleteFirst();
        else if ( com[6] == 'L' ) deleteLast();
        } else {
            cin >> key;
            delete1(key); nd++; 
        }
        size--;
        }
    }

    printList();
    return 0;
}