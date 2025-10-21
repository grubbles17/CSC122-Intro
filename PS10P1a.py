def nextmonthsales(month,sales):
  if month == "January, February, March":
    value = 0.10
  elif month == "April, May, June":
    value = 0.15
  elif month == "July, August, September":
    value = 0.20
  else:
    value = 0.25
  nextmonthsales = sales * (1 + value)
  return nextmonthsales
# process and output
response = input("Do you want to calculate the next month's sales? (YES or NO)")
while response == "YES":
  lname = input("Enter last name: ")
  month = input("Enter the month: ")
  sales = float(input("Enter the sales: "))
  nextmonthsales = nextmonthsales(month, sales)
  print("The next month's sales are $", nextmonthsales)
  response = input("Do you want to calculate the next month's sales? (YES or NO)")

print("Good bye!")
