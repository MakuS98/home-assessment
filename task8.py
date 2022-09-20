# Task 1
def sortAsIWant(arr, b):
    bool(b)
    if b == True:
           
        arr.sort(key = None, reverse = True)
        print(arr)
        
    else:
        arr.sort(key = None, reverse = False)
        print(arr)
        
        
        
'''
1.1 Create a list using loop (or generator) of integer values: 1, 53, -35, 94, 2, 0, -6, 24, -4 

1.2 Write a code to get the smallest number from this list

1.3 Create a function called sortAsIWant() that pass as argument list and bool variable: if bool variable is true -- 
    list must be sorted from low to high element, otherwire -- from high to high. This function must return sorted list.
'''
arr = [1, 53, -35, 94, 2, 0, -6, 24, -4 ]
arr.sort(key = None, reverse=False)
print(arr[0])
a = int(input("0 or 1: "))
sortAsIWant(arr, a)
# Task 2
'''
Print all keys and all values of the following dictionary:
{"C++": 8000 , "Python": 9000, "Java": 7000 }

Print all keys and all values of the following dictionary:
{"C++": {"salary" : 8000} , "Python": {"salary" : 9000}, "Java" : {"salary" : 7000} }
'''
x = {"C++": 8000 , "Python": 9000, "Java": 7000 }
print(x)

c = {"C++": {"salary" : 8000} , "Python": {"salary" : 9000}, "Java" : {"salary" : 7000} }
print(c)

# Task 3
'''
Merge two following dictionaries into one USING built-in dictionarie methods:
{'Monday': 10, 'Tuesday': 20, 'Wednesday': 30}
{'Thursday': 30, 'Friday': 40, 'Saturday': 50, "Sunday" : 40}
'''
f = {'Monday': 10, 'Tuesday': 20, 'Wednesday': 30}
g = {'Thursday': 30, 'Friday': 40, 'Saturday': 50, "Sunday" : 40}
h = {}
for key, value in g.items():
    h[key] = value 
print(h)
for key, valut in f.items():
    h[key] = value
print(h)