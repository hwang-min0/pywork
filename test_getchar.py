from getchar import Getchar   # from 함수가 import 함수의 멤버보다 크다. 
#import Getchar를 사용안할때 from getchar만 명시하고 밑에 
 #변수kb = Getchar()에 kb = getchar.Getchar() 로 사용할 것

def main(args=None):
    kb = Getchar()
    key = ''
    
    while key!='Q':
    
        key = kb.getch()
        if key != '':
            print(key)
        else:
            pass
        

if __name__ == '__main__':
    main()

