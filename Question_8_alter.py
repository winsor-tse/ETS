class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        r_list = []
        self.dfs(nums, [], r_list)
        return r_list
        
    def dfs(self, nums, visited, r_list):
        if len(visited) == len(nums):
            #pop the visited
            print(visited)
            r_list.append(visited[:])
            return
        for i in nums:
            if i not in visited:
                visited.append(i)
                self.dfs(nums,visited,r_list)
                visited.pop()
                #pops the last index
                print(visited)
    """
    Time : N x N!
    Space: O(n!)

    not visited
    1
    not visited
    2
    not visited
    3
    max
    [1, 2, 3]
    popped
    [1, 2]
    popped
    [1]
    outer for loop -> 3
    not visited
    3
    outer for loop when it hit 1 -> 2
    not visited
    2
    max
    [1, 3, 2]
    outer for loop when it hit 1 -> 3 -> no change
    popped
    [1, 3]
    outer for loop when it hit 3 -> null -> no change
    popped
    [1]
    popped
    []
    outer for loop when it hit 2 -> 1
    not visited
    2
    not visited
    1
    not visited
    3
    max
    [2, 1, 3]
    popped
    [2, 1]
    popped
    [2]
    not visited
    3
    not visited
    1
    max
    [2, 3, 1]
    popped
    [2, 3]
    popped
    [2]
    popped
    []
    not visited
    3
    not visited
    1
    not visited
    2
    max
    [3, 1, 2]
    popped
    [3, 1]
    popped
    [3]
    not visited
    2
    not visited
    1
    max
    [3, 2, 1]
    popped
    [3, 2]
    popped
    [3]
    popped
    []

        
        """