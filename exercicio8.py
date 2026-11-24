n1 = int(input("Escolha um número"))
n2 = int(input("Escolha outro"))

if n1 > n2:
    for i in range (n2, n1):
        print(i)
else:
    for i in range (n1, n2):
        print(i)