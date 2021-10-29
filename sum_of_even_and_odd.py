# To print the sum of even numbers and odd numbers in the range of 20 to 30

sum_even = 0
sum_odd = 0

for i in range(20,31):
    if i%2 == 0:
        sum_even += i
    else:
        sum_odd += i

print("The sum of even numbers is " , sum_even)
print("The sum of odd numbers is " , sum_odd)
        
