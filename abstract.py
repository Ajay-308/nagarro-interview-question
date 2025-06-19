from abc import ABC, abstractmethod

#ABC stands for Abstract Base Class.
#It's a special class in Python used to create abstract classes, which act like blueprints.


#  @abstractmethod is a decorator that you use to mark a method as abstract, meaning:
#  It has no code inside (no body)
# Child classes must override it (must give their own version)

class Animal(ABC):        
    @abstractmethod
    def sound(self):        
        pass

class Dog(Animal):           
    def sound(self):
        print("Bark")

class Cat(Animal):
    def sound(self):
        print("Meow")

d = Cat()
d.sound()   # ✅ Bark
