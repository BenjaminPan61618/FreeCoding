# -*- using: utf-8 -*-   # 这一句现在也可以不用加了
import sys
from datetime import date

def main():
	print ("程序名:" + sys.argv[0])
	print ("成绩判定系统")
	print ("By Benjamin V1.0")
	print ("欢迎使用，输入成绩，程序将判定是否合格")
	print ("今天是:" + str(date.today()))
	score = 0
	judge(score)
	
def judge(score):
	while score >=0:
		score=int(input("考生分数是多少呢？"))
		if  score >= 60 and score < 100:
			print("恭喜考试合格")
		elif score == 0 :
			print("成绩异常")
		elif score == 100:
			print("恭喜考试满分")
		elif score >= 0 and score < 60:
			print("考试不合格")        
		else:
			print("程序退出...")

main()
