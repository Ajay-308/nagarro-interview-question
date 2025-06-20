def dfs_recursive(graph, node, visited):
    visited[node] = True
    print(node, end=" ")

    for neighbor in graph[node]:
        if not visited[neighbor]:
            dfs_recursive(graph, neighbor, visited)

# Example
graph = {
    0: [1, 2],
    1: [0, 3, 4],
    2: [0, 5],
    3: [1],
    4: [1],
    5: [2]
}

visited = [False] * len(graph)
print("DFS Recursive:", end=" ")
dfs_recursive(graph, 0, visited)
