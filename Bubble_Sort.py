def bubbleSort(list):
    for passnum in range(len(list)-1,0,-1):
        for i in range(passnum):
            if list[i]>list[i+1]:
                temp = list[i]
                list[i] = list[i+1]
                list[i+1] = temp

list = []
for i in range(int(input('Enter the number of list items\n'))):
    list.append(int(input('Input elements\n')))
bubbleSort(list)
print(list)