/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdlib.h>
struct ListNode {
     int val;
      struct ListNode *next;
  };
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *header = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *p = header;

    int carry = 0;
while( l1||l2||(!l1&&!l2&&carry))
    {
        struct ListNode *q = (struct ListNode *)malloc(sizeof(struct ListNode));
        q->next=NULL;
        p->next = q;
        // if ()
        // {
        //     header = p;
        // }
        int tmp;
        if (l1 == NULL&&l2!=NULL)
        {
            tmp = l2->val + carry;
           
            l2 = l2->next;
        }
        else if (l2 == NULL&&l1!=NULL)
        {
            tmp = l1->val + carry;
            
            l1 = l1->next;
        }
        else if(!l1&&!l2&&carry){
             tmp=carry;
           
        }
        else 
        {
            tmp = l1->val + l2->val + carry;
           
            l1 = l1->next;
            l2 = l2->next;
        }
         if (tmp >= 10)
            {
                carry = 1;
            }
        q->val = tmp % 10;
        p = q;
    }
    return header->next;
}
int main(){
     struct ListNode *M1 = (struct ListNode *)malloc(sizeof(struct ListNode));
     struct ListNode *M2 = (struct ListNode *)malloc(sizeof(struct ListNode));
     struct ListNode *M3 = (struct ListNode *)malloc(sizeof(struct ListNode));
     struct ListNode *N1 = (struct ListNode *)malloc(sizeof(struct ListNode));
     struct ListNode *N2 = (struct ListNode *)malloc(sizeof(struct ListNode));
     struct ListNode *N3 = (struct ListNode *)malloc(sizeof(struct ListNode));
    M1->val=2;
    M1->next=M2;
    M2->val=4;
    M2->next=M3;
    M3->val=3;
    M3->next=NULL;
    N1->val=5;
    N1->next=N2;
    N2->val=6;
    N2->next=N3;
    N3->val=4;
    N3->next=NULL;
    struct ListNode* result=addTwoNumbers(M1,N1);
}