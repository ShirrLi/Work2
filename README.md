# Work2
仓库的master分支下包含两个大文件夹：x86，arm，分别存放了x86平台下运行的源码与arm平台下运行的源码。

**x86文件夹**：
- cache文件夹存放了Code::Blocks中运行的cache实验平凡算法源码，cache_better文件夹存放了cache实验优化算法源码
- sum文件夹存放有Code::Blocks中运行的超标量实验平凡算法源码，sum_better文件夹存放有超标量实验优化算法源码。

**arm文件夹**：
- cache_ordinary.cpp为在鲲鹏服务器运行的cache实验平凡算法代码，cache_better.cpp为cache实验优化算法代码，cache_cmp为将两种算法打包成函数，并在主函数中调用以分析cache命中率的代码
- sum_ordinary.cpp为在鲲鹏服务器运行的超标量实验平凡算法代码，sum_better.cpp为超标量实验优化算法代码

