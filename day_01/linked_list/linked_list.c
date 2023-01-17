#include <stdio.h>

struct node
{
    int key;
    int value;
    struct node *next;
};

struct list
{
    struct node *first;    
};

void init_list(struct list *l);
int is_list_empty(struct list *l);
struct node* find_last_one(struct list *l);
void insert_node_begging(struct list *l, int key, int value);
void show_list(struct list *l);
struct node* search(struct list *l, int chave);

int main(){
    struct list l;
    init_list(&l);

    insert_node_on_end(&l, 10, 4);
    insert_node_on_end(&l, 20, 71);
    insert_node_on_end(&l, 30, 21);
    insert_node_on_end(&l, 40, 42);

    show_list(&l);

    printf("%d", search(&l, 10)->value);
}

void init_list(struct list *l){
    l->first = NULL;
}

int is_list_empty(struct list *l){
    if(l->first == NULL){
        return 1;
    }else{
        return 0;
    }
}

void insert_node_on_begging(struct list *l, int key, int value){
    struct node *aux;
    aux = (struct node*) malloc(sizeof(struct node));

    aux->key = key;
    aux->value = value;
    aux->next = NULL;

    if(is_list_empty(l)){
        l->first = aux;
    }else{
        aux->next = l->first;
        l->first = aux;
    }
}

void insert_node_on_end(struct list *l, int key, int value){
    struct node *aux;
    aux = (struct node*) malloc(sizeof(struct node));

    aux->key = key;
    aux->value = value;
    aux->next = NULL;

    if(is_list_empty(l)){
        l->first = aux;
    }else{
        struct node *last_one = find_last_one(&l);
        last_one->next = aux;
    }
}

void show_list(struct list *l){
    struct node *aux;
    aux = l->first;
    while(aux != NULL){
        printf("[%d]: %d\n",aux->key, aux->value);
        aux = aux->next;
    }
}

struct node* find_last_one(struct list *l){
    struct node *aux;
    aux = l->first;
    while(aux->next != NULL){
        aux = aux->next;
    }
    return aux;
}

struct node* search(struct list *l, int chave){
    struct node *aux;
    aux = l->first;
    while(aux != NULL) {
        if(aux->key == chave){
            return aux;
        }
        aux = aux->next;
    }
    return NULL;
}

