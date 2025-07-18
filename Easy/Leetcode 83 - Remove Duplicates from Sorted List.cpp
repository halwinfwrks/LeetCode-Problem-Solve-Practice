#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head)
            return head;
        ListNode *slow = head, *fast = head;
        while (fast)
        {
            if (fast->val != slow->val)
            {
                slow->next = fast;
                slow = slow->next;
            }
            fast = fast->next;
        }
        slow->next = fast;
        slow = slow->next;
        return head;
    }
};
int main()
{
    return 0;
}