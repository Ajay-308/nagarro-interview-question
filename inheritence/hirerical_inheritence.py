class Parent:
    def show_parent(self):
        print("This is the parent class.")

class Child1(Parent):
    def show_child1(self):
        print("This is child 1.")

class Child2(Parent):
    def show_child2(self):
        print("This is child 2.")

c1 = Child1()
c2 = Child2()

c1.show_parent()
c1.show_child1()

c2.show_parent()
c2.show_child2()
