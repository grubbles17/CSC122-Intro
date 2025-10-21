def compute_out_the_door_price(msrp, make, model, ev_code):
    """Calculate the out-the-door price based on the vehicle details."""
   
    percent_off = 0.05  

    if make == "Honda" and model == "Accord":
        percent_off = 0.10
    elif make == "Toyota" and model == "Rav4":
        percent_off = 0.15
    elif ev_code == 'Y':
        percent_off = 0.30

   
    discount_amount = msrp * percent_off
    new_msrp = msrp - discount_amount

    
    sales_tax = new_msrp * 0.07
    total_price = new_msrp + sales_tax

    return total_price, msrp, new_msrp

def main():
    total_msrp = 0
    total_sales_price = 0

    while True:
        
        user_input = input("Do you want to enter a vehicle? (Yes/No): ").strip().lower()

        if user_input == 'yes':
            make = input("Enter the make of the vehicle: ")
            model = input("Enter the model of the vehicle: ")
            ev_code = input("Is it an electric vehicle? (Y/N): ").strip().upper()
            msrp_input = input("Enter the MSRP (sticker price) of the vehicle: ")

            try:
                msrp = float(msrp_input)
            except ValueError:
                print("Please enter a valid number for MSRP.")
                continue

            
            out_the_door_price, vehicle_msrp, new_msrp = compute_out_the_door_price(msrp, make, model, ev_code)

            
            total_msrp += vehicle_msrp
            total_sales_price += new_msrp + (new_msrp * 0.07)  

            
            print("Out-the-door price: $ ", out_the_door_price)
        elif user_input == 'no':
            print("Exiting the program.")
            break
        else:
            print("Invalid input. Please enter 'Yes' or 'No'.")

    
    print("\nTotal MSRP of all vehicles:$ ",  total_msrp)
    print("Total sales price of all vehicles: $ ", total_sales_price)

if __name__ == "__main__":
    main()

