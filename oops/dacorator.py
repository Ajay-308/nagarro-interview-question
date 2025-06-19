def my_decorator(func):           
    def wrapper():
        print("Welcome!")        
        func()                     # call original function
        print("Have a nice day!")  # extra code after
    return wrapper                 # ✅ 3. Return wrapper
@my_decorator                     # ✅ 4. Decorator applied
#It represents the function you're decorating — in this case, greet.
def greet():
    print("Hello!")

greet()
