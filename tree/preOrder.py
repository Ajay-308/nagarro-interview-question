class Node:
    def __init__(self, val):
        self.data = val
        self.left = None
        self.right = None

def preOrder(root, arr):
    if root is None:
        return arr
    
    stack = [root]
    while stack:
        node = stack.pop()
        arr.append(node.data)  # fixed this line
        if node.right:
            stack.append(node.right)
        if node.left:
            stack.append(node.left)

# Constructing the tree
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

result = []                    
preOrder(root, result)         

# Output
print("Preorder Traversal:", end=" ")
for val in result:
    print(val, end=" ")
print()
