import sys
from math import sqrt, log, log2, ceil, log10, gcd, floor, pow, sin, cos, tan, pi, inf, factorial
from copy import copy, deepcopy
from sys import exit, stdin, stdout
from collections import Counter, defaultdict, deque
from itertools import permutations
import heapq
from bisect import bisect_left 
from bisect import bisect_right
# sys.setrecursionlimit(100000000)
mod = 1000000007
iinp = lambda: int(sys.stdin.readline())
inp = lambda: sys.stdin.readline().strip()
strl = lambda: list(inp().strip().split(" "))
intl = lambda: list(map(int, inp().split(" ")))
mint = lambda: map(int, inp().split())
flol = lambda: list(map(float, inp().split(" ")))
flush = lambda: stdout.flush()
#======================================================================================================================
# def permute(nums):
#     def fun(arr, nums, cur, v):
#         if len(cur) == len(nums):
#             arr.append(cur.copy())
#         i = 0
#         while i < len(nums):
#             if v[i]:
#                 i += 1
#                 continue
#             else:
#                 cur.append(nums[i])
#                 v[i] = 1
#                 fun(arr, nums, cur, v)
#                 cur.pop()
#                 v[i] = 0
#                 i += 1
#             # while i<len(nums) and nums[i]==nums[i-1]:i+=1    # Uncomment for unique permutations
#         return arr
 
#     res = []
#     nums.sort()
#     v = [0] * len(nums)
#     return fun(res, nums, [], v)
 
 
# def subsets(res, index, arr, cur):
#     res.append(cur.copy())
#     for i in range(index, len(arr)):
#         cur.append(arr[i])
#         subsets(res, i + 1, arr, cur)
#         cur.pop()
#     return res
 
 
# def sieve(N):
#     root = int(sqrt(N))
#     primes = [1] * (N + 1)
#     primes[0], primes[1] = 0, 0
#     for i in range(2, root + 1):
#         if primes[i]:
#             for j in range(i * i, N + 1, i):
#                 primes[j] = 0
#     return primes

#========================================================Functions====================================================

def solve():

    s=inp()
    n=len(s)

    

    
    l=[0]
    c=0
    for i in s[:-1]:
        if i=='E':
            l.append(c)
        else:
            c+=1
            l.append(c)

    if s[-1]=='E':

        for i in range(n-1,-1,-1):
            if s[i]=='N':
                break
            else:
                l[i]=0
    
    # print(l)

    ss=""
    for i in range(n-1):
        if l[i]==l[i+1]:
            ss+="E"
        else:
            ss+="N"

    if l[0]==l[-1]:
        ss+="E"
    else:
        ss+="N"

    if(ss==s):
        print("YES")
    else:
        print("NO")
    


 
 
 
 
 
#========================================================Main Code=====================================================

t=iinp()
# t=1
for _ in range(t):
        solve()