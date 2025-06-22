class Father:
    def show_father(self):
        print("This is the father.")
    def call(self):
        print("calling it from child to father")

class Mother:
    def show_mother(self):
        print("This is the mother.")

class Child(Father, Mother):  # Multiple inheritance
    def show_child(self):
        print("This is the child.")

c = Child()
c.call()
c.show_mother()
c.show_child()
