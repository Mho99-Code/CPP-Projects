def get_price(drink):
    if drink == "coffee":
        return 3
    elif drink == "tea":
        return 2
    elif drink == "juice":
        return 4
    else:
        return 0

total = 0
orders = int(input("How many drinks do you want to order? "))

for i in range(orders):
    print("\nMenu: coffee ($3), tea ($2), juice ($4)")
    order = input("Choose a drink: ").lower().strip()
    price = get_price(order)

    if price == 0:
        print("Sorry, we don't have that drink.")
    else:
        print(f"Added to your order: ${price}")
        total += price

print(f"\nTotal bill: ${total}")
