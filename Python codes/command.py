import sys

def main():

    print("Demonstraation of comand line arguments")
    print("name of application: ",sys.argv[0])
    print("Datatype of argv is: ",type(sys.argv))
    print("number of command line arguments are : ",len(sys.argv))
    
if __name__ == "__main__":
    main()