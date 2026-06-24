class Animals:
    pass
class Pets  (Animals):
    pass
class Dogs (Pets):
    @staticmethod
    def bark():
        print("Woof Woof")

d= Dogs()
d.bark()
