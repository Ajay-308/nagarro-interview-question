

class Node:
    def __init__(self, val):
        self.data = val
        self.left = None
        self.right = None

def preOrder(root, arr):
    if not root:
        return
    arr.append(root.data)
    preOrder(root.left, arr)
    preOrder(root.right, arr)

root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

result = []                    
preOrder(root, result)         

print("Preorder Traversal:", end=" ")
for val in result:
    print(val, end=" ")
print()
