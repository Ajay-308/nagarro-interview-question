class Node:
    def __init__(self, val):
        self.data = val
        self.left = None
        self.right = None

def inOrder(root, arr):
    if not root:
        return
    inOrder(root.left, arr)
    arr.append(root.data)
    inOrder(root.right, arr)


root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

result = []
inOrder(root, result)

print("Inorder Traversal:", end=" ")
for val in result:
    print(val, end=" ")
print()
