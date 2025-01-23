try:

    n = int(input("Input: "))
    # if n.isnumeric():
    #     print("Integer.")
    # else:
    #     print("Not Integer.")

    print("Integer")
except ValueError:
    print("Not integer.")
else:
    print("Not integer.")
