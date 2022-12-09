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
    
    """