#include <stdio.h>
#include <stdlib.h>

  struct ListNode {
      int val;
      struct ListNode *next;
  };
 
struct ListNode* swapPairs(struct ListNode* head) {
    if(head == NULL || head->next == NULL)
    {
        return head;
    }


    struct ListNode* currNode = head;
    struct ListNode* nextNode = head->next;
    struct ListNode* prev = NULL;

    while(currNode != NULL && nextNode != NULL)
    {        
        struct ListNode* third = nextNode->next;
        nextNode->next = currNode;
        currNode->next = third;

        if(prev != NULL)
        {
            prev->next = nextNode;
        }
        else
        {
            head = nextNode;
        }
        prev = currNode;
        currNode = third;
        if(third != NULL)
        {
            nextNode = third->next;
        }
        else
        {
            nextNode = NULL;
        }
    }
    return head;
}