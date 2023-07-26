# no_of_cord=int(input())
# cords=[]
# for i in range(0,no_of_cord):
#     cord=input()
#     cord=cord.split()
#     t_mp=[]
#     for i in cord:
#         t_mp.append(int(i))
#     cords.append(t_mp)
# cord_net=[]
# for i in range(0,len(cords[0])):
#     t_mp_2=0
#     for j in cords:
#         t_mp_2 += j[i]
#     cord_net.append(t_mp_2)
# vrf=0
# for i in cord_net:
#     vrf+=i
# if vrf==0:
#     print("YES")
# else:
#     print("NO")

no_of_cord=int(input())
cords=[]
for i in range(0,no_of_cord):
    cord=input()
    cord=cord.split()
    t_mp=[]
    for i in cord:
        t_mp.append(int(i))
    cords.append(t_mp)
sum=[0,0,0]
for i in range(0,3):
    
    for j in range(0,len(cords)):
        sum[i]+=cords[j][i]

if sum==[0,0,0]:
    print("YES")
else:
    print("NO")
    