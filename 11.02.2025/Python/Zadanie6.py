class Widget:
    def __init__(self,label):
        self.label = label

class Button(Widget):
    def __init__(self, label,size):
        super().__init__(label)
        self.size = size

    def handle_click(self):
        return 'Kliknieto chopie'

b = Button('PRZYCISK','DUŻY')
print(b.size, b.label)
print(b.handle_click())

w = Widget('my widget')
# print(w.handle_click()) generuje się error
