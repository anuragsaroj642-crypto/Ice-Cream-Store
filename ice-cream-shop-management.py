print("Welcome to our Ice Cream Store!")

menu = {
    1: ["Vanilla", 100],
    2: ["Chocolate", 160],
    3: ["Strawberry",200],
    4: ["Mango", 230],
    5: ["Butterscotch",250]
}

print("\nHere is our menu:")

print("1. Vanilla - Rs. 100")
print("2. Chocolate - Rs. 160")
print("3. Strawberry - Rs. 200")
print("4. Mango - Rs. 230")
print("5. Butterscotch -Rs. 250")
total_bill = 0

choice = int(input("\nOrder what do you want to order: "))

if choice in menu:

    quantity = int(input("Enter quantity: "))

    total_bill = menu[choice][1] * quantity

    print("Your bill is:", total_bill)

    more = input("Do you want to order more? (yes/no): ")

    if more == 'yes' or more == 'Yes':

        choice2 = int(input("Enter second ice cream choice: "))

        if choice2 in menu:

            quantity2 = int(input("Enter quantity: "))

            total_bill = total_bill + (menu[choice2][1] * quantity2)

        else:
            print("Invalid choice!")

    print("\n============================")
    print("Your Total Bill is:", total_bill)
    print("Thank you for ordering!")
    print("==============================")

else:
    print("Invalid choice!")
  
