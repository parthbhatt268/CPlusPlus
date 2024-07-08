### 1. Reverse a Linked List

[- LeetCode](https://leetcode.com/problems/reverse-linked-list/description/)



![](../assets/2024-07-08-22-52-26-image.png)

- Recursively 

- Iteratively - 2 Pointers
  
  ---
  
  Iteratievly - you will have one null node at the start which points to null

---

2 pointer

```cpp
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        if(head==NULL)
            return head;
        while(head!=NULL)
        {
            curr=head;
            head=head->next;
            curr->next=prev;
            prev=curr;
        } 
        return prev;
    }
};
```
