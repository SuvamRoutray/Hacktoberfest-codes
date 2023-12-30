#to print a sum of even and odd numbers between a given set of numbers with user interaction
sum_even = 0
sum_odd = 0
num1 = int(input("Enter a nuber: "))
num2 = int(input("Enter second number: "))

for i in range(num1,num2):
    if i%2 == 0:
        sum_even += i
    else:
        sum_odd += i

print("The sum of even numbers is " , sum_even)
print("The sum of odd numbers is " , sum_odd)
