# Microsoft Pinyin IME Conversion Mode Setter

Lme说想要按下快捷键时将输入法**变更为**中文模式或英文模式而不是在两者之间切换  
这是一个最简单的实现  

## 运行

直接运行main.exe  
如果当前窗口具有管理员权限，那么main.exe也需要具有管理员权限才能正确工作  

Ctrl-Shift-F1切换为中文,Esc切换为英文  
按我的设计思路,切换为英文应该是Ctrl-Shift-F2之类,但是Lme喜欢就按一个Esc  

## 编译

```sh
cl main.c Imm32.lib User32.lib
```

release中的可执行文件启用了/Os选项  
