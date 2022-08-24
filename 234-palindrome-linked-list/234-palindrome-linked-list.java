/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        
        //if we only have one element it's palindrome
        if(head==null || head.next==null)
            return true;
       // find middle element 
        ListNode fastptr = head;
        ListNode slowptr = head;
        
        while(fastptr.next!=null && fastptr.next.next!=null){
            slowptr = slowptr.next;
            fastptr = fastptr.next.next;
        }
        
        // reverse the right side of middle element.
        slowptr.next = reverse(slowptr.next);
        
        slowptr = slowptr.next;
        
        //traverse and check elemnt in left and right halves.
        while(slowptr!=null){
            if(head.val!= slowptr.val)
                return false;
            head = head.next;
            slowptr = slowptr.next;
        }
        return true;
        
    }
    ListNode reverse(ListNode head){
        ListNode prv = null;
        ListNode next = null;
        while(head!=null){
            next = head.next;
            head.next = prv;
            prv = head;
            head = next;
        }
        return prv;
    }
}