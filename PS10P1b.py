def calculate_forecast(month, sales):
    month = month.lower()
    if month in ['january', 'february', 'march']:
        forecast_percent = 0.10
    elif month in ['april', 'may', 'june']:
        forecast_percent = 0.15
    elif month in ['july', 'august', 'september']:
        forecast_percent = 0.20
    else:  # october, november, december
        forecast_percent = 0.25
    
    next_month_sales = sales * (1 + forecast_percent)
    return next_month_sales

def main():
    while True:
        do_calculation = input("Would you like to calculate a forecast? (Yes or No): ").lower()
        if do_calculation != 'yes':
            break
            
        last_name = input("Enter last name: ")
        month = input("Enter month (january-December): ")
        sales = float(input("Enter sales amount: $"))
        
        forecast = calculate_forecast(month, sales)
        print(f"Next month's forecast for {last_name}: ${forecast:.2f}")

if __name__ == "__main__":
    main()
