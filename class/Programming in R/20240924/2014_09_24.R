ve<-c(0,1,2,3,4,5,6)
ve[1]
#筛选元素索引
which(ve == 1)
#逻辑运算：与或非
#逻辑与&&逻辑或11逻辑非！
which(ve == 1 | ve == 3)
which(ve >1 & ve < 4)# 2,3
which.max(ve)
which.min(ve)
#筛选元素内容
subset(ve,ve > 1 & ve < 4)
subset(ve,C(TRUE,FALSE,TRUE))
match(ve,c(1,2))
match(ve,c(0,3))
match(ve,c(0,5,7))