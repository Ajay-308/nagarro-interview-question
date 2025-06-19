class Animal:
    def speak(self):
        print("Animal speaks")

class Dog(Animal):
    def speak(self):
        print("Dog barks")

class Cat(Animal):
    def speak(self):
        print("Cat meows")

def make_sound(animal):
    animal.speak() 

dog = Dog()
cat = Cat()

make_sound(dog)  
make_sound(cat) 
