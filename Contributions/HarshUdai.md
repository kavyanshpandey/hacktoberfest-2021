# This is the solution of finding the cycle in linked list, O(n) time and O(1) space.
# Hacktoberfest is the best way to start contributing to open source, in this one month there are various learning likes git, github, project contribution, skill set exercise.
# contributor: harsh udai

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        
        if(head==None or head.next==None):
            return False
        
        elif(head==head.next):
            return True
        
        slow = head
        fast = head.next
        
        while(slow!=None and fast!=None):
            if(slow==fast):
                return True
            
            else:
                slow=slow.next
                if(slow.next==None or fast.next==None):
                    return False
                fast=fast.next.next
                
        return False
        
