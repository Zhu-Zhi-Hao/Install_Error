#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
	char var1[66];
	char var2[66];
	system("clear");
	cout << "ZhuZhiHao@ZhuZhiHao:~$";
	cin.getline(var1,66);
	for (int i = 0; i <=100; ++i)
	{
		cout << "\r正在读取软件包列表... " << i << "%" << flush;
		usleep(20000);
	}
	usleep(200000);
	cout << "\b\b\b\b" << "完成" << endl;
	usleep(200000);
	for (int o = 0; o <=100; ++o)
	{
		cout << "\r正在分析软件包的依赖关系树... " << o << "%" << flush;
		usleep(20000);
	}
	usleep(200000);
	cout << "\r正在分析软件包的依赖关系树        " << flush;
	usleep(200000);
	cout  << endl << "将会安装下列额外的软件包：" <<endl <<"  GirlFriend" << endl;
	usleep(50000);
	cout << "下列【新】软件包将被安装：" << endl << "  GirlFriend" << endl << flush;
	usleep(50000);
	cout << "升级了 0 个软件包，新安装了 1 个软件包，要卸载 0 个软件包，有 0 个软件包未被升级。" << endl << flush;
	usleep(50000);
	cout << "需要下载 998 kB 的软件包。" << endl;
	cout << "解压缩后会消耗掉 9,998 kB 的额外空间。" << endl;
	cout << "您希望继续执行吗？ [Y/n]";
	cin.getline(var2,66);
	for (int j = 0; j <=998; ++j)
	{
		cout << "\r获取：1 https://zhu-zhi-hao.github.io/daydream/i_will_have_a_GirlFriend_amd64 " << "[" << j << " kB]" << flush;
		usleep(2000);
	}
	usleep(400000);
	cout << endl << "下载 998 kB，耗时 2秒 (499 kB/s)" << flush;
	usleep(400000);
	cout << endl;
	for (int k = 0; k <=100; ++k)
	{
		cout << "\r正在从软件包中解出模板：" << k << "%" << flush;
		usleep(2000);
	}
	usleep(400000);
	cout << endl << "正在预设定软件包 ..." << flush;
	usleep(400000);
	cout << endl << "正在选中未选择的软件包 GirlFriend:amd64。" <<flush;
	usleep(400000);
	cout <<endl;
	for (int l = 0; l <=100; ++l)
	{
		cout << "\r(正在读取数据库 ... " << l << "%" << flush;
		usleep(2000);
	}
	usleep(400000);
	cout << "\r(正在读取数据库 ... 系统当前共安装有 214429 个文件和目录。)" << flush;
	usleep(400000);
	cout << endl << "正准备解包 .../GirlFriend_amd64.deb ..." << flush;
	usleep(400000);
	cout << endl << "正在解包 GirlFriend：amd64.deb ..." << flush;
	usleep(400000);
	cout << endl << "依赖关系问题使得 GirlFriend 的配置工作不能继续：" << flush;
	usleep(50000);
	cout << endl << "  GirlFriend 依赖于 YOUR_FACE（>> 0.0.1）；然而：" << flush;
	cout << "系统中 Face 的版本为 0.0.0。";
	usleep(400000);
	cout << endl << "处理软件包 GirlFriend （--install）时出错：";
	cout << endl << "  依赖关系问题 - 仍未被配置";
	usleep(400000);
	cout << endl << "在处理时有错误发生：";
	cout << endl << "  GirlFriend " <<flush;
	usleep(400000);
	cout << endl << "E: 无法安装的软件包。" <<endl;
	return 0;
}
