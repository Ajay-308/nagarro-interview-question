class Node:
    def __init__(self, val):
        self.data = val
        self.left = None
        self.right = None

def postOrder(root, arr):
    if not root:
        return
    postOrder(root.left, arr)
    postOrder(root.right, arr)
    arr.append(root.data)


root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

result = []
postOrder(root, result)

print("postOrder Traversal:", end=" ")
for val in result:
    print(val, end=" ")
print()
