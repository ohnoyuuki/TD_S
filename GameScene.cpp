#include "GameScene.h"

//初期化
void GameScene::Initialize() {
	//ファイル名を指定して テクスチャの読み込み
	textureHandle_ = TextureManager::Load("uvChecker.png");

	// スプライトの生成
	sprite_ = Sprite::Create(textureHandle_, {100, 50});
}

// 更新
void GameScene::Update() {
	//スプライトの今の座標を取得
	Vector2 position = sprite_->GetPosition();
	//座標設定
	position.x += 2.0f;
	position.y += 1.0f;
	//移動した座標をスプライトに反映
	sprite_->SetPosition(position);

}

// 描画
void GameScene::Draw() {
	// スプライトの描画前
	Sprite::PreDraw();

	sprite_->Draw();

	// スプライトの描画後
	Sprite::PostDraw();

}

// デストラクタ
GameScene::~GameScene() {
	// スプライトの解放
	delete sprite_;
}
