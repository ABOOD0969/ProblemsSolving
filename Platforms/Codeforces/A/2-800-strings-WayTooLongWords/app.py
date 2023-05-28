#============================================================================
# Path         : 2    -   Codeforce   -   800 - Way Too Long Words  -  strings   -   71/A
# TIME         : Sunday  28 / May / 2023   
# problem link : https://codeforces.com/problemset/problem/71/A
# Name         : Way Too Long Words
# Author       : Abdullah Al-Habal
#============================================================================

n = int(input())
i =1 
while (i <= n) :
    n = n - 1
     
    word = str(input())
    
    if len(word)  > 10:
        # print(f"{word[0]}{str(len(word)-2)}{word[1]}")
        print ( word[0]+str((len(word)-2))+word[len(word)-1] ) 
    else:
        print(word)

# localization
# internationalization
# pneumonoultramicroscopicsilicovolcanoconiosis

n = int(input())
i = 1
while(i <= n):
    word = str(input()) 
    if len(word) > 10:
        print(f"{word[0]}{len(word) - 2}{word[-1]}") 
    else:
        print(word)
    i+=1

