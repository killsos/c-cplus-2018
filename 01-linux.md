## linux

- POSIX

		
		可移植操作系统接口（英语：Portable Operating System Interface，缩写为POSIX）
		
		是IEEE为要在各种UNIX操作系统上运行软件 而定义API的一系列互相关联的标准的总称
		
		其正式称呼为IEEE Std 1003，而国际标准名称为ISO/IEC 9945
		
		此标准源于一个大约开始于1985年的项目
		
		POSIX这个名称是由理查德·斯托曼（RMS）应IEEE的要求而提议的一个易于记忆的名称
		
		它基本上是Portable Operating System Interface（可移植操作系统接口）的缩写
		
		而X则表明其对Unix API的传承。
		
		Linux基本上逐步实现了POSIX兼容，但并没有参加正式的POSIX认证。
		
	
- 目录

		
		unix linux 用 /
		
			/根目录
		
		windows    用 \
		
			盘符:\pathA\pathb\filename
		

- 文件

		
		UNIX linux 一切皆为文件
		
		

- 命令

		
		command [-option] [parameter1] 
		
		[]   代表可选
		
		
		
		command --help
		
		
		0 帮助 man
		
			man command
			
			空格键   下一屏
			
			b       回滚一屏
			
			f       前滚一屏
			
			h       列出所有功能键
			
			q       退出
			
			/word   搜索word字符串
			
		
		1 智能补全
			
			tab
			
		2 history 
		
			上下键
			
		3 查看文件 ls
		
			.开头文件是隐藏文件
			
			-a 显示所有信息 包括隐藏文件
			
			-l 以列表方式显示
			
			-h 配合-l以人性化的方式显示文件大小
			
			ls a*
				
				查看以a为开头的文件
				
			* 通配多个字符
			
			？通配一个字符
			
			[a-c] 区间法 确定一个字符
			
			[abcd] 穷举法 权值法 
			
			 \ 转义符
			 
			 
				
		4 清屏 clear 
			
			ctrl + l
			
		
		
		5 输出重定向 >
		
			附加重定向 >> 追加重定向 不会覆盖之前的内容
			
			输入重定向 <
			
			错误重定向 2>
			
		6 分屏 more
		
		7 管道 |
		
			一个命令额d输出 作为 一个命令的输入
			
				ls | more
				
		8 查看和合并文件内容 cat
		
			查看 cat filename1  filename2 ...
			
			合并 cat filename1  filename2  > newfilename
			
		9 切换目录  cd
			
			cd  ~  进入家目录
			
			cd  -  进入上一次目录
		
		10 当前目录 pwd
		
		11 建立目录 mkdir
		
			mkdir -p 递归创建目录
			
		12 删除目录 rmdir
			
			rmdir 只能删除一个空目录
			
		13 删除文件 rm
		
			rm -r 递归删除
			
			rm -f 强制删除
			
			rm -i 交互式删除
			
		14 链接  link
			
			硬链接  ln 源文件  链接文件
			
				两个文件占用相同大小的硬盘空间 即使删除了源文件 链接文件还是存在
				
				类似于复制文件  区别在于一个文件的修改会同步到另一个文件
			
			软连接  ln -s 源文件  链接文件
			
				不占用磁盘空间
			
				快捷方式
				
			文件项目中 增加一个文件名 和 inode的对应关系
				
			注意 如果软连接文件和源文件不在同一个目录中 源文件要使用绝对路径
			
			不能使用相对路径
		
		15 文本搜索  grep
		
			grep打印包含模式的所有行
			
			grep [-options] '搜索内容串'  文件名
			
			-v     显示不包含匹配文本的所有行 相当于取反
			
			-n     显示行号
			
			-i     忽略
		
			正则
			
			^        行首
			
			$        行尾
			
			[a-c]    区间法 确定一个字符
			
			[abcd]   穷举法 权值法
			
			.        匹配一个字符  不是换行符
			
			*        匹配多个字符  可以包含换行符
			
		16 计算文件行数或字数  wc
		
			-l  行数
			
			-w  字数
			
			-c  字节数
			
			-m  字符数    m不能与c一起使用
			
			wc filename
			
				函数  单词数  字节大小
				
		
		17 查找文件 find
		
			在特定目录下查找文件
			
			find path filename
			
			-name    文件名
			
			-size    文件大小
			
				-size 4K  -size 5M  文件大小在4K与5M之间
				
			-perm    权限
			
				-perm 0777
				
		18  拷贝文件 cp
		
				cp  source target
				
				拷贝目录 加 -a
				
			-a		复制目录的时候 保持文件原有属性
			
			-f      删除已经存在目标文件而不提示
			
			-r      复制目录 递归方式
			
			-v      显示进度
			
			-i      交互式
			
		19 移动文件 剪切 mv
		
			移动文件或目录  给文件或目录 重命名
			
			-f     强迫  非交互
			
			-i     交互
			
		20 获取文件类型  file
		
			file filename
			
		21 归档文件  tar
			
			将一系列文件归档到一个大文件中 也可以从归档文件解开以恢复数据
			
			tar [-options] 打包文件名  文件1 目录1...
			
			-c    创建打包文件
			
			-v    详细显示归档解档的详细过程
			
			-f    指定档案文件名称  f 后面一定是.tar文件 所以f必须放到参数中最后一个
			
			-t    列出归档中包含文件
			
			-x    解开档案文件
			
			-z    gzip压缩
			
			归档
			 
			tar -cvf  test.tar a.txt
			
			tar -xvf  test.tar
			
			归档并压缩
			
			tar -czvf  test.tar.gz a.txt
			
			tar -xzvf  test.tar
			
			-c  解压归档指定目录
			
			tar -xzvf  test.tar.gz -c ./test/
			
			// 解压缩到当前目录下test目录下
			
		22 文件压缩解压 gzip
		
			后缀名 gz  对应 -z
		
			gzip [-options] 要压缩的文件名  
			
			-d    解压缩
			
			-r    压缩所有子目录
			
			gizp  test.tar  // 生成 test.tar.gz
			
		23 文件压缩解压 bzip2
		
			后缀名 bz2   对应 -j
		
				tar -cjvf  压缩后文件名  要压缩的文件名1 要压缩的文件名2
				
				tar -xjvf  文件名
		
		24 文件压缩 解压  zip  unzip
		
				后缀名 zip
				
				压缩文件  zip -r 目标文件(没有扩展名)  要压缩的文件名1 要压缩的文件名2
					
					zip myzip 
					
				解压缩文件  unzip -d 解压后目录文件  压缩文件  -c 路径
					
					unzip -d test myzip.zip
					
		25 查看命令的位置  which
		
				which ls
				
		26  查看当前用户  whoami
			
				cat  /etc/passwd // 查看系统用户信息
				
		27 查看登录用户 who
				
			-m 或 am I    只显示运行 who 命令的用户名、登录终端和登录时间
			
			-q 或--count  只显示用户的登录账号和登录用户的数量
			
			-u            在登录时间后显示该用户最后一次操作到当前的时间间隔
			
			-u 或--heading    显示列标题
			
		28 查看登录用户  w
		
				比who命令更强大
				
				
				w -l username
				
				-l 显示详细信息列表，此为预设值
				
				-h 只显示运行 who 命令的用户名、登录终端和登录时间
				
				-s 使用短列表，不显示用户登录时间、JCPU 和 PCPU 时间 
				
				-u 忽略执行程序的名称，以及该程序的 PCPU 时间
				
				
		29 退出登录账户 exit
		
		30 切换用户  su
			
				ubuntu系统用 sudo
				
				su 和 su –命令不同之处在于
				
				su -切换到对应的用户时会将当前的工作目录自动转换到切换后的用户主目录
				
				su			切换到 root 用户
				su root		切换到 root 用户
				su -		切换到 root 用户，同时切换目录到/root
				su - root	切换到 root 用户，同时切换目录到/root
				su 普通用户 	切换到普通用户
				su - 普通用户 切换到普通用户，同时切换普通用户所在的目录
				
		31 添加、删除组账号	groupadd、groupdel
			
				groupadd 新建组账号
				
				groupdel 组账号
				
				cat /etc/group 查看用户组
				
		32 修改用户所在组	usermod
		
			usermod -g 用户组 用户名
			
		33 添加用户账号	useradd
		
			在 Unix/Linux 中添加用户账号可以使用 adduser 或 useradd 命令
			
			因为 adduser 命令是指向 useradd 命令的一个链接
			
			因此，这两个命令的使用格式 完全一样
			
			useradd [参数] 新建用户账号
			
			-m 自动建立目录 
			
			-g 指定组名称
			
			-d <dirname>
			
			指定用户登录系统时的主目录，如果不使用该参数
			
			系统自动在 /home 目录下建立与用户名同名目录为主目录
			
			Linux 每个用户都要有一个主目录，主目录就是第一次登陆系统，用户的默
			认当前目录(/home/用户)
			
			每一个用户必须有一个主目录，所以用 useradd 创建用户的时候，一定给
			用户指定一个主目录
			
			用户的主目录一般要放到根目录的 home 目录下，用户的主目录和用户名是
			相同的
			
			如果创建用户的时候，不指定组名，那么系统会自动创建一个和用户名一
			样的组名
			
			
			useradd -d /home/abc abc -m
			
			创建 abc 用户，如果/home/abc 目录不存在，就自 动创建这个目录
			同时用户属于 abc 组
			
			useradd -d /home/a a -g test -m
			
			创建一个用户名字叫 a，主目录在/home/a，如果 主目录不存在
			就自动创建主目录，同时用户属于 test 组
			
			cat /etc/passwd 查看系统当前用户名
		
		34 设置用户密码	passwd
		
			passwd  username
			
		35 删除用户	userdel
			
			userdel abc(用户名)
			
			删除 abc 用户，但不会自动删除用户的主目录
			
			userdel -r abc(用户名)
			
			删除用户，同时删除用户的主目录
		
		36 查询用户登录情况	last 
		
			不管是哪位用户从哪里登录，管理员都可以通过 last 命令查出，以及是否有
			
			人非法登录
			
		37 修改文件权限	chmod
		
			chmod 修改文件权限有两种使用格式:字母法与数字法。 
			
			字母法:chmod u/g/o/a +/-/= rwx 文件
			
			[ u/g/o/a ]
			
				u		user 表示该文件的所有者
				
				g group 表示与该文件的所有者属于同一组( group )者 即用户组 
				
				o other 表示其他以外的人
				
				a all 表示这三者皆是
			
			+		增加权限
			
			- 		撤销权限
			
			= 		设定权限
			
			r		read 表示可读取，对于一个目录，如果没有 r 权限
			那么就意味 着不能通过 ls 查看这个目录的内容。
			
			w		write 表示可写入，对于一个目录，如果没有 w 权限
			那么就意味着不能在目录下创建新的文件。
			
			x		excute 表示可执行，对于一个目录，如果没有 x 权限
			那么就意味着不能通过 cd 进入这个目录
			
			chmod g=rwx filename
			
			数字法:“rwx” 这些权限也可以用数字来代替
			
			r	读取权限，数字代号为 "4"
			
			w 写入权限，数字代号为 "2"
			
			x 执行权限，数字代号为 "1"
			
			- 不具任何权限，数字代号为 "0"
			
			如执行:chmod u=rwx,g=rx,o=r filename 
			
			就等同于:chmod u=7,g=5,o=4 filename
		
		
		38  修改文件所有者	chown
		
				chown 用户名 文件或目录名
				
		39 修改文件所属组	chgrp 
			
				chgrp 用户组名 文件或目录名
		
		40 查看当前日历	cal
		
		41 显示或设置时间	date
		
			设置时间格式  date  [MMDDhhmm[[CC]YY][.ss]] +format
			
			CC 为年前两位 
			yy 为年的后两位
			
			前两位的 mm 为月
			后两位的 mm 为分钟
			
			dd 为天，hh 为小时，ss 为秒
			
			如: date 010203042016.55
			
			
			显示时间格式	date '+%y,%m,%d,%H,%M,%S'
			
					年 月 日 时 分 秒
					
		42 查看进程信息	ps
		
			进程是一个具有一定独立功能的程序，它是操作系统动态执行的基本单元
			
			ps 命令可以查看进程的详细状况，常用选项(选项可以不加“-”)如下:
			 
			-u 显示进程的详细状态
			
			-x 显示没有控制终端的进程
			
			-w 显示加宽，以便显示更多的信息 
			
			-r 只显示正在运行的进程
			
		43 动态显示进程	top
		
			top 命令用来动态显示运行中的进程
			
			top 命令能够在运行后，在指定的时间 间隔更新显示信息
			
			可以在使用 top 命令时加上-d <interval>来指定显示信息更新的时间间隔。
			
			在 top 命令执行后，可以按下按键得到对显示的结果进行排序:
			
				按键		含义
				
				M		根据内存使用量来排序
				
				P 		根据 CPU 占有率来排序
				
				T   	根据进程运行时间的长短来排序
				
				U   	可以根据后面输入的用户名来筛选进程
				
				k 		可以根据后面输入的 PID 来杀死进程
				
				q   	退出
				
				h   	获得帮助
		44 终止进程	kill
		
			kill 命令指定进程号的进程，需要配合 ps 使用
			
				kill [-signal] pid
			
			信号值从 0 到 15，其中 9 为绝对终止，可以处理一般信号无法终止的进程
			
		
		45 后台程序	&、jobs、fg
		
			用户可以将一个前台执行的程序调入后台执行，方法为:命令 &
			
			如果程序已经在执行，ctrl+z 可以将程序调入后台
			
			jobs 查看后台运行程序
			
			fg 编号(编号为通过 jobs 查看的编号)，将后台运行程序调出到前台
			
				在zsh 时候 使用 fg %number
				
			
		46 关机重启	reboot、shutdown、init	
			
			reboot			重新启动操作系统
			shutdown –r now	重新启动操作系统
			shutdown 		会给别的用户提示
			shutdown -h now 立刻关机，其中 now 相当于时间为 0 的状态
			shutdown -h 20:25  系统在今天的 20:25 会关机 
			shutdown -h +10    系统再过十分钟后自动关机 
			init 0		 关机
			init 6       重启
		
		47 字符界面和图形界面切换
		
			在 redhat 平台下，可通过命令进行切换
		
				init 3 切换到字符界面 
		
				init 5 切换到图形界面
			
			通过快捷键切换(适用大部分平台)
			
				Ctrl + Alt + F2 切换到字符界面
				
				Ctrl + Alt + F7 切换到图形界面
				
		48 检测磁盘空间	df
			
			df 命令用于检测文件系统的磁盘空间占用和空余情况，可以显示所有文件系统
			对节点和磁盘块的使用情况
			
			-a		显示所有文件系统的磁盘使用情况
			
			-m		以 1024 字节为单位显示
			
			-t <fs> 显示各指定文件系统的磁盘空间使用情况 
				
			-T 显示文件系统
		
		49 检测目录所占磁盘空间	du
		
			du 命令用于统计目录或文件所占磁盘空间的大小，该命令的执行结果与 df 类
			似，du 更侧重于磁盘的使用状况
			
				du [选项] 目录或文件名
			
				-a		递归显示指定目录中各文件和子目录中文件占用的数据块
				
				-s		显示指定文件或目录占用的数据块
				
				-b 		以字节为单位显示磁盘占用情况
				
				-l 		计算所有文件大小，对硬链接文件计算多次
		
		50 格式化	mkfs
		
			mkfs 命令相当于 DOS/Windows 系统中的格式化命令，用于创建指定的文件系
			统
			
			mkfs [选项] 设备文件名 [blocks]
			
			-V			详细显示模式
			
			-t <.fs>	指定文件系统类型，默认值为 ext2
			
			-c 		在创建文件系统的同时，进行磁盘坏块检查 blocks 文件系统块的大小
		
		51 应用软件安装和卸载
		
			RPM 的全称为 Redhat Package Manager ，是由 Redhat 公司提出的
			用于管理 Linux 下软件包的软件。它是一种软件打包发行并且实现自动安装的程序
			需要用 rpm 程序安装的软件包，其后缀是.rpm
			并可以对这种程序包进行 安装、卸装和维护
			
			rpm [选项] [软件包名]
			
			-i		指定安装的软件包
			
			-h		使用“#”显示详细的安装过程及进度
			
			-v   	显示安装的详细信息
			
			-q   	查询系统是否已安装指定的软件包
			
			-a   	查看系统已安装的所有软件包
			
			-e   	卸载软件包
			
			--nodeps 配合-e 参数使用，强制卸载不检查依赖项 
			
			--force 强制操作 如强制安装删除等
			
		在 ubuntu 平台，软件的安装可以通过互联网在线安装，更加方便快捷:
			
			sudo apt-get update
			
			// 获得最新的软件包的列表
			
			
			sudo apt-get install xxx
			
			// 从源中安装 xxx 软件
		
			sudo apt-get remove xxx 
			
			// 删除 xxx 软件
		
		52 查看或配置网卡信息	ifconfig
		
			eth0			网络接口名称	
			Link encap		链路封装协议
			Hwaddr			网络接口的 MAC 地址
			Inet addr       IP 地址
			Bcast           广播地址
			Mask			子网掩码
			UP				网络接口状态标识，UP 已经启用，DOWN 已经停用
			BROADCAST		广播标识，标识网络接口是否支持广播
			RUNNING			传输标识，标识网络接口是否已经开始传输分组数据
			MULTICAST		多播标识，标识网络接口是否支持多播
			MTU，Metric		MTU:最大传输单位，单位:字节
							Metric:度量值，用于 RIP 建立 网络路由用
			RX bytes		接收数据字节统计
			TX bytes		发送数据字节统计
			
			RIP
			
			路由信息协议（Routing Information Protocol）
			
			是一种基于距离矢量的路由协议
			
			以路由跳数作为计数单位的路由协议，适用于比较小型的网络环境
			
			MTU
			最大传输单元（英语：Maximum Transmission Unit，缩写MTU）
			是指一种通信协议的某一层上面所能通过的最大数据包大小（以字节为单位）
			最大传输单元这个参数通常与通信接口有关（网络接口卡、串口等）
			
			因特网协议允许IP分片
			这样就可以将数据报包分成足够小的片段以
			通过那些最大传输单元小于该数据报原始大小的链路了。
			这一分片过程发生在 IP 层（OSI模型的第三层，即网络层）
			它使用的是将分组发送到链路上的网络接口的最大传输单元的值
			原始分组的分片都被加上了标记
			这样目的主机的 IP 层就能将分组重组成原始的数据报了。
			
			对于时下大多数使用以太网的局域网来说，最大传输单元的值是 1500 字节
			
			以太网（英语：Ethernet）是一种计算机局域网技术。
			IEEE组织的IEEE 802.3标准制定了以太网的技术标准
			它规定了包括物理层的连线、电子信号和介质访问层协议的内容。
			
			通过 ifconfig 配置网络参数:
				
				只有 root 才能用 ifconfig 配置参数，其他用户只能查看网络配置
				
				ifconfig 网络接口名称 [地址协议类型] [address] [参数]
				
				地址协议类型如:inet(IPv4),inet6(IPv6)等
				
				
				如:ifconfig eth0 inet 192.168.10.254 netmask 255.255.255.0 up
			
			
			-a						显示所有网络接口状态
			
			inet [IP 地址]			设置 IP 地址
			
			netmask [子网掩码]       设置子网掩码
			
			up						启用网络接口
			
			down					关闭网络接口
			
			ifconfig 配置的网络参数在内存中
			计算机重新启动之后就失效了
			
			如果需要 持久有效就需要修改网络接口的配置文件:
				
				redhat 修改/etc/sysconfig/network-scripts/ifcfg-eth0 文件
			
					IPADDR=IP 地址 
					
					GATEWAY=默认网关
			
				ubuntu 修改/etc/NetworkManager/system-connections
							/Wired connection 1 文件
					
					[ipv4]
					method=manual
					addresses1=IP 地址;24;默认网关;
					
		53 测试远程主机连通性	ping
		
				ping 通过 ICMP 协议向远程主机发送 ECHO_REQUEST 请求
				
				期望主机回复 ECHO_REPLY 消息
				
				通过 ping 命令可以检查是否与远程主机建立了 TCP/IP 连接
				
				
				ping [参数] 远程主机 IP 地址
				
				-a			每次相应时都发出声音警示
				-A			表示以实际往返相应时间为间隔，连续发送消息
				-f   		连续不断发送消息，不管是否收到相应
				-n 			只显示主机 IP，不需要把 IP 解释成主机名
				-c 		发送指定次数数据报信息后停止，ping -c 5 192.168.10.25
				-i	每次发送消息时间间隔，默认一秒，ping -i 2 192.168.10.254
				-s 			分组数据大小，默认 56 字节
				-w   		以秒为单位的超时值，一旦超时，就立即停止
				
		54  网络路由设置	route		
					
				route 可以增加，修改，显示路由信息
				
				route [-v] [-A family] add default [gw 默认网关地址] [[dev interface]]
				
				add			增加路由信息
				del			删除路由信息
				-v 			显示路由信息
				-A 			指定网络协议 inet(IPv4),inet6(IPv6) 
				gw 			指定默认网关地址
				dev 		指定网络接口
				
				route add default gw 192.168.1.1 dev eth0
				
		55 监控网络状态	netstat		
			
			netstat 命令监控网络状态，包括接口设置，IP 路由，各种网络协议的统计
			
			netstat 输出信息说明如下
			
				Proto			协议,如:tcp,udp
				Recv-Q			尚未读取的数据字节数
				Send-Q			尚未发送的数据字节数
				Local_address	本地主机地址与端口号
				Foreign_address 远程主机与端口号
				
				State		网络连接状态
				RefCnt		引用计数  表示加接到相应套接字的进程数量
				Flags		标志字段
				Type		套接字类型,如:(SOCK_DGRAM, SOCK_STREAM，SOCK_RAW)
				State		套接字状态
				Path		套接字路径名
				
			netstat 常用命令参数
			
				-a			列出所有端口
				-i			显示网络接口列表
				-at 		所有 tcp 端口
				-au 		所有 udp 端口
				-l   		所有监听端口
				-lt 		tcp 监听端口
				-lu   		指定网络接口
				-s   		显示所有协议统计信息 
				-r   		当前路由状态
				-p			输出中显示 PID 和进程名称，可以与其它开关一起使用，如: -pt
		
		56 文本编辑器 vi/vim
			
			vi 有输入和命令两种工作模式
			
			输入模式(也叫插入模式)用于输入字符
			
			命令模式则是用来运行一些编排文件、存档以及离开 vi 等操作命令
			
			当执行 vi 后，首先进入命令模式，此时输入的任何字符都被视为命令
				
			
			1) 打开文件
				
				vi filename
				
				打开或新建文件，并将光标置于第一行行首，
				
				如果文件不存 在，则会新建文件	
				
			2) 编辑文件  i a
			
			3) 保存文件
				
				一定要先退出插入模式(按 Esc 进入命令模式)
				
				然后，shift + zz (按住 “shift” + 按两下“z”键) 
				
				即可保存退出当前文件
				
		
		57 vi 实用命令
		
				1) vi 的插入模式
				
					a	光标位置右边插入文字
					A	光标所在行首插入文字
					
					i	光标位置当前处插入文字
					I	光标所在行尾插入文字
					
					o(字母) 	光标位置下方开启新行
					O(字母) 	光标位置上方开启新行
					
					
				2) vi 的退出
				
					ZZ(shift+z+z)	保存退出
					:wq				保存退出
					:x(小写)			保存退出
					:w filename 	保存到指定文件
					:q				退出，如果文件修改但没有保存，会提示无法退出
					:q!				退出，不保存
					:!命令			暂时离开 vi，执行命令
					
					 
				3) vi 的删除和修改功能
				
					[n]x			删除光标后 n 个字符
					[n]X			删除光标前 n 个字符
					
					D 				删除光标所在开始到此行尾的字符
					[n]dd			删除从当前行开始的 n 行
									(准确来讲，是剪切，剪切不粘贴即为 删除)
									
					dG 				删除光标所在行开始到文件尾的所有字符
									
					[n]yy			复制从当前行开始的 n 行
					
					p               把粘贴板上内容复制到当前行
					
					J 				合并两行
					
					. 				执行上一次操作
					
					u				撤销前一个命令
					
			4) vi 的行定位功能
			
				Ctrl + f		向前滚动一个屏幕
				
				Ctrl + b 		向后滚动一个屏幕
				
				nG 或 ngg 		到指定行，n为目标行数
				
				gg 				到文件第一行行首
				
				G(大写) 			到文件最后一行行首，G 必须为大写
				
				:$				到文件最后一行行首
				
				
				/内容   			查找指定内容
				 
			5) vi 的文本查找功能
			
				/字符串		查找指定字符串
				
				n			寻找下一个
				
				N			回到前一个
				
				? 			寻找上一个
				
				/^字符串 	查找以字符串开始的行
				
				/字符串$ 	查找以字符串结尾的行
				
				/a.b		查找字符串 a 任意字符 b
				
			6) vi 的替换功能
			
				r				替换当前光标字符
				
				:r 文件名 		在光标当前位置下一行载入另一个文件 
				
				:s/p1/p2/g  	将当前行中所有 p1 均用 p2 替代
				  
				:g/p1/s//p2/g 	将文件中所有 p1 均用 p2 替代 
				
				:n1,n2s/p1/p2/g 将 n1 到 n2 行中所有 p1 均用 p2 替代
				
			7) vi 的 set 指令
				
				:set ic			搜寻时不区分大小写
				
				:set noic		搜寻时区分大小写
				
				:set nu			显示行号
				
				:set nonu       不显示行号
				
		58 SSH
			
			SSH 为 Secure Shell 的缩写，
			由 IETF 的网络工作小组(Network Working Group)所制定
			SSH 为建立在应用层和传输层基础上的安全协议。
			
			SSH 是目前较可靠，专为远程登录会话和其他网络服务提供安全性的协议。
			常用于远程登录，以及用户之间进行资料拷贝。
			利用 SSH 协议可以有效防止远程管理过程中的信息泄露问题。
			SSH 最初是 UNIX 系统上的一个程序，后来又迅速扩展到其他操作平台。
			SSH 在正确使用时可弥 补网络中的漏洞。
			SSH 客户端适用于多种平台。
			
			几乎所有 UNIX 平台—包括 HP-UX、Linux、AIX、
			Solaris、Digital UNIX、Irix，
			以及其他平台，都可运 行 SSH。
			使用 SSH 服务，需要安装相应的服务器和客户端。
			客户端和服务器的关系:如 果，A 机器想被 B 机器远程控制，
			那么，A 机器需要安装 SSH 服务器，B 机器需 要安装 SSH 客户端。
				
			1 Linux 平台相互远程
					
				ssh -l username hostip
				
				-l 选项	 	是字母“l”，不是数字“1”
				
				username 	被远程登录的用户名 
				
				hostip 		被远程登录的 ip 地址
				
				注意:远程登录的两台机器必须要能 ping 通
				
				查看需要被远程机器的 ip: inconfig
			
			2 Windows 远程登录 Linux
			
				Xmanager 是一款小巧、便捷的浏览远端 X 窗口系统的工具。
				
				它包含 Xshell、Xftp 等软件
				
				Xshell:是一个 Windows 平台下的 SSH、TELNET 和 RLOGIN 终端软件。
					它使得用户能轻松和安全地在 Windows 平台上访问 Unix/Linux 主机。
				
				
				Xftp:是一个应用于 Windows 平台的 FTP 和 SFTP 文件传输程序。
					 Xftp 能安全地在 Unix/Linux 和 Windows 平台之间传输文件。
				
				Linux 默认采用的编码格式是 UTF-8
				
				Windows 默认采用的编码格式是 ANSI(GB2312、GBK)
				
				所以需要设置一下相应编码
				
				
			
			
			
				
			3 远程传输文件
			
				0 sftp
				
					sftp username@host
					
					下载文件或文件夹
						
						get -r filename
						
						-r 表示递归
						
						lpwd 命令来查看 - pwd 前加了 l 表示 local
						
						lcd 可以切换本地的当前目录
					
					上传文件或文件夹
					
						put -r filename
						
						注意 在上传目录的时候  一定要远端的建立同名目录
				
				1 Linux 平台相互传输  scp
					
					SSH 提供了一些命令和 shell 用来登录远程服务器。
					在默认情况下，不允许用户拷贝文件
					但还是提供了一个“scp”命令
				
					RemoteUserName		远程用户名
					RemoteHostIp		远程 ip
				
					RemoteFile			远程文件，可带上路径
					
					FileName   拷贝到本地后的名字 可带上路径 不带路径拷贝到当前目录
			
					本地文件复制到远程:
						
						scp FileName RemoteUserName@RemoteHostIp:RemoteFile 
						
						scp FileName RemoteHostIp:RemoteFolder
						
						scp FileName RemoteHostIp:RemoteFile
			
					本地目录复制到远程:
					
						scp -r FolderName RemoteUserName@RemoteHostIp:RemoteFolder 
						
						scp -r FolderName RemoteHostIp:RemoteFolder
					
					 远程文件复制到本地:
					 	
						scp RemoteUserName@RemoteHostIp:RemoteFile FileName 
						
						scp RemoteHostIp:RemoteFolder FileName
						
						scp RemoteHostIp:RemoteFile FileName
					 
					 远程目录复制到本地:
					 	
						scp -r RemoteUserName@RemoteHostIp:RemoteFolder FolderName 
						
						scp -r RemoteHostIp:RemoteFolder FolderName
						
				2 Windows 和 Linux 相互传输文件
					
					Xmanager自带的 Xftp
					
					是一个应用于 Windows平台的 FTP 和 SFTP 文件 传输程序
					
					Xftp 能安全地在 Unix/Linux 和 Windows 平台之间传输文件
					
					
		59 webserver环境搭建
			
			http.tar.gz 是用 C 语言编程的一个简单版 webserver
			
				1	把 http.tar.gz 拷贝到 Linux 环境中
				
				2	解压压缩包
				
				3	进入解压后的目录，终端敲 make 编译代码
				
				4	如果是 RedHat 环境，需要额外配置一下防火墙
				
				5	root 用户启动或关闭 web 服务
					
					./myhttp start
					
					myhttp stop
					
					myhttp end
					
		 目录如果没有执行权限 就不能打开了
		 
		 
