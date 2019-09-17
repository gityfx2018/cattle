/* 思路：此题代码很简单，但是思想却不好理解，我们每次拿石头，一共有两种情况，A：石头总数为4的倍数，B：石头总数不为4的倍数，为什么我们会关注4的倍数呢。
我们可以采取数学归纳法证明一下（证明对于4的倍数而言不管怎么拿都会得到还是4的倍数从8开始证明），就是因为对于4而言，谁面对4谁就输了，
因为不管你拿1, 2, 3个剩下的都会被一次拿完，而对于2 * 4 = 8个，面对8的时候不管拿x(1, 2, 3)个另一个人都可以4 - x个使得剩下的为4个也就是输了（所以n = 8时成立）。
我们推广到4k数而言，当第一个人拿x（1, 2, 3）, 第二个人就拿4 - x所有得到了4k - x + (4 - x) = 4 * (k - 1)也为4的倍数（所以当数为4k而言成立）; 所以数学归纳法成立，
所以对于任意4的倍数而言每次减小4最后都会得到4就代表着遇到4的倍数的人就输了，而对于情况B而言为什么就赢了呢？，因为对于一个不为4的倍数的值4* n > x > 4 * (n - 1)，
x处于两个4的倍数之间他们之差为4，由于x不为4的倍数，所以，x距离最近的4的倍数值最大为3，所以只要面对到不是4的倍数的值我们一定可以取走（1, 2, 3）中的某个值导致剩下的值为4的倍数，
而面对4倍数的人一定输（已经证明）。所以我们只需要关注4的倍数的值即可。*/
class Solution {
public:
	bool canWinNim(int n) {
		return n % 4 != 0;
	}
};