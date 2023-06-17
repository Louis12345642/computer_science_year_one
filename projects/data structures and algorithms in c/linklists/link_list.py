class Node:
    data = None
    next=None

    def __init__(self,data):
        self.data = data


head=Node(20)
second=Node(30)
third=Node(40)

head.next=second
second.next=third
third.next=False

def printData(n):
    while(n.data !=False):
        print(n.data)
        n.data=n.next

printData(Node)
