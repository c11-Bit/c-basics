# Git笔记

## 第1周

### 安装与配置
git --version                              # 确认安装
git config --global user.name "名字"        # 设置用户名
git config --global user.email "邮箱"       # 设置邮箱
git config --global user.name              # 查看用户名
git config --global user.email             # 查看邮箱

### 常用命令
git init          # 初始化仓库，生成 .git
git status        # 查看当前状态
git add .         # 把所有改动加入暂存区
git commit -m "备注"  # 提交，生成一个版本
git log           # 查看提交历史
git log --oneline # 一行显示历史
git log --oneline -5  # 只显示最近5条

### 概念
- 工作区：写代码的文件夹，就是 c-basics
- 暂存区：git add 后文件去的地方
- 本地仓库：git commit 后存在 .git 里
- 提交（commit）：一次版本快照，有 message
- 分支（branch）：默认叫 master

### 提交流程
git add .                          # 1. 加入暂存区
git commit -m "feat: dayX 题目"     # 2. 提交
git push                           # 3. 推送到 GitHub

### 提交规范
feat:  新功能/新题目
fix:   修复bug
docs:  笔记/文档
test:  周测/月考
chore: 杂项/配置
refactor: 重构

### 常用操作
git log           # 看历史，按 q 退出
git status        # 看当前哪些改了、哪些没提交
git diff          # 看具体改了什么

### 远程仓库
git remote add origin <地址>   # 关联远程仓库
git remote -v                  # 查看远程仓库地址
git remote remove origin       # 删除远程关联

### 推送
git push -u origin master      # 第一次推送，-u 建立关联
git push                       # 以后推送
git pull                       # 拉取远程更新（多人协作用）

### .gitignore
作用：告诉 Git 哪些文件不提交
位置：仓库根目录，文件名就叫 .gitignore

C项目常见忽略内容：
*.exe       # 所有 exe 文件
*.o         # 所有 o 文件
*.obj
*.out
output/     # output 文件夹
build/
bin/
dist/

规则说明：
*.exe      * 表示任意文件名，忽略所有以 .exe 结尾的文件
output/    固定名字的文件夹，直接写名字，不用 *

### 概念
- 远程仓库：GitHub 上的仓库，和本地仓库对应
- origin：远程仓库的默认别名
- PAT：Personal Access Token，代替密码用于 push
- SSH：另一种认证方式，配一次以后不用输密码
- master：默认分支名

### 认证方式
PAT：
- GitHub → Settings → Developer settings
- Personal access tokens → Tokens (classic)
- Generate new token → 勾 repo
- 生成后立刻复制，只显示一次

push 时：
Username: GitHub用户名
Password: 粘贴PAT

### 每日流程
cd D:\c-basics
git add .
git commit -m "feat: dayX 题目"
git push