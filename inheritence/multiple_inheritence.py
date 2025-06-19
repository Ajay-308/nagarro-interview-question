class Father:
    def show_father(self):
        print("This is the father.")

class Mother:
    def show_mother(self):
        print("This is the mother.")

class Child(Father, Mother):  # Multiple inheritance
    def show_child(self):
        print("This is the child.")

c = Child()
c.show_father()
c.show_mother()
c.show_child()
