list_string1=input("Enter you first list element seperated by space:- ")
list_string2=input("Enter your second list element seperated by space:- ")
list1=list_string1.split()
list2=list_string2.split()

def merge_and_sort(list1,list2):
    mergedlist=list1+list2
    mergedlist.sort()
    return mergedlist

print("The merged and sorted list is:-",merge_and_sort(list1,list2))