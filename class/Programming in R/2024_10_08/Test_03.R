# 安装并加载 xlsx 包（如果尚未安装）
# install.packages("xlsx")
library(xlsx)

# 指定文件路径（如果文件不在当前工作目录中，请提供完整路径）
file <- "abc.xlsx"

# 读取 Excel 文件中的数据（使用 read.xlsx2 可能是更好的选择，取决于您的 xlsx 包版本）
excel <- read.xlsx2(file, sheetIndex = 1)  # 注意：这里使用 sheetIndex 而不是直接传递数字 1（尽管在大多数情况下它们可能等效）

# 查看数据框的内容
View(excel)

# 打印数据框（可选，因为 View 已经显示了它）
print(excel)
getwd()