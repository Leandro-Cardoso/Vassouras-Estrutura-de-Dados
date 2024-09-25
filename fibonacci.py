def fib(n, sequencia = []):
    if (len(sequencia) < 2):
        sequencia.append(1)
        if (len(sequencia) == n):
            return sequencia
        else:
            return fib(n, sequencia)
    else:
        novo = sequencia[-1] + sequencia[-2]
        if (novo >= n):
            return sequencia
        else:
            sequencia.append(novo)
            return fib(n, sequencia)
        
def input_n():
    while True:
        try:
            n = int(input('\n Digite o N: '))
            if n < 1:
                print('\n N precisa ser maior que "zero" !!!')
            else:
                return n
        except:
            print('\n N precisa ser um número inteiro !!!')

def main():
    n = input_n()
    sequencia = fib(n)

    print(f'\n Sequencia: {sequencia}\n')

if __name__ == '__main__':
    main()
