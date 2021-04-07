import random

f = open("colors.txt","w")

#for item in range(1,343):
#    f.write(str( round(random.random(),3))+'f,  '+str( round(random.random(),3))+'f,  '+str( round(random.random(),3))+'f,\n')

for item in range(1,172):
    f.write(str( '0.855f,  0.139f,  0.576f,')+'\n')

for item in range(1,172):
    f.write(str( '0.535f,  0.735f,  0.235f,')+'\n')
    