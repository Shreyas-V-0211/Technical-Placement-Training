class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
        
def insert_into_list(self,data):
    head=None
    for list in lists:
        if head is None:
            head=Node(data)
            current=head
        else:
            current.next=Node(data)
            current=current.next
    return head
        
def find_mid(linked):
    if linked is null:
        return null
    length=len(linked)
    mid = int(length/2)
    current=head
    
    return mid    

arr = []
n=int(input("Enter number of nodes: "))
print("LinkedList: ",end='')
for i in range(n):
    input(arr[i])
ll=insert_into_list(arr)
middle_element=find_mid(ll)
print(middle_element)