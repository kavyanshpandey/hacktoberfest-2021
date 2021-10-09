''' Read input from STDIN. Print your output to STDOUT '''
    #Use input() to read input from STDIN and use print to write your output to STDOUT

def isPrime(s):
    l = len(s)
    n = 0
    for i in range(l):
        n += ord(s[i])
    if n<= 1:
        return False
    if n <= 3:
        return True
    if n%2 == 0 or n%3 == 0:
        return False
    while(i * i <= n):
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

def main():
    T = int(input())
    if isPrime(T):
        print("Prime string")
    else:
        print("Casual string")
main()

