import pygame,sys
from pygame.locals import *             #导入pygame.locals模块
import time


#子弹类
class Bullet(object):
    def __init__(self, screen_temp, x, y):  #构造方法 初始化子弹对象的属性
        self.x = x+40   #子弹起始X坐标
        self.y = y-20   #子弹起始Y坐标
        self.number=0
        self.screen = screen_temp   #窗口
        self.image = pygame.image.load("./jpg/火.png")   #创建一个子弹图片

    def add_number(self):
        self.number=number+1
        return number    

    def display(self):  #显示子弹图片的方法
        self.screen.blit(self.image, (self.x, self.y))  #将创建的子弹图片按设定的坐标贴到窗口中

    def move(self): #子弹移动方法
        self.x+=10  #子弹Y坐标自减10

    def judge(self):    #判断子弹是否越界的方法
        if self.x>800:    #如果子弹的Y坐标小于0
            return True #返回true正确
        else:
            return False #返回false错误

#飞机类
class Aircraft_obj(object):
    def __init__(self, screen_temp):    #构造方法 初始化火柴人对象的属性
        self.x = 10    #火柴人起始X坐标
        self.y = 230    #火柴人起始Y坐标
        self.screen = screen_temp   #窗口
        self.bullet_list = []#存储发射出去的子弹对象引用

    def display(self):  #显示飞机图片的方法（这里包括了显示子弹的图片）
        
        #显示飞机发射的所有子弹
        for bullet in self.bullet_list:
            bullet.display()    #显示子弹
            bullet.move()   #移动子弹
            if bullet.judge():#判断子弹是否越界
                self.bullet_list.remove(bullet) #将子弹从bullet_list中删除
            

    def fire(self): 
        self.bullet_list.append(Bullet(self.screen, self.x, self.y))    #将发射的子弹对象存储到bullet_list中


#敌人类
class EnemyPlane(object):
    def __init__(self, screen_temp):    #构造方法 初始化敌人对象的属性
        self.x = 100  #敌人的起始X坐标
        self.y = 230  #敌机的起始Y坐标
        
        self.j = 150  #敌人的起始X坐标
        self.k = 230  #敌人的起始y坐标

        self.h=0
        self.changes=False
        self.end=3

        self.background = pygame.image.load('./jpg/B1.jpg')        #加载背景图片
 

        self.screen = screen_temp   #窗口
        self.image = pygame.image.load("./jpg/r/9.png")    #创建一个敌人图片
        self.image = pygame.image.load("./jpg/r/9.png")    #创建一个敌人图片
        self.direction = "right"    #用来存储敌人移动方向，默认向右移动

        #爆炸效果用的属性
        self.hit = False #表示是否要爆炸
        self.bomb_lists = [] #用来存储爆炸时需要的图片
        self.__crate_images() #调用这个方法向bomb_lists中添加图片
        self.image_num = 0#用来记录while循环的次数,当次数达到一定值时才显示一张爆炸的图,然后清空,当这个次数再次达到时,再显示下一个爆炸效果的图片
        self.image_index = 0#用来记录当前要显示的爆炸效果的图片的序号

    def playp(self):
        screen.blit(self.background,self.background.get_rect())  #绘制背景图片

    def __crate_images(self):   #将爆炸需要的图片添加到self.bomb_lists中
        self.bomb_lists.append(pygame.image.load("./jpg/r/10.png"))
        self.bomb_lists.append(pygame.image.load("./jpg/r/11.png"))
        self.bomb_lists.append(pygame.image.load("./jpg/r/12.png"))
        self.bomb_lists.append(pygame.image.load("./jpg/r/13.png"))
        self.bomb_lists.append(pygame.image.load("./jpg/r/15.png"))
        self.bomb_lists.append(pygame.image.load("./jpg/r/16.png"))

    #判断爆炸的方法,x1表示子弹最左侧的X坐标，x2表示子弹最右侧的X坐标，y表示子弹当前的Y坐标
    def  blast(self,x1,x2,y):   
    #判断子弹能命中敌机的三种情况，满足任意一种即可让敌人爆炸
        if ((x1>=self.x and x2<=self.x) or x2==self.x or x1==self.x):
            a.append(1)
            print(a)

    def display(self):  #显示敌人的方法
         #如果被击中,就显示爆炸效果,否则显示普通的敌人效果
        if self.hit == True:    #如果满足爆炸条件，就显示爆炸的图片
            self.screen.blit(self.bomb_lists[self.image_index], (self.x, self.y))
            self.screen.blit(self.bomb_lists[self.image_index], (self.j, self.k))
            self.image_num+=1   #这是统计循环次数，为了使玩家看清爆炸效果
            if self.image_num == 7: #如果循环次数达到7次
                self.image_num=0    #将循环次数改为0次
                self.image_index+=1 #图片显示序号+1，换为另一张图
            if self.image_index>5:  #这里爆炸图片一共是四张，所以是图片序号大于三次
                time.sleep(1)       #暂停一秒
                self.image_index=1
                self.end-=1
                print('还有几次结束',self.end)
                if self.end==0:
                    exit()
                self.hit=False

        else:   #否则显示正常的敌人图片
            self.screen.blit(self.image,(self.x, self.y))
            self.screen.blit(self.image,(self.j, self.k))

    def number(self):
        if sum(a)>=3:
            a.clear()
            self.hit = True
            self.changes=True
            print(self.hit)
            print(self.changes)
        pass
    def game(self):
        if self.changes == True:
            self.changes=False
            print('kkkkkkk')
            self.h=self.h+1
            for i in range(self.h,self.h+1):
                print(i)
                if i<4:
                	self.background=pygame.image.load("./jpg/c%s.jpg"%i)
                	print('hh')
                	



    def move(self): #敌人移动方法
        if self.hit == True: 
            pass
        else:
            if self.direction=="right":     #如果是向右移动
                self.j+=5
                self.x += 5     #X坐标自增加5
            elif self.direction=="left":    #如果是向左移动
                self.j-=5
                self.x -= 5     #X坐标自减少5

            if self.x>800-50:   #如果X坐标大于窗口减去敌机宽度的值
                self.direction = "left" #移动方向改为左
            elif self.x<0:      #如果X坐标小于0
                self.direction = "right"    #移动方向改为右




pygame.init()
#1. 创建窗口
screen = pygame.display.set_mode((800,364),0,32)

#3. 创建一个子弹对象
aircraft = Aircraft_obj(screen)

#4. 创建一个敌人对象
enemy = EnemyPlane(screen)

#标题
pygame.display.set_caption("火柴人无敌版")
#图片
background1 = pygame.image.load("./jpg/B1.jpg")

#帧数
clock = pygame.time.Clock()

k=0
i=0           #记录帧                
a=[]
change = 1    #记录切换
state = False #火柴人形态开关
direct = 'L'  #转向开关
fire = False  #开火开关
speed = [1,0]

image = pygame.image.load("./jpg/r/9.png")   #加载火柴人1的图片

pygame.mixer.music.load('游戏.wav')       #加载音乐
pygame.mixer.music.set_volume(0.5)               #设置音量
pygame.mixer.music.play(-1)                     #循环播放

tankposition = image.get_rect()
tankposition.center = (10,288)


while True:
    
    #每过一段时间切换火柴人的形态（用i记录）
    i = i + 1           
    if i%10 == 0:
        state = True
    else:
        state = False
    

    #让火柴人不断切换状态
    if state:
        if change == 1:
            image = pygame.image.load('./jpg/r/4.png')   
            change = 2
        elif change==2 :
            image = pygame.image.load('./jpg/r/5.png')
            change = 3
        elif change==3:
            image = pygame.image.load('./jpg/r/6.png')
            change = 4
        elif change==4:
            image = pygame.image.load('./jpg/r/7.png')
            change = 5
        elif change==5:
            image = pygame.image.load('./jpg/r/8.png')
            change = 1
    
    #图片水平翻转180度(按下左右键让火柴人掉头)
    if direct == 'R':
        img2=pygame.transform.flip(image,True,False)       
    else:
        img2=image
    
    for event in pygame.event.get():        #获取事件
        if event.type == pygame.QUIT:       #鼠标按下窗口的关闭
            sys.exit()                      #退出
        if event.type == pygame.KEYDOWN:    #按下键盘
            if event.key == pygame.K_ESCAPE:#按下ESC键
                sys.exit()                  #退出
            if event.key == pygame.K_RIGHT or event.key == K_d: #按下右键
                speed = [2,0]               #速度
                direct = 'L'                #掉头
            if event.key == pygame.K_LEFT or event.key == K_a:  #按下左键
                speed = [-2,0]              #速度
                direct = 'R'                #掉头
            if event.key == pygame.K_UP:    #按下上键
                speed = [0,-2]              #速度
            if event.key == pygame.K_DOWN:  #按下下键
                speed = [0,2]               #速度
            if event.key == pygame.K_SPACE or event.key == K_j: #按下空格
                aircraft.fire()                 #开火
        if event.type == pygame.KEYUP:      #键盘释放
            speed = [0,0]                   #原地不动

        
            
    
    tankposition = tankposition.move(speed) #让坦克以速度speed前进



    for bullet in aircraft.bullet_list: #循环飞机对象中存储的子弹信息
        x1 = bullet.x       #子弹当前X坐标
        x2 = bullet.x + 22  #子弹当前X坐标+子弹图片的宽
        y1 = bullet.y       #子弹当前Y坐标
        enemy.blast(x1,x2,y1)    #判断子弹的坐标区域有没有与敌机相交
        enemy.number()
        enemy.game()

    enemy.playp()

    aircraft.display()  #执行飞机类中显示飞机的方法
    screen.blit(img2,tankposition)  #绘制坦克
    enemy.display()     #执行敌机类中显示敌机的方法
    enemy.move()        #调用敌机的移动方法
    pygame.display.update() #更新需要显示的内容到窗口 
    clock.tick(60)                  #控制帧数