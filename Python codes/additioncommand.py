import sys
def Addition(No1,No2):
    Ans = No1 + No2
    return Ans

def main():
    print("Welcome to the Application : "+sys.argv[0])

    if(len(sys.argv) !=3):
        print("Invalid number of Arguments")
        print("Please provide 2 numeric to perform addition")
        return
    
    Result = Addition(int(sys.argv[1]), int(sys.argv[2]))

    print("Addition is : ",Result)

if __name__ == "__main__":
    main()