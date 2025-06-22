class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Function to reverse the linked list
def reverse_linked_list(head):
    prev = None
    current = head

    while current:
        next_node = current.next  # Save next
        current.next = prev       # Reverse pointer
        prev = current            # Move prev forward
        current = next_node       # Move current forward

    return prev
def print_linked_list(head):
    current = head
    while current:
        print(current.data, end=" -> ")
        current = current.next
    print("None")

# Create linked list: 1 -> 2 -> 3 -> 4 -> None
head = Node(1)
head.next = Node(2)
head.next.next = Node(3)
head.next.next.next = Node(4)

print("Original Linked List:")
print_linked_list(head)

# Reverse the linked list
reversed_head = reverse_linked_list(head)

print("Reversed Linked List:")
print_linked_list(reversed_head)
