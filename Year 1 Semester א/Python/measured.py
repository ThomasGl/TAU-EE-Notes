import timeit


def measure_func(f, args):
    def f_():
        return f(*args)

    print(*args, "=", f(*args), ", time: ", str(timeit.timeit(f_, number=10)))


def fib(n):
    return n if n in [0, 1] else fib(n - 1) + fib(n - 2)


def fib_mem(n, mem={}):
    if n in [0, 1]:
        return n
    if n not in mem:
        mem[n] = fib_mem(n - 1, mem) + fib_mem(n - 2, mem)
    return mem[n]


def fib_acc(n, prev=1, acc=0):
    return acc if n <= 0 else fib_acc(n - 1, acc, prev + acc)


def fib_lst_acc(n, mem=[1, 1]):
    return mem[-1] if n <= 0 else fib_lst_acc(n - 1, [mem[-1], mem[-1] + mem[-2]])


# fib_mem(5)

# measure_func(fib, [30])
# measure_func(fib_mem, [30])
# measure_func(fib_acc, [30])
# measure_func(fib_lst_acc, [30])

# for i in range(40):
#     print(fib(i))

"""
fib(4)
print(4,{})
mem[4]=(
    print(3,{})
    mem[3]=(
        print(2,{})
        mem[2]= (
            print(1,{})
            return 1
        )+(
            print(0,{})
            return 0
        )
        ### mem
        ### {2:1}
        return mem[2]
    )+(
        print(1,{2:1})
        return 1
    )
    ### mem
    ### {2:1,3:2}
    return mem[3]
)+(
    print(2,{2:1,3:2})
    return mem[2]
)
"""

fib_mem(4)


def sub_sum(nums, target):
    return (
        True
        if target == 0
        else False
        if (len(nums) == 0 or target < 0)
        else sub_sum(nums[1:], target - nums[0]) or sub_sum(nums[1:], target)
    )


def sub_sum_mem(nums, target, mem={}):
    # print(nums, mem)
    if target == 0:
        return True
    if len(nums) == 0 or target < 0:
        return False
    if (len(nums), target) not in mem:
        mem[(len(nums), target)] = sub_sum_mem(
            nums[1:], target - nums[0], mem
        ) or sub_sum_mem(nums[1:], target, mem)
        # print(len(nums), target)
    return mem[(len(nums), target)]


# measure_func(sub_sum, [list(range(40)), 20])
# measure_func(sub_sum_mem, [list(range(40)), 20])

# for i in range(40):
#     print(sub_sum(list(range(i)), (i // 2) ** 2))


def maximum(lst):
    return (
        -1
        if len(lst) == 0
        else lst[0]
        if len(lst) == 1
        else max(lst[0], maximum(lst[1:]))
    )


def maximum_acc(lst, acc=None):
    return (
        acc
        if len(lst) == 0
        else maximum_acc(lst[1:], lst[0] if acc == None else max(acc, lst[0]))
    )


# measure_func(maximum, [[1, 2, 3, 5, 1, 4]])
# measure_func(maximum_acc, [[1, 2, 3, 5, 1, 4]])


def maxim(lst):
    maximus = lst[0]
    for el in lst:
        maximus = el if el > maximus else maximus
    return maximus


maxi = lambda x, y: x if x > y else y


def maximum_(lst):
    return lst[0] if not lst[1:] else maxi(lst[0], maximum_(lst[1:]))


def maximum__(lst):
    return (
        lst[0]
        if not lst[1:]
        else maximum__(lst[1:])
        if lst[0] < lst[1]
        else maximum__([lst[0]] + lst[2:])
    )


# measure_func(maximum_, [[1, 2, 3]])


def max_index(lst, key=lambda x: x):
    maxi, index = (0, [])
    for i, el in enumerate(lst):
        maxi, index = (
            (maxi, index + [i])
            if key(el) == maxi
            else (key(el), [i])
            if key(el) > maxi
            else (maxi, index)
        )
    return index


def max_index_(lst, key=lambda x: x):
    return [i for i, el in enumerate(lst) if el == max(lst, key=key)]


def max_index__(lst, key=lambda x: x):
    maxi = max(lst, key=key)
    return [i for i, el in enumerate(lst) if el == maxi]


# measure_func(max_index, [[1, 2, 5, 4, 5, 2, 1, 2, 4, 5, 2, 1, 5]])
# measure_func(max_index_, [[1, 2, 5, 4, 5, 2, 1, 2, 4, 5, 2, 1, 5]])
# measure_func(max_index__, [[1, 2, 5, 4, 5, 2, 1, 2, 4, 5, 2, 1, 5]])

hist_longest = lambda string: {
    char: max(filter(lambda k: char * k in string, range(len(string))))
    for char in string
}

hist_longest__ = lambda string: {
    char: max(range(len(string)), key=lambda k: k * (char * k in string))
    for char in string
}


def hist_longest_(string):
    h = {}
    for char in string:
        for k in range(len(string)):
            h[char] = k if char * k in string and k > h.get(char, 0) else h.get(char, 0)
    return h


measure_func(hist_longest, ["abaaacccbbddadaa"])
measure_func(hist_longest_, ["abaaacccbbddadaa"])
measure_func(hist_longest__, ["abaaacccbbddadaa"])
