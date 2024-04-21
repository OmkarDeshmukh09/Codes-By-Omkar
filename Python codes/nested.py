
def Calculations(No1,No2):
    def Addition(X,Y):
        return X+Y
    def Substraction(X,Y):
        return X-Y
    Ans1 = Addition(No1+No2)
    Ans2 = Substraction(No1-No2)
    return Ans1,Ans2    

print("Enter First Number: ")
A=int(input())

print("Enter Second Number: ")
B=int(input())

Result1, Result2 = Calculations(X,Y)

print("Addition is: ",Result1)
print("Substraction is: ",Result2)
