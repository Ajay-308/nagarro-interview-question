class Student:
    def __init__(self):
        self.__marks = 0  # private

    def set_marks(self, m):   # setter
        if m >= 0 and m <= 100:
            self.__marks = m
        else:
            print("Invalid marks")

    def get_marks(self):      # getter
        return self.__marks
    
class King(Student):
    pass

s = Student()
s.set_marks(90)         # ✅ safe
print(s.get_marks())    # ✅ 90
k = King()
k.set_marks(30)
print(k.get_marks())


# print(s.__marks)      ❌ error: private
