#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main(int argc, char *argv[])
{
	Mat im = imread("test.png", 0);		// 入力画像をグレースケールで取得
	if (im.empty()) return -1;

	int A = countNonZero(im);			// 白色領域の面積(ピクセル数)を計算
	printf("A=%d\n", A);				// 計算結果を表示

	return 0;
}
