class Parent:
    def greet(self):
        print("Hello from Parent")
    def call(self):
        print("calling using super method ")

class Child(Parent):
    def greet(self):
        super().greet()
        print("Hello from Child")


c = Child().greet()
print(c)
# Method overriding means: If a subclass defines a method with the same name
# as in the parent class, then when you call that method on an object, 
# Python uses the child’s version.
# So Why Does super().greet() Still Call the Parent One?
# Because you explicitly asked it to.