import functools as f


def deg(sign, v, E):
    return (
        len([e for e in E if e[1] == v])
        if sign == 1  # in
        else len([e for e in E if e[0] == v])
        if sign == -1  # out
        else 0
    )


def sink(V, E):
    return [v for v in V if deg(-1, v, E) == 0][0]


def subgraph(V, E, U):
    return ([v for v in V if v in U], [(u, v) for u, v in E if u in U and v in U])


def minus_graph(V, E, U_):
    return (
        [v for v in V if v not in U_],
        [(u, v) for u, v in E if u not in U_ and v not in U_],
    )


def topOrd(V, E):
    if len(V) == 1:
        return [0]
    else:
        s = sink(V, E)
        i = V.index(s)
        pi = topOrd(*minus_graph(V, E, [s]))
        return pi[:i] + [len(V) - 1] + pi[i:]


def topSort(V, E, pi=None):
    if pi == None:
        pi = topOrd(V, E)
    return list(range(len(V))), [(pi[V.index(x)], pi[V.index(y)]) for x, y in E]


G = ([0, 1, 2, 3, 4], [(0, 1), (0, 2), (0, 3), (1, 4), (2, 1), (3, 2)])
print(topOrd(*G))
print(*topSort(*G))


def longestPath(V, E, pi=None):
    V_, E_ = topSort(V, E, pi)
    return f.reduce(
        lambda acc, j: acc
        + [
            1 + max(acc[i] for i, k in E_ if k == j and i < j)
            if not deg(1, j, E_) == 0
            else 0
        ],
        V_,
        [],
    )


def delay(V, E):
    pi = topOrd(V, E)
    d = longestPath(V, E, pi)
    return {v: d[pi[V.index(v)]] for v in V}


print(longestPath(*G))
print(delay(*G))

print("-" * 40)

R = ([0, 1, 2, 3, 4, 5], [(1, 0), (2, 0), (3, 1), (4, 1), (5, 2)])

print(topOrd(*R))
print(*topSort(*R))
print(longestPath(*R))
print(delay(*R))


def decompose(V, E):
    r = sink(V, E)
    return [minus_graph(V, E, [r_i]) for r_i, v in E if v == r]

