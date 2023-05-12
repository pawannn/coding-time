import turtle

tur = turtle.Turtle()

def curver(value, direction):
    if(direction == "left"):
        for i in range(value):
            tur.forward(1)
            tur.left(1)
    if(direction == "right"):
        for i in range(value):
            tur.forward(1)
            tur.right(1)

tur.speed(1)

tur.color('blue')

for i in range(65):
    turtle.forward(200)
    turtle.left(170)

turtle.done()