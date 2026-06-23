class Solution {
public:
    bool isPalindrome(ListNode* head) {

        vector<int> original;

        ListNode* temp = head;
        while(temp != NULL){
            original.push_back(temp->val);
            temp = temp->next;
        }

        // Reverse the list
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        // Compare
        temp = prev;
        int i = 0;

        while(temp != NULL){
            if(temp->val != original[i])
                return false;

            temp = temp->next;
            i++;
        }

        return true;
    }
};