def cal_area(rad):
    pi = 3.141592653589793
    return pi * (rad ** 2)

rad=float(input("Enter the raduis "))

area=cal_area(rad)
print(area)