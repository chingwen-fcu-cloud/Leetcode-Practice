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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode();
        ListNode* current = l3;
        int carry=0;
        while(l1 != nullptr || l2 != nullptr || carry != 0){
            int sum = carry;
            if (l1 != nullptr)
            {
                sum+=l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr)
            {
                sum+=l2->val;
                l2 = l2->next;
            }
            carry = sum/10;
            current->next = new ListNode(sum%10);
            current = current->next;
        }
        ListNode* result = l3->next;
        delete l3;
        return result;
    }
};
/*
這題還需要注意 Memory Leak 的問題，用delete主動釋放空間，
然後不能直接刪最後的point，會變成 dangling pointer(野指標)，要刪的話記得改倒數第二的指標指向
delete curr->next;      // 刪最後一個
curr->next = nullptr;   // 斷開連結
*/