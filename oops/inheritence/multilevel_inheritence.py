class Grandparent:
    def show_grandparent(self):
        print("This is the grandparent.")

class Parent(Grandparent):  # Inheriting Grandparent
    def show_parent(self):
        print("This is the parent.")

class Child(Parent):  # Inheriting Parent (and indirectly Grandparent)
    def show_child(self):
        print("This is the child.")

c = Child()
c.show_grandparent()
c.show_parent()
c.show_child()
