
def CheckEven(No):
    if (No % 2 == 0):
        print("It is Even number")
    else:
        print("It is odd number")

def main():
    print("Enter number : ")
    A = int(input())

    CheckEven(A)

#starter

main()