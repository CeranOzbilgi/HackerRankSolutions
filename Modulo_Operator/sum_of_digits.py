def sum_of_digits(number):
    # Convert the number to a string to iterate over each digit
    number_str = str(number)
    
    # Initialize the sum to 0
    total_sum = 0
    
    # Iterate over each character in the string
    for digit in number_str:
        # Convert the character back to an integer and add to the sum
        total_sum += int(digit)
    
    return total_sum

if __name__ == "__main__":
    # Read the input number
    number = int(input().strip())
    
    # Calculate the sum of digits
    result = sum_of_digits(number)
    
    # Print the result
    print(result)
