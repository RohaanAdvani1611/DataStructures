typedef struct node{
    int data;
    struct node *next;
}node;

typedef node* list;

void init_SLL(list *l);
void append(list *l, int d);
void traverse(list l);
struct node* reverse_even();