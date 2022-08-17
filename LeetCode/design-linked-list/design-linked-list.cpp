#include <bits/stdc++.h>
using namespace std;

#define P(x) cout << #x << " = { " << x << " }\n"
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define INF 1000000000  

// shortcuts for "common" data types in contests
typedef long long       ll;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
typedef vector<int>     vi;

// common memset setting 
// memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
// memset(arr, 0, sizeof arr);    // to clear array of integers

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class MyLinkedList
{
    Node *head = NULL;
    int size = 0;

public:
    MyLinkedList()
    {
        head = NULL;
    }

    int get(int index)
    {

        Node *temp = head;

        if (index > size || index < 0)
            return -1;

        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
        }
        if(temp == NULL) return -1;
        else return temp->data;
    }

    void addAtHead(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
        return;
    }

    void addAtTail(int val)
    {

        Node *newNode = new Node(val);
        Node *temp = head;

        if (head == NULL)
        {
            head = newNode;

            return;
        }

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        size++;
        return;
    }

    void addAtIndex(int index, int val)
    {
        Node *newNode = new Node(val);
        Node *temp = head;

        if (index > size || index < 0)
            return;
        else if (index == 0)
        {
            addAtHead(val);
            return;
        }

        for (int i = 0; temp != NULL && i < index - 1; i++)
        {

            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        size++;
        return;
    }

    void deleteAtIndex(int index)
    {

        Node *temp = head;
        if (temp == NULL)
            return;

        if (index == 0)
        {
            head = head->next;
            delete temp;
            return;
        }

        for (int i = 0; temp != NULL && i < index - 1; i++)
            temp = temp->next;

        if (temp == NULL || temp->next == NULL)
            return;

        Node *next = temp->next->next;
        delete temp->next;
        temp->next = next;
        size--;
        return;
    }
    void prinList()
    {
        Node *temp = head;
        if (temp == NULL)
        {
            cout << "no data" << endl;
            return;
        }
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
