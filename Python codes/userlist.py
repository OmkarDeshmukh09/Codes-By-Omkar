
def main():
    print("Enter number of element you want to store in list : ")
    size = int(input())

    Arr = list()

    print("Enter the elements : ")

    for i in range(size):
        no = int(input())
        Arr.append(no)

    print("Enter elements are : ",Arr)

    if __name__ == "__main__":
        main()