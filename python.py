import turtle
  
t = turtle.Turtle()
ts= t.getscreen()
s = 100
 
def move():
    t.forward(s)
def left1():
    t.left(90)
def right1():
    t.right(90)

ts.onkey(move,"space")

ts.onkey(left1,"Control_L")
ts.onkey(right1,"Control_R")
ts.listen()
ts.mainloop()