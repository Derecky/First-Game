import bge

cont = bge.logic.getCurrentController()
own = cont.owner
move = cont.actuators["move"]
pressup = cont.sensors["up"]
pressdown = cont.sensors["down"]
speed = move.dLoc[1]

if pressup.positive:
    speed = speed + 0.05
    move.dLoc = [0.0, speed, 0.0]
    cont.activate(move)

elif pressdown.positive:
    speed = 0
    cont.deactivate(move)
    move.dLoc = [0.0, 0.0, 0.0]