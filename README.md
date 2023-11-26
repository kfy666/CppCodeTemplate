# 欢迎来到Cpp Code Template!
<!--
[![awesome](https://camo.githubusercontent.com/abb97269de2982c379cbc128bba93ba724d8822bfbe082737772bd4feb59cb54/68747470733a2f2f63646e2e7261776769742e636f6d2f73696e647265736f726875732f617765736f6d652f643733303566333864323966656437386661383536353265336136336531353464643865383832392f6d656469612f62616467652e737667)](https://github.com/sindresorhus/awesome)
[![Github](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com)
![Cpp](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Markdown](https://img.shields.io/badge/Markdown-000000?style=for-the-badge&logo=markdown&logoColor=white)
![Git](https://img.shields.io/badge/GIT-E44C30?style=for-the-badge&logo=git&logoColor=white)

![Pycharm](https://img.shields.io/badge/PyCharm-000000.svg?&style=for-the-badge&logo=PyCharm&logoColor=white)
![Github Actions](https://img.shields.io/badge/GitHub_Actions-2088FF?style=for-the-badge&logo=github-actions&logoColor=white)
![Visual Studio](https://img.shields.io/badge/Visual_Studio-5C2D91?style=for-the-badge&logo=visual%20studio&logoColor=white)
![Visual Studio Code](https://img.shields.io/badge/Visual_Studio_Code-0078D4?style=for-the-badge&logo=visual%20studio%20code&logoColor=white)
-->
[![Page Views Count](https://badges.toozhao.com/badges/01HDE13JSWPFN1ME6TGB42DV8T/green.svg)](https://badges.toozhao.com/stats/01HDE13JSWPFN1ME6TGB42DV8T "Get your own page views count badge on badges.toozhao.com")
[![followers](https://img.shields.io/github/followers/kfy666.svg?style=social&label=Follow&maxAge=2592000)](https://github.com/kfy666)
[![license](https://img.shields.io/github/license/kfy666/CppCodeTemplate.svg?color=slateblue)](https://github.com/kfy666/CppCodeTemplate)
![watchers](https://img.shields.io/github/watchers/kfy666/CppCodeTemplate.svg?style=social&label=Watch)
![forks](https://img.shields.io/github/forks/kfy666/CppCodeTemplate.svg?style=social)
![stars](https://img.shields.io/github/stars/kfy666/CppCodeTemplate.svg?style=social&label=Stars)

![issues open](https://img.shields.io/github/issues/kfy666/CppCodeTemplate.svg?color=lime)
![issues closed](https://img.shields.io/github/issues-closed/kfy666/CppCodeTemplate.svg?color=yellow)
![pull request open](https://img.shields.io/github/issues-pr/kfy666/CppCodeTemplate.svg?color=lime)
![pull request closed](https://img.shields.io/github/issues-pr-closed/kfy666/CppCodeTemplate.svg?color=yellow)
![last commit](https://img.shields.io/github/last-commit/kfy666/CppCodeTemplate.svg)

---

**点击链接查看<a href="#index">索引</a>, 或往下滑 ↓**

---

## 概述

> 想要骗到分，一定有方法。图论背模板，数论背公式，动规背方程，高精背代码，要是都不会，干脆输样例 。

[En] Thank you for visiting our repository! Here you'll find various detailed templates of C++ code for the Olympics of Informatic(OI), completely **free**. Please ⭐**Star**⭐ our repo and indicate our **link** if you'd like to use our templates.❤️

[Ch] 感谢您访问我们的仓库! 这里有丰富详实的专为信息学竞赛 ( OI ) 打造的C++代码模板, 完全**免费**. 如果您想使用我们的模板, 请给这个仓库⭐**Star**⭐并**标明出处**.❤️

欢迎您上传您的代码模板, 我们将在第一时间回复并处理您的<code>Pull Request</code>. 希望您能成为我们的<code>Contributor</code>!
如果您发现我们的代码模板有纰漏, 欢迎提交<code>Issue</code>, 我们将在第一时间处理.

![progress](https://img.shields.io/badge/更新进度-1%25_(16/1000+)-orange)

**注意: 本仓库内所有<code>.cpp</code>文件的头文件均采用万能头<code>bits/stdc++.h</code>, 如果您的编译器不支持此头文件, 请更换为<code>iostream</code>等更通用的头文件. 下面提供了这些用于替代的头文件.**

<details>
<summary> <b>展开查看</b>⤵️ </summary>
	
```cpp
#include<iostream>
#include<cstdio>
#include<fstream>
#include<algorithm>
#include<cmath>
#include<deque>
#include<vector>
#include<queue>
#include<string>
#include<cstring>
#include<map>
#include<stack>
#include<set>
#include<cstdlib>
#include<bitset>
```

</details>

**注意: 本仓库内所有<code>.cpp</code>文件均含有中文注释, 如果您的编译器不支持中文注释或出现乱码, 请将其改为英文注释或删除这些注释. 如果您下载的文件有乱码, 您也可以从网页上直接拷贝整段代码以防止乱码出现. 您可以通过提交<code>Issue</code>来告诉我们哪个文件有乱码.**

另外附上开启<code>O2</code>优化和<code>O3</code>优化的代码:
```cpp
#pragma GCC optimize(2)//O2优化
#pragma GCC optimize(3,"Ofast","inline")//O3优化
```

<a name="index"></a>

---

## 索引

> 文件再乱, 代码过关就行.

模板存储于<code>Templates</code>文件夹内. 如果不想打开文件夹慢慢查找文件, 你也可以访问下面这个列表中的链接来查看对应文件.

所有模板分为基础 ( <a href="#bsc"><code>Basic</code></a> ) , 图论 ( <a href="#grh"><code>Graph</code></a> ) , 数据结构 ( <a href="#ds"><code>Ds</code></a> ) 和数学 ( <a href="#mth"><code>Math</code></a> ) 四种.

<a name="bsc"></a>

### 📝基础

> 文件夹名称: <a href="https://github.com/kfy666/CppCodeTemplate/tree/main/Templates/Basic">Basic</a>
> 
> 包含: 语言基础, 算法基础, 快读

| 项目名称 | 项目源程序链接 |
|------|------|
|Hello World| <code>https://github.com/kfy666/CppCodeTemplate/blob/main/Templates/Basic/HelloWorld.cpp</code> |
|A+B Problem| <code>https://github.com/kfy666/CppCodeTemplate/blob/main/Templates/Basic/A%2BB-Problem.cpp</code> |
|选择排序| <code>https://github.com/kfy666/CppCodeTemplate/blob/main/Templates/Basic/Selection-sort.cpp</code> |
|冒泡排序| <code>https://github.com/kfy666/CppCodeTemplate/blob/main/Templates/Basic/Bubble-sort.cpp</code> |
|插入排序| <code>https://github.com/kfy666/CppCodeTemplate/blob/main/Templates/Basic/Insertion-sort.cpp</code> |
|计数排序| <code>https://github.com/kfy666/CppCodeTemplate/blob/main/Templates/Basic/Counting-sort.cpp</code> |
|快读| <code>https://github.com/kfy666/CppCodeTemplate/blob/main/Templates/Basic/Quick-read.cpp</code> |

<a name="grh"></a>

### 🧩图论

> 文件夹名称: <a href="https://github.com/kfy666/CppCodeTemplate/tree/main/Templates/Graph">Graph</a>
> 
> 包含: 图论

| 项目名称 | 项目源程序链接 |
|------|------|
|Dijkstra求最短路-左偏树维护| <code>https://github.com/kfy666/CppCodeTemplate/blob/main/Templates/Graph/Dijkstra-Leftist-tree.cpp</code> |

<a name="ds"></a>

### 🌳数据结构

> 文件夹名称: <a href="https://github.com/kfy666/CppCodeTemplate/tree/main/Templates/Ds">Ds</a>
> 
> 包含: 数据结构

| 项目名称 | 项目源程序链接 |
|------|------|
|线段树维护区间和-单点修改-区间查询 | <code>https://github.com/kfy666/CppCodeTemplate/blob/main/Templates/Ds/Seg-RangeSum-PointUpdate-RangeQuery.cpp</code> |
|差分树状数组| <code>https://github.com/kfy666/CppCodeTemplate/blob/main/Templates/Ds/Fenwick-Adjacent-difference.cpp</code> |
|二维树状数组| <code>https://github.com/kfy666/CppCodeTemplate/blob/main/Templates/Ds/Fenwick-Two-dimension.cpp</code> |
|Splay| <code>https://github.com/kfy666/CppCodeTemplate/blob/main/Templates/Ds/Splay.cpp</code> |
|左偏树| <code>https://github.com/kfy666/CppCodeTemplate/blob/main/Templates/Ds/Leftist-tree.cpp</code> |

<a name="mth"></a>

### 🎲数学

> 文件夹名称: <a href="https://github.com/kfy666/CppCodeTemplate/tree/main/Templates/Math">Math</a>
> 
> 包含: 数论, 快速幂

| 项目名称 | 项目源程序链接 |
|------|------|
|中国剩余定理(CRT)| <code>https://github.com/kfy666/CppCodeTemplate/blob/main/Templates/Math/Chinese-remainder-theorem.cpp</code> |
|线性筛法筛质数| <code>https://github.com/kfy666/CppCodeTemplate/blob/main/Templates/Math/Prime-Euler-sieve.cpp</code> |
|快速幂| <code>https://github.com/kfy666/CppCodeTemplate/blob/main/Templates/Math/Binary-exponentiation.cpp</code> |

---

## 贡献者

点击[这里](https://github.com/kfy666/CppCodeTemplate/graphs/contributors)查看所有贡献者. 如果你在本仓库提交<code>Pull Request</code>并得到通过, 那么你也将成为一名<code>Contributor</code>.

以下列出所有提交了<code>Pull Request</code>的贡献者名单 ( 按首次提交并合并<code>Pull Request</code>的时间顺序排列 ) :

[kfy666](https://github.com/kfy666), [GTC-Byzantine](https://github.com/GTC-Byzantine), [2044-space-elevator](https://github.com/2044-space-elevator).

---

## 彩蛋

> 锟斤拷锟斤拷烫烫烫拷斤锟屯屯屯葺葺葺锟斤拷
> 
衷心祝愿您下载的文件不会出现这种东西.
