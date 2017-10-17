#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
typedef struct LinkedListNode LinkedListNode;

struct LinkedListNode {
    char val;
    LinkedListNode *next;
}*temp;

LinkedListNode* _insert_node_into_singlylinkedlist(LinkedListNode *head, LinkedListNode *tail, char val) {
    if(head == NULL) {
        head = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        head->val = val;
        head->next = NULL;
        tail = head;
    }
    else {
        LinkedListNode *node = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        node->val = val;
        node->next = NULL;
        tail->next = node;
        tail = tail->next;
    }
    return tail;
}

/*
 * Complete the function below.
 */
/*
For your reference:
LinkedListNode {
    char val;
    LinkedListNode *next;
};
*/
bool isPalindrome(LinkedListNode* head) {
 int c=0,flag=0;
   char a[10001],r[10001];
    for(temp=head; temp!=NULL; temp=temp->next){
    a[c++]=temp->val;
    }

   /* for(int i=0;i<c;i++){
        printf("%c",a[i]);
    }
    printf("\n");*/
   for (int i = c - 1; i >= 0 ; i--)
    {
        r[c - i - 1] = a[i];
    }
   /* for(int i=0;i<c;i++){
        printf("%c",r[i]);
    }*/

    for(int i=0;i<c;i++){

        if(a[i]!=r[i]){
            flag=1;
        }
    }

  if(flag==0){
      return true;
  }
    else{
return false;}

    return false;
}
int main()
{
    FILE *f = stdout;
    char *output_path = getenv("OUTPUT_PATH");
    if (output_path) {
        f = fopen(output_path, "w");
    }

    bool res;
    int head_size = 0;

    LinkedListNode* head = NULL;
    LinkedListNode* head_tail = NULL;

    scanf("%d", &head_size);
    char s[10005];
     scanf(" %s", s);
    for(int i = 0; i < head_size; i++) {
        char head_item = s[i];
        head_tail = _insert_node_into_singlylinkedlist(head, head_tail, head_item);

        if(i == 0) {
            head = head_tail;
        }
    }

//isPalindrome(head);
  res = isPalindrome(head);
    fprintf(f, "%d\n", res);

    fclose(f);
    return 0;
}

