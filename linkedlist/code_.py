class Node:
    def __init__(self,val):
        self.val = val
        self.next = None


def rev(head):
    prev=None
    cur = head
    while cur:
        new_node = cur.next
        cur.next = prev
        prev = cur
        cur = new_node

    return prev

def print_ll(head):
    cur = head
    while cur:
        print(cur.val, end='->')
        cur = cur.next
    print('None')



head = Node(1)
head.next = Node(2)
head.next.next = Node(3)
head.next.next.next = Node(4)


print("linkedlist before reviseing")
print_ll(head)

print("linkedlist after reversing ")
print_ll(rev(head))


