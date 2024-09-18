# 痾 Python 3.9 開始才有 lcm 函數，所以讓我稍微多個幾行
def lcm(*args):
    k = 1
    for a in args:
        k = int(k*a / __import__("math").gcd(k, a))
    return k

# Python 3.9 後可用的一行解：
# __import__("sys").stdout.write(((lambda _, intervals, date: __import__("datetime").datetime.strftime(__import__("datetime").datetime.strptime(date, "%Y/%m/%d")+__import__("datetime").timedelta(days=__import__("math").lcm(*map(int, intervals.split()))), "%Y/%m/%d"))(*[s.replace("\n", "") for s in __import__("sys").stdin.readlines()])))

__import__("sys").stdout.write(((lambda _, intervals, date: __import__("datetime").datetime.strftime(__import__("datetime").datetime.strptime(date, "%Y/%m/%d")+__import__("datetime").timedelta(days=lcm(*map(int, intervals.split()))), "%Y/%m/%d"))(*[s.replace("\n", "") for s in __import__("sys").stdin.readlines()])))