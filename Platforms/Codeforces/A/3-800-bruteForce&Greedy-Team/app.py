#============================================================================
# Path         : 3    -   Codeforce   -   800 -   WaterMelon -   Greedy & BruteFroce  -   231/A
# TIME         : Sunday  4 / June / 2023   
# problem link : https://codeforces.com/problemset/problem/231/A
# Name         : Team
# Author       : Abdullah Al-Habal
#============================================================================

problems = 0 
n = int(input())

for i  in range(n):
    friends = input().split()
    if friends.count("1") >= 2 :
        problems +=1
     
print(problems)



