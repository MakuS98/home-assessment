import multiprocessing, time

def DeamonPr():
    while True:
        print("hello")
        time.sleep(2)
if __name__ == "__main__":
    DeamonPr1 = multiprocessing.Process(target=DeamonPr)
    DeamonPr1.deamon = True
    DeamonPr1.start()
    
    