library(XML)
strurl <- "http://sports.163.com/nba/"
tables <- readHTMLTable(strurl,header = FALSE,stringsAsFactors = FALSE)
length(tables)
tables[[15]]
table_sub <- tables[[15]]
write.table(table_sub, file: "table_sub.txt",row.names = F)
read.table( file: "table_sub.txt",header = T)