from getchar import Getchar
import Serial

sp = serial.Serial('COM6', 9600, timeout=1)

kb = Getchar()
key = ' '
while key!='Q':
    key = kb.getch()
    if key != '':
       sp.write('. ' .encode())    
    elif key != '':
       sp.write(', ' .encode())  
    else:
        pass


   

