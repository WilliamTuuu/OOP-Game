#pragma once
namespace game_framework
{
	/////////////////////////////////////////////////////////////////////////////
	// 這個class提供可以用鍵盤或滑鼠控制的擦子
	// 看懂就可以改寫成自己的程式了
	/////////////////////////////////////////////////////////////////////////////

	class Map
	{
	public:
		int  GetWidth();                    //取得背景寬度
		int  GetHeight();                   //取得背景高度
		int  ScreenX(int x);    // 螢幕 x 座標
		int  ScreenY(int y);    // 螢幕 y 座標
		void Initialize();     // 設定為初始值
		void LoadBitmap();   // 載入圖形
		void ReadMap();      //載入地圖
		void OnMove(int, int);               // 地圖移動
		void OnShow();      // 將圖形貼到畫面
		void SetXY(int nx, int ny);         // 設定螢幕畫面左上角的座標
		bool isEmpty(int x, int y);         // 判斷碰壁;
	protected:
		CMovingBitmap background;   // 地圖
		CMovingBitmap block;     //顯示地形圖
	private:
		int sx, sy;       // 左上角座標
		//int mapSize_X, mapSize_Y;   //地圖所切的格數
		int Map1[30][40] = { 0 };

	};
}
