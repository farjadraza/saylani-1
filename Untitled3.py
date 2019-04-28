
# coding: utf-8

# In[4]:


name=15
su=9
print (name % su)


# In[5]:


a="nice greeting you"
print (a)


# In[15]:


b=(input("enter your name"))
if b=="farjad":
 print("you are the one")
elif b=="bilal":
 print("nice")
elif b=="mano":
 print("good")
else:
 print("sorry")


# In[24]:


c=int(input("enter your percent"))
if (c>90 and c<100):
 print("a+")
elif (c>80 and c<90):
 print("a")
elif (c>70 and c<80):
 print("b")
else:
 print("sorry you are fail")   


# In[28]:


d=int(input("enter any number"))
if (d>1):
    if(d>1 and d<5):
     print("hello")
if (d>5):
    if(d>6 and d<10):
      print("hi")


# In[30]:


arr=["apple","mango","banana","strawberry"]
print(arr[3])
print(arr[2])


# In[31]:


print (arr)


# In[32]:


un=["cucumber","carot","ginger"]
un.pop(1)
print (un)


# In[33]:


arr.append(un.pop(1))
print (arr)

