import re
point = open("points.txt", "r")
fin = open("in.txt", "r")
fout = open("out.txt","w")
points = point.readlines()
lines = fin.readlines()

points_dic = dict()
for p in points:
    values = p.rstrip().split()
    points_dic[values[0]] = values[1]

for l in lines:
    ps = l.rstrip().split(',')
    #print(l.rstrip().split(','))
    fout.write(str(points_dic.get(ps[0]))+',  '+str(points_dic.get(ps[1]))+',   '+str(points_dic.get(ps[2]))+',\n')
    