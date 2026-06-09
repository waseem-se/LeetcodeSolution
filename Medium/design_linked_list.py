class Node:
    def __init__(self, val):
        self.val = val
        self.next = None
        
class MyLinkedList:
    def __init__(self):
        self.head = None
        
    def get(self, index: int) -> int:
        current = self.head
        
        while current:
            if index == 0:
                print(current.val)
                return current.val
            index -= 1
            current = current.next
            
        return -1
        

    def addAtHead(self, val: int) -> None:
        new_node = Node(val)
        new_node.next = self.head
        self.head = new_node
        

    def addAtTail(self, val: int) -> None:
        new_node = Node(val)
        
        if not self.head:
            self.head = new_node
            return
            
        current = self.head
        while current.next:
            current = current.next
        current.next = new_node
        

    def addAtIndex(self, index: int, val: int) -> None:
        if index < 0:
            return
        # remove this call if possible
        if index == 0:
            self.addAtHead(val)
            return
        
        current = self.head
        position = 0
        while current and position < index - 1:
            current = current.next
            position += 1
            
        if not current:
            return
            
        new_node = Node(val)
        new_node.next = current.next
        current.next = new_node        

    def deleteAtIndex(self, index: int) -> None:
        #delete at head
        if not self.head or index < 0:
            return
        if index == 0:
            self.head = self.head.next
            return
        
        current = self.head
        position = 0
        
        while current and position < index - 1:
            current = current.next
            position += 1
        
        if not current or not current.next:
            return
        
        current.next = current.next.next
        
    def printLinkedList(self):
        current = self.head
        while current:
            print(current.val, end=" -> ")
            current = current.next
            
        print("None")
        
obj = MyLinkedList()
obj.printLinkedList()
obj.deleteAtIndex(0)
obj.addAtHead(2)
obj.addAtHead(1)
obj.addAtTail(3)
obj.addAtTail(4)
obj.printLinkedList()
obj.get(2)
obj.addAtIndex(0, -1)
obj.printLinkedList()
obj.addAtIndex(2, 100)
obj.printLinkedList()
obj.addAtIndex(6, 500)
obj.deleteAtIndex(0)
obj.printLinkedList()
obj.deleteAtIndex(5)
obj.printLinkedList()
    