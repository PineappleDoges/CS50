# people=[
#     {"name": "Yuliia", "number": "+111-111-1111"},
#     {"name": "David", "number": "+111-111-1111"},
#     {"name": "John", "number": "+111-111-1111"}
# ]

# name = input("Name: ")
# for person in people:
#     if person["name"] == name:
#         number = person["number"]
#         print(f"Found{number}")
#         break
# else:
#     print("Not found")

people=[
    {"Yuliia": "+111-111-1111"},
    {"David": "+111-111-1111"},
    {"John": "+111-111-1111"}
]

name = input("Name: ")

if name in people:
    print (f"Number: {people[name]}")
else:
    print("Not Found")
