from solution import Solution


def test_example_1():
    sol = Solution()
    assert sorted(sol.solve([2, 7, 11, 15], 9)) == [0, 1]


def test_example_2():
    sol = Solution()
    assert sorted(sol.solve([3, 2, 4], 6)) == [1, 2]


def test_duplicates():
    sol = Solution()
    assert sorted(sol.solve([3, 3], 6)) == [0, 1]
