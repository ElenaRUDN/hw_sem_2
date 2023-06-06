from matplotlib import pyplot as plt

f = open('C:/Users/Alena/study/progasem2/projects/Homework/laba8/laba8.txt')
filik = f.readlines()
f.close()
x = []
y = []
kol = []
for i in range(0,len(filik), 2):
    x.append(float(filik[i]))
for j in range(1,len(filik),2):
    y.append(float(filik[j]))
for l in range(len(y)):
    kol.append(int(l*10))
#print(len(x),len(y))
plt.plot(kol, x, label='Va') 
plt.plot(kol, y, label='Vw') 
plt.xlabel('Kilometres')  
plt.ylabel('V')
plt.legend()
plt.show()

