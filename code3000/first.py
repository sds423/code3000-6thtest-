s=[x for x in input()]
w=[]
count,t=0,0
e=["0","1","2","3","4","5","6","7","8","9"]
for i in range(len(s)):
    if s[i]=="#":
        count=count+1
    if count%2!=0 and s[i] in e:
        continue
    else:
        if s[i]=="#":
            pass
        elif s[i]=="<":
            t=0
        elif s[i]==">":
            t=len(w)
        elif s[i]=="*":
            if t!=0:   
                t=t-1
                w.pop(t)
        else:
            w.insert(t,s[i])
            t=t+1
    
for u in w:
    print(u,end="")
            
