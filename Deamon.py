import random, time, threading
g = str()
stop = True
stop1 = True
stop2 = True
def randomKey():

    global stop
    while stop == True:
    
     arr = [0, 0, 0, 0, 0, 0]
     global g
     for i in range(0, 6, 1):
        a =random.randint(33, 122)
        b = chr(a)
        arr[i] = b
     h = str(arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5])
     g = h
     
     print(g)
     time.sleep(10)
     
def randomKey123():
     global stop1
     while stop1 == True:
    
       arr = [0, 0, 0, 0, 0, 0]
       global g
       for i in range(0, 6, 1):
          c123 = ["1","2","3","4","5","6","7","8","9","0"] 
          a =random.randint(0, 9)
          b = c123[a]
          arr[i] = b
       h = str(arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5])
       g = h
       
       print(g)
       time.sleep(10)
    



def randomKeyABC():
     global stop2
     while stop2 == True:
    
      arr = [0, 0, 0, 0, 0, 0,]
      global g
      for i in range(0, 6, 1):
         abc = ["q", "w" , "e" , "r" , "t" , "y" , "u" , "i" , "o" , "p" , "a" ,"s" ,"d" , "f" , "g" , "h" , "j" , "k" , "l" , "z" , "x" , "c" , "v" , "b" , "n" , "m" ,]
         a =random.randint(0, 25)
         b = abc[a]
         arr[i] = b
      h = str(arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5])
      g = h
      
      print(g)
      time.sleep(10)

    
print("Введите ключ")
t = threading.Thread(target=randomKey, name="key")
t.start()
while True:
 
 a = str(input(""))
 
 if  a == g:
     stop = False
     print("Вы вошли в аккаунт!")
     break
         
 else:
     print("Неправильно!")
while True: 
         
 print("Выберите тип ключей. 1 - все, 2 - цифры, 3 - буквы. Выйти - 'напишите пароль' ")
 a = str(input("->"))
 if a == "1":
     stop = True
     q = threading.Thread(target=randomKey, name="key")
     q.start()
     while True:
  
       a = str(input(""))
       
       if  a == g:
           stop = False
           print("Теперь попробуй другой режим")
           
           break
               
       else:
           print("Неправильно!")
          
 elif a == "2":
     stop1 = True
     w = threading.Thread(target=randomKey123, name="key")
     w.start()
     while True:
       
       a = str(input(""))
       
       if  a == g:
           stop1 = False
           print("Теперь попробуй другой режим")
           
           break
               
       else:
           print("Неправильно!")
     
 elif a == "3":
     stop2 = True
     e = threading.Thread(target=randomKeyABC, name="key")
     e.start()
     while True:
  
      a = str(input(""))
      
      if  a == g:
          stop2 = False
          print("Теперь попробуй другой режим")
          break
              
      else:
          print("Неправильно!")
 elif a == "напишите пароль":
     print("пока-пока)")
     break
 else:
     print("Не ломай программу!(っ-̶●̃益●̶̃)っ ")
         
     