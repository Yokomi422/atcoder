from typing import List, Tuple

def find_maximum_path(N: int, M: int, roads: List[Tuple[int, int, int]]) -> int:
    graph = {}
    for a, b, c in roads:
        if a not in graph:
            graph[a] = []
        if b not in graph:
            graph[b] = []
        graph[a].append((b, c))
        graph[b].append((a, c))
    
    def dfs(node: int, visited: set, cost: int) -> int:
        visited.add(node)
        max_cost = cost
        for neighbor, edge_cost in graph.get(node, []):
            if neighbor not in visited:
                max_cost = max(max_cost, dfs(neighbor, visited.copy(), cost + edge_cost))
        return max_cost
    
    max_path_sum = 0
    
    for start_node in range(1, N + 1):
        max_path_sum = max(max_path_sum, dfs(start_node, set(), 0))
    
    return max_path_sum

def main():
    N, M = map(int, input().split())
    
    roads = []
    for _ in range(M):
        a, b, c = map(int, input().split())
        roads.append((a, b, c))
    
    result = find_maximum_path(N, M, roads)
    
    print(result)

main()