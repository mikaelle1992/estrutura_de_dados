
class Node:
    
    def __init__(self, data):
        self.data = data
        self.next = None
        

class LinkedList:
    
    def __init__(self):
        self.head = None
        
    def append_(self, data):
        new_node = Node(data)
        
        if self.head == None:
            self.head = new_node
            return
        
        current_node = self.head
        
        
        while current_node.next:
            current_node = current_node.next
        
        current_node.next = new_node
        return 
    
    def length(self):
        if self.head == None:
            return 0
        current_node = self.head
        total = 0
        
        while current_node:
            total +=1
            current_node = current_node.next
        return total
        
    def to_list(self):
        node_data = []
        current_node = self.head
        
        while current_node:
            node_data.append(current_node.data)
            current_node = current_node.next
        return node_data
    
    def get(self, index):
        if index >= self.length() or index < 0:
            print("Error: Index out of range")
            return None
        current_idx = 0
        current_node = self.head
        while current_node != None:
            if current_idx == index:
                return current_node.data
            current_node = current_node.next
            current_idx += 1
            
    def search_item(self, data):
            current_node = self.head
            while current_node != None:
                if data == current_node.data:
                    print("tem na lista")
                current_node = current_node.next
                
    
    def display(self):
        contents = self.head
        
        if contents is None:
            print("Lista sem elemento")
            
        while contents:
            print(contents.data)
            contents = contents.next
        print("-----------------------")
        
    
    def reverse_linkelist(self):
        previous_node = None
        current_node = self.head
        while current_node != None:
            next = current_node.next
            current_node.next = previous_node
            previous_node = current_node
            current_node = next
        self.head = previous_node
        
        
# teste
my_list = LinkedList()
my_list.display()
my_list.append_(2)
my_list.append_(5)
my_list.append_(7)
my_list.append_(3)
print("get: " + str(my_list.get(1)))  

my_list.display()

print("tamanho da lista: " + str(my_list.length()))
print(my_list.to_list())
     
     
print("---------------")

my_list.reverse_linkelist()
my_list.display()       
print("get: " + str(my_list.get(1)))   
        
my_list.search_item(10)    
        
        