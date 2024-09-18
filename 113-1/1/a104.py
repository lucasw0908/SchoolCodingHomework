a = 1
b = 3
ans = 1
for i in range(int(input())-1):
    a += b
    b *= 4
    ans += a
print(ans)