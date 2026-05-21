#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode *CreateLinkedList(int elementOfLL[], int sizeOfArray)
    {
        ListNode *head, *tempNode, *it;

        head = new ListNode;
        head->val = elementOfLL[0];
        head->next = NULL;
        it = head;

        for (int i = 1; i < sizeOfArray; i++)
        {
            tempNode = new ListNode;
            tempNode->val = elementOfLL[i];
            tempNode->next = NULL;
            it->next = tempNode;
            it = tempNode;
        }

        return head;
    }

    void DisplayElement(ListNode *head)
    {
        while (head)
        {
            cout << " |" << head->val << "|| ";
            head = head->next;
        }

        cout << endl;
    }
};

class Solution
{
public:
    ListNode *mergeNodes(ListNode *head)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        ListNode *first, *it, *tempNode, *prevNode;
        int tempVal = 0;
        it = head;
        bool isFirstNode = true;

        while (it->next->val)
        {
            tempVal += it->val;
            tempNode = it;
            it = it->next;
            delete tempNode;
        }
        // Actual Head
        prevNode = head = it;
        it->val += tempVal;
        tempNode = it->next;
        it->next = it->next->next;
        delete tempNode;

        it = prevNode->next;
        tempVal = 0;

        while (it)
        {
            if (it->next && !it->next->val)
            {
                it->val += tempVal;
                tempVal = 0;
                prevNode->next = it;
                prevNode = it;
                it = it->next;
            }
            else
            {
                tempVal += it->val;
                tempNode = it;
                it = it->next;
                prevNode->next = it;
                delete tempNode;
            }
        }

        return head;
    }
};

int main()
{
    Solution s;
    ListNode l;
    ListNode *head;
    // int elementOfLL[] = {0, 1, 2, 0}; // 1 -> 5 -> 2 -> 4 -> 3
    int elementOfLL[] = {0, 3, 1, 0, 4, 5, 2, 0}; // 1 -> 5 -> 2 -> 4 -> 3
    int n = sizeof(elementOfLL) / sizeof(elementOfLL[0]);
    head = l.CreateLinkedList(elementOfLL, n);
    l.DisplayElement(head);
    head = s.mergeNodes(head);
    l.DisplayElement(head);
}