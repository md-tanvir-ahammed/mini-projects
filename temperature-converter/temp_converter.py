def temperature_converter():
    print("===== Temperature Converter =====")
    print("1. Celsius to Fahrenheit")
    print("2. Fahrenheit to Celsius")
    print("3. Celsius to Kelvin")

    choice = input("Enter choice (1/2/3): ")

    if choice == '1':
        c = float(input("Enter Celsius: "))
        print(f"Fahrenheit: {(c * 9/5) + 32:.2f}")
    elif choice == '2':
        f = float(input("Enter Fahrenheit: "))
        print(f"Celsius: {(f - 32) * 5/9:.2f}")
    elif choice == '3':
        c = float(input("Enter Celsius: "))
        print(f"Kelvin: {c + 273.15:.2f}")
    else:
        print("Invalid choice!")

temperature_converter()
