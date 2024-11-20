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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr)
            return nullptr;
        
        ListNode* next = nullptr;
        ListNode* prev = nullptr;
        ListNode* now = head;

        while(now->next != nullptr)
        {
            next = now->next;
            now->next = prev;
            prev = now;
            now = next;
        }

        now->next = prev;
        head->next = nullptr;
        head = now;
        
        return head;
    }
};
