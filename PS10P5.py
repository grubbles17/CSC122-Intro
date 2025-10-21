def compute_assessed_value(county, market_value):
    
    assessed_value_percentages = {
        'Cook': 0.90,
        'DuPage': 0.80,
        'McHenry': 0.75,
        'Kane': 0.60
    }

    
    percent = assessed_value_percentages.get(county, 0.70)  

    
    assessed_value = market_value * percent
    return assessed_value

def main():
    total_market_value = 0
    total_assessed_value = 0

    while True:
        
        user_input = input("Do you want to enter a home value? (Yes/No): ")

        if user_input == 'yes':
            county = input("Enter the county: ")
            market_value_input = input("Enter the market value of the home: ")

            try:
                market_value = float(market_value_input)
            except ValueError:
                print("Please enter a valid number for market value.")
                continue

            
            assessed_value = compute_assessed_value(county, market_value)

            
            total_market_value = total_market_value + market_value
            total_assessed_value = total_assessed_value + assessed_value

            
            print("Assessed value for home: $", assessed_value)
        elif user_input == 'no':
            print("Ending the program.")
            break
        else:
            print("Invalid input. Please enter 'Yes' or 'No'.")

    
    print("Total market value of all homes: $", total_market_value)
    print("Total assessed value of all homes: $", total_assessed_value)

if __name__ == "__main__":
    main()
