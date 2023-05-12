import turtle

# Set up the screen and turtle
screen = turtle.Screen()
t = turtle.Turtle()

# Draw Tom's body
t.pensize(40)
t.penup()
t.goto(0, -150)
t.pendown()
t.circle(150)

# Draw Tom's head
t.penup()
t.goto(0, 50)
t.pendown()
t.circle(100)

# Draw Tom's ears
t.penup()
t.goto(50, 175)
t.pendown()
t.left(90)
t.circle(-50, 180)
t.right(180)
t.circle(-50, 180)

# Draw Tom's eyes
t.penup()
t.goto(-40, 125)
t.pendown()
t.fillcolor("white")
t.begin_fill()
t.circle(25)
t.end_fill()

t.penup()
t.goto(40, 125)
t.pendown()
t.fillcolor("white")
t.begin_fill()
t.circle(25)
t.end_fill()

t.penup()
t.goto(-35, 125)
t.pendown()
t.fillcolor("black")
t.begin_fill()
t.circle(10)
t.end_fill()

t.penup()
t.goto(45, 125)
t.pendown()
t.fillcolor("black")
t.begin_fill()
t.circle(10)
t.end_fill()

# Draw Tom's nose and mouth
t.penup()
t.goto(0, 75)
t.pendown()
t.fillcolor("black")
t.begin_fill()
t.circle(15)
t.end_fill()

t.penup()
t.goto(-50, 50)
t.pendown()
t.right(45)
t.forward(60)

t.penup()
t.goto(50, 50)
t.pendown()
t.left(90)
t.forward(60)

# Hide the turtle and exit
t.hideturtle()
turtle.done()
