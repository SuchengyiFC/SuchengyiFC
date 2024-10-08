data<-c(1,2,3,4)
is.vector(data)
data_2<-matrix(1:9,3,3)
data_2
is.vector(data_2)
is.matrix(data_2)
data_3 = data.frame(a =c(1,2),b=c("Happy","you"),c=c(TRUE,FALSE))
data_3
is.data.frame(data_3)