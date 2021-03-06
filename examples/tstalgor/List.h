#pragma once

#include <stdio.h>


struct ListNode {
public:
    int       m_nValue;
    ListNode* m_pNext;

public:
    ListNode() : m_nValue( -1 ), m_pNext(nullptr) {

    }
    ListNode(int val) : m_nValue( val ), m_pNext(nullptr) {

    }
};

//#define open TRUE

#ifdef open
#define isdllexport __declspec(dllexport)
#else
#define  isdllexport
#endif

isdllexport ListNode* CreateListNode(int value);
isdllexport void ConnectListNodes(ListNode* pCurrent, ListNode* pNext);
isdllexport void PrintListNode(ListNode* pNode);
isdllexport void PrintList(ListNode* pHead);
isdllexport void DestroyList(ListNode* pHead);
isdllexport void AddToTail(ListNode** pHead, int value);
isdllexport void RemoveNode(ListNode** pHead, int value);
