class Car:
    def __init__ (self, model, year, color):
        self.model = model
        self.year = year
        self.__color = color  # Private variable

    # Getter method for color
    def get_color(self):
        return self.__color

    def full_name(self):
        return f"{self.year} {self.model}"

class ElectricCar(Car):  # Note: typo fixed from 'ElectriicCar' to 'ElectricCar'
    def __init__(self, model, year, color, battery_size):
        super().__init__(model, year, color)
        self.battery_size = battery_size

    # Overriding the full_name method
    def full_name(self):
        return f"{self.year} {self.model} with {self.battery_size} battery"

# Object creation
res = ElectricCar("Tesla", 2023, "Red", "100kWh")

# Output
print(res.get_color())     
print(res.full_name())      
