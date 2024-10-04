no <- c(1,2,3)
id <- c("001","002","003")
name <- c("小张","小王","小李")
gender <- c("男","女","女")
studentdata <- data.frame(no,id,name,gender)
studentdata
patientID <- c(1,2,3,4)
age <- c(25,34,28,52)
diabetes <- c("Type1","Type2","Type1","Type1")
status <- c("Poor","Improved","Excellent","Poor")
patientdata <- data.frame(patientID,age,diabetes,status)
patientdata
patientdata[,1]#第一个参数表示行，第二个参数表示列
patientdata[,2]#第一个参数表示行，第二个参数表示列
patientdata[1,]
patientdata[2,]
patientdata[2:3]# 第2~3列数据
# patientdata[2:3,] # 2~3行数据
# patientdata[1,2]#取出第1行，第2列数据
# subset(patientdata,diabetes == "Type1")
# subset(patientdata,age > 30)
# Subset(patientdata,age > 30 & status=="Poor")
# library(sqldf)
# newdf <- sqldf( x:"select * from patientdata where age > 30 and status='Poor'")
# newdf
# newdf_2 <- sqldf( x: "select * from patientdata where age==25",row.names = T)
# newdf_2