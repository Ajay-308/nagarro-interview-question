class Node:
    def __init__(self, val):
        self.data = val
        self.left = None
        self.right = None

# Function to calculate sum
def sumOfTree(root):
    if not root:
        return 0
    return root.data + sumOfTree(root.left) + sumOfTree(root.right)

# Create the binary tree
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

# Calculate and print the sum
total = sumOfTree(root)
print("Sum of all nodes in the tree:", total)
