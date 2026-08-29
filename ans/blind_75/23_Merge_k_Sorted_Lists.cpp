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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()){
            return nullptr;
        }
        while(lists.size() > 1){
            vector<ListNode*> temp;
            for(size_t i=0; i < lists.size(); i+=2){
                ListNode* list1 = lists[i];
                ListNode* list2 = i + 1 < lists.size() ? lists[i+1] : nullptr;
                temp.push_back(mergeTwoLists(list1, list2));
            }
            lists = move(temp);
        }
        return lists[0];
    }
private:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy;
        ListNode* node = & dummy;
        while(list1 && list2){
            if(list1->val > list2->val){
                node->next = list2;
                list2 = list2->next;
            }
            else{
                node->next = list1;
                list1 = list1->next;
            }
            node = node->next;
        }
        node->next = list1 ? list1 : list2;
        return dummy.next;
    }
};

/*本題為21. Merge Two Sorted Lists的進階*/