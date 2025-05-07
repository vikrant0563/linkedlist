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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    int num = 0;
     ListNode* temp1 = head;
     while(temp1!=0){
         num++;
         temp1 =  temp1->next;
     }
        num = num - n;
        ListNode* temp = head;
        ListNode* prev = NULL;
       if(num==0){
           return head->next;
       }
            int i = 1;
            while(i<=num){
                prev = temp;
                temp = temp->next;
                i++;
            }
            prev->next = temp->next;
            delete temp;

   
        return head;
    }
};