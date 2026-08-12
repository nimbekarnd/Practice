from solution import Solution, TreeNode


def build_tree():
    #      3
    #     / \
    #    9  20
    #       / \
    #      15  7
    return TreeNode(3, TreeNode(9), TreeNode(20, TreeNode(15), TreeNode(7)))


def test_example_1():
    sol = Solution()
    assert sol.solve(build_tree()) == [[3], [9, 20], [15, 7]]


def test_empty_tree():
    sol = Solution()
    assert sol.solve(None) == []


def test_single_node():
    sol = Solution()
    assert sol.solve(TreeNode(1)) == [[1]]
