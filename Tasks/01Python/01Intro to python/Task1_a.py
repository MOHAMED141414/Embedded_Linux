#slide 59
def list_4(nums):
    count=0
    for num in nums:
        if num ==4:
            count+=1
    return count 

list = list_4([1,4,7,6,4])
print(list)


#another solution 
cou=0
list=[1,3,8,5,4,6,1,2,1]
for n in list :
    if n==1:
     cou+=1

print(cou)   