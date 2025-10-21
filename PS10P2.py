#start finding the functions of wall square footage in the room
def wall_square_footage(length, width, height):
  return 2 * (length * height + width * height)
#end finding the functions of wall square footage in the room
#start finding the functions of gallons of paint in the room
def gallons_of_paint(square_footage):
  return square_footage / 50

#Compute the number of gallons needed to paint the room
def compute_paint_gallons(length, width, height):
  square_footage = wall_square_footage(length, width, height)
  return gallons_of_paint(square_footage)

#Using the loop to respond to the user input/compute the number of gallons needed to paint the room
response = input("Do you want to compute the number of gallons needed to paint the room (yes/no)?")
while response.lower() == "yes":
  length = float(input("Enter the length of the room in feet: "))
  width = float(input("Enter the width of the room in feet: "))
  height = float(input("Enter the height of the room in feet: "))
  gallons = compute_paint_gallons(length, width, height)
  print("The number of gallons needed to paint the room is:", gallons)
  response = input("Do you want to compute the number of gallons needed to paint the room (yes/no)?")
#end using the loop to respond to the user input/compute the number of gallons needed to paint the room
print("Thank you for using the paint calculator!")
