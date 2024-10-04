data_iris <- data.frame(Sepal.Length = c(5.1,4.9,4.7,4.6),
Sepal.Width = c(3.5,3.0,3.2,3.1),
Petal.Length = c(1.4,1.4,1.3,1.5),
Pe.tal.Width = rep(0.2,4)
)
data_iris
#以下两行代码让你手动来修改数据框的数据
# data_irisnew <- edit(data_iris)
# fix(data_iris)
data_iris <- rbind(data_iris,list(5.0,3.6,1.4,0.2))
data_iris
data_iris <- cbind(data_iris,Species = rep("setosa",5))
data_iris
data_iris[,-1]
# data_iris
data_iris[-1,]
names(data_iris)
names(data_iris)[1] = "a"
data_iris