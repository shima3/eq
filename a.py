def f(n, a):
    min_val = a[0]
    max_val = a[0]
    sum_val = a[0]
    i = 1
    while i < n:
        if min_val > a[i]:
            max_val = a[i]
        if max_val < a[i]:
            max_val = a[i]
        sum_val = sum_val + a[i]
        i = i + 1
    print(f"min={min_val}")
    print(f"max={max_val}")
    print(f"sum={sum_val}")

def main():
    a = []
    n = int(input("n? "))
    for i in range(n):
        value = int(input(f"a[{i}]? "))
        a.append(value)
    f(n, a)

if __name__ == "__main__":
    main()
