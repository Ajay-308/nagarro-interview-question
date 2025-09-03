from abc import ABC, abstractmethod

# Abstract class
class Vehicle(ABC):
    
    @abstractmethod
    def start(self):
        pass

# Child class 1
class Car(Vehicle):
    def start(self):
        print("Car started with a key 🔑")

# Child class 2
class Bike(Vehicle):
    def start(self):
        print("Bike started with a button 🔘")

d = Car()
d.start()