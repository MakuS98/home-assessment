'''
This is long comment in Python, btw :)
'''
import arracrobatics as arra

    
    
'''
    Ex. 1:
        1. Create array (list) and append to it elements from -9 to 9; 
        2. Replace all elements to string "Python";
        3. Write a piece of code that ask user to give value and assign each element of array by this given value;

    Note: fill free to use built-in methods of lists or arrays: 
    https://docs.python.org/3/tutorial/datastructures.html#more-on-lists
'''
# put your code here

arr = []
for i in range (-9, 9, 1):
    arr.append(i)
print(arr)
arr.clear()
for i in range (-9, 9, 1):
    arr.append("Python")
print(arr)
a = int(input("индекс елеманта "))
b = int(input("значение "))
del arr[a]
arr.insert(a, b)
print(arr)





'''
    Ex. 2:
        1. Create getAboveZero() function with integer list as an argument. It must return the first element that above 0. If there is no such elements it must return -1;
        2. Create getAboveNum()  function with integer list as an argument and integer number. It must return the first element that above integer number (that was passed as argument). If there is no such elements it must return -1.
        3. Create delAboveZero() function with integer list as an argument. It must DELETE and return the first element that above zero. If there is no such elements it must return None.

    Note: fill free to use built-in methods of lists or arrays: 
    https://docs.python.org/3/tutorial/datastructures.html#more-on-lists
'''
# put your code here
a = int(input("a "))
b = int(input("b "))
c = int(input("c "))
arra.getAboveZero(a, b, c)
arr.clear()
n = int(input("Укажите размер массиву "))
d = int(input("Целое число "))
for i in range(0, n, 1):
    a = int(input("число "))
    arr.append(a)
arra.getAboveNum(arr, d)





'''
    Ex. 3:
        1. Locate functions that you have implemented above in separate module called "arracrobatics.py". Then include it and call this function;
'''
# put your code here




'''
    Ex. 4*:
        Write a program that will read the entered four-digit number. 
        After that, each digit of this number should go into a new series.
'''
# put your code here