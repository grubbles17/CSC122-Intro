def forecast_sales(month, sales):

    month_forecast = {
        'Jan': 0.10,
        'Feb': 0.10,
        'Mar': 0.10,
        'Apr': 0.15,
        'May': 0.15,
        'Jun': 0.15,
        'Jul': 0.20,
        'Aug': 0.20,
        'Sep': 0.20,
        'Oct': 0.25,
        'Nov': 0.25,
        'Dec': 0.25
    }

    percent = month_forecast.get(month)

    if percent is not None:

        next_month_sales = sales * (1 + percent)
        return next_month_sales
    else:
        print("Invalid month entered.")
        return None


def main():
    while True:

        user_input = input("Do you want to continue? (Yes/No): ")

        if user_input == 'yes':
            last_name = input("Enter the last name: ")
            month = input("Enter the month ): ")
            sales_input = input("Enter the sales amount: ")

            try:
                sales = float(sales_input)
            except ValueError:
                print("Please enter a valid number for sales.")
                continue

            next_month_sales = forecast_sales(month, sales)

            if next_month_sales is not None:
                print(
                    "Next month's sales forecast: $ ", next_month_sales
                )
        elif user_input == 'no':
            print("Ending the program.")
            break
        else:
            print("Invalid input. Please enter 'Yes' or 'No'.")


if __name__ == "__main__":
    main()
