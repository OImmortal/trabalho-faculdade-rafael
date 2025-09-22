x = 10  # variável global

def f():
    print("x em f():", x)

def g():
    x = 20  # variável local em g()
    f()     # chamada de f()

g()
