from getchar import Getchar
import serial

sp = serial.Serial('COM6', 9600, timeout=1)

kb = Getchar() #kb는 키보드객체
key = ' '
while key!='Q':
    key = kb.getch()
    if key != '':
       sp.write('. ' .encode())    
    elif key != '':
       sp.write(', ' .encode())  
    else:
        pass


   

