// Merge Two Sorted Lists
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* mergehead=new ListNode ();
    ListNode* mergecurr=mergehead;
    while(list1!=nullptr &&  list2!=nullptr)
        {
        if(list1->val < list2->val || list1->val == list2->val)
        {
        mergecurr->next=list1;
        list1=list1->next;
        }
       else if(list2->val < list1->val)
         {
          mergecurr->next=list2;
          list2=list2->next;
       }
       mergecurr=mergecurr->next;
    }
        mergecurr->next=(list1!=nullptr)?list1:list2;
        return mergehead->next;
    }
};
