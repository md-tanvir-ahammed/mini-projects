import random

def guessing_game():
    print("===== Number Guessing Game =====")
    
    secret = random.randint(1, 100)
    attempts = 0
    
    print("I picked a number between 1 and 100!")
    
    while True:
        guess = int(input("Your guess: "))
        attempts += 1
        
        if guess < secret:
            print("Higher number please!")
        elif guess > secret:
            print("Lower number please!")
        else:
            print(f"Yes! You got it in {attempts} attempts!")
            break

guessing_game()
