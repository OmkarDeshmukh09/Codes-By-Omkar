# Types of function arguments

# 1 : Positional arguments
# 2 : Keyword arguments
# 3 : Default argument
# 4 : Variable number of arguments

# 1 : Positional arguments code---->

def Information (Name, Age, Salary) :
    print("Name is : ",Name)
    print("Age is : ",Age)
    print("Salary is : ",Salary)
          
Information ( "Amit" , 32 , 90000)

Information ("Pooja" , 29 , 70000)

# Information (29,"Sagar",70000) this will assign the valuse as order
# outpur will be

# Name is :  29
# Age is :  Sagar
# Salary is :  70000

Information(Age = 31, Salary = 70000, Name = "Sagar")