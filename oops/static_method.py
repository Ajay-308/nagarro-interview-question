class MathUtils:
    @staticmethod
    def add(x, y):
        return x + y


#  If You Don’t Use @staticmethod
class Test:
    def show():
        print("Hello")

Test.show()  # ❌ TypeError: missing 1 required positional argument: 'self'