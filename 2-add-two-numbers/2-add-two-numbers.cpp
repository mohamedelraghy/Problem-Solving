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
    ListNode* insertAtEnd(ListNode* sum, int val){
        ListNode* newNode = new ListNode(val);
        ListNode* temp = new ListNode();
        temp = sum;
        
        
        if(sum == NULL) newNode = sum;
        else{
            while(temp->next != NULL){
                temp = temp->next;
            }
            
            temp->next = newNode;
        }
        return sum;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum = new ListNode;
        ListNode* node1 = l1;
        ListNode* node2 = l2;
        int num1, num2, res = 0, Isum = 0;
        
        num1 = node1->val;
        node1 = node1->next;

        num2 = node2->val;
        node2 = node2->next;
        
        Isum += num1 + num2;
        res = Isum % 10;
        sum->val = res;    
        Isum = (Isum - res) / 10; 
        
        while(node1 != NULL || node2 != NULL){
            
            num1 = num2 = 0;
            if(node1 != NULL){
                num1 = node1->val;
                node1 = node1->next;
            } 
            
            if(node2 != NULL) {
                num2 = node2->val;
                node2 = node2->next;
            }
            
            
            Isum += num1 + num2;
            res = Isum % 10;
            insertAtEnd(sum, res);
            Isum = (Isum - res) / 10; 
            cout << res << " " << Isum << endl;
        }
        
        if(Isum) insertAtEnd(sum, Isum);
       
        return sum;
    }
};