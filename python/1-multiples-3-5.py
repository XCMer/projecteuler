first_number = 3
second_number = 5
product = first_number * second_number

def sum_of_multiples(number, till):
    quotient = till // number
    sum_before_multiplying = quotient * (quotient + 1) // 2

    return sum_before_multiplying * number

till = 999
print(sum_of_multiples(first_number, till) + sum_of_multiples(second_number, till) - sum_of_multiples(product, till))
