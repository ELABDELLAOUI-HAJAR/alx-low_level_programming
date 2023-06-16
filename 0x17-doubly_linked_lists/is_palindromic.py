#!/usr/bin/python3
# function that get the largest palindrome made from 
# the product of two numbers with n is the number of digits
def is_palindromic(n):
    upper_limit = (10**(n)) - 1
    lower_limit = 1 + upper_limit // 10
    max_product = 0
    for i in range(upper_limit, lower_limit - 1, -1):
        for j in range(i, lower_limit - 1, -1):
            product = i * j
            if (max_product > product):
                break
            copy = product
            renverse = 0
            while copy != 0:
                renverse = renverse * 10 + copy % 10
                copy //= 10
            if (renverse == product and product > max_product):
                max_product = product
    return max_product


for i in range(2, 6):
    print(is_palindromic(i))
