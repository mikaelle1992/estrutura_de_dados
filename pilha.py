
class Stack:
    def __init__(self):
        self.items = []
        
    def push(self, item):
        self.items.append(item)
        
    def size(self):
        return len(self.items)
    
    def pop(self):
        if self.size() == 0:
            return None
        elif self.size() > 0:
            return self.items.pop()
        
        
MyStack = Stack()

MyStack.push("Page1")
MyStack.push("Page2")
MyStack.push("Page3")
MyStack.push("Page4")
MyStack.push("Page5")

print(MyStack.items)

MyStack.pop()
MyStack.pop()
print(MyStack.items)

print(MyStack.size())