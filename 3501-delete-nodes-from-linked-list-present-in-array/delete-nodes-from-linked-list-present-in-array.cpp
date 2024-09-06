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
    ListNode* modifiedList(vector<int>& values, ListNode* listHead) {
        unordered_set<int> valueSet(values.begin(), values.end());
        ListNode* dummyNode = new ListNode(0);
        dummyNode->next = listHead;
        ListNode* currentNode = dummyNode; 
        while (currentNode->next) {
            if (valueSet.count(currentNode->next->val)) {
                currentNode->next = currentNode->next->next;  } else {
                currentNode = currentNode->next; } }   
        return dummyNode->next;
    }
};
