ve <- c(1,2,3,4,5,6,7)
ve[2]
ve[1:3]
ve[c(2,4,5)]
ve[-1]
ve[-c(1:3)]
 ve[c(TRUE, FALSE, TRUE, FALSE, FALSE, FALSE)]
names(ve) <- c("a", "b", "c", "d", "e", "f")
ve[c("a", "b")]
which(ve == 3)
which(ve == 1 & ve == 3)
which( ve> 1 & ve <= 4 )
which.max(ve)
which.min(ve)
subset(ve,ve>1&ve<5)
subset(ve,c(TRUE,FALSE,TRUE))
match(ve, c(1,2))
match(ve, c(1,3,5,6,7,8))
c(1,9)%in%ve
