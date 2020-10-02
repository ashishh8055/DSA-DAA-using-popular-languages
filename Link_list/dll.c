struct Node { 
    int data; 
    struct Node* next; // Pointer to next node in DLL 
    struct Node* prev; // Pointer to previous node in DLL 
};
void push(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
   new_node->data = new_data; 
  
    new_node->next = (*head_ref); 
    new_node->prev = NULL; 
  
    if ((*head_ref) != NULL) 
        (*head_ref)->prev = new_node; 
  
    (*head_ref) = new_node; 
}

void insertAfter(struct Node* prev_node, int new_data) 
{ 
    if (prev_node == NULL) { 
        printf("the given previous node cannot be NULL"); 
        return; 
    } 
  
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
  
    new_node->data = new_data; 
  
    new_node->next = prev_node->next; 
  
    prev_node->next = new_node; 
  
    new_node->prev = prev_node; 
  
    if (new_node->next != NULL) 
        new_node->next->prev = new_node; 
} 
