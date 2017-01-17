# ts3plugins

## TS3入室読み上げプラグイン
TS3 でチャンネル入室者の名前を棒読みちゃんで読み上げるプラグインです。
棒読みちゃんとの接続は Socket通信（ネットワーク通信）を使っています。 棒読みちゃん読み上げプラグイン が動作しているなら設定はたぶん大丈夫でしょう。

### 動作環境
+ TS3 Windows 64bit版 3.1 以降 (3.0.x では ver.0.5 を使用してください)
+ 棒読みちゃん (最新の Ver. 0.1.11.0 beta16 を推奨)
+ Windows 64bit版のみ (テストは Windows 10 64bit 版でしかしてません)
+ VC++ 2015 ランタイム (Microsoft Visual C++ 2015 Redistributable (x64))

### インストール
1. nyushitsu_plugin の配布パッケージをダウンロードする
2. 適当なフォルダにファイルを展開する
3. nyushitsu_plugin.ts3_plugin をダブルクリックして実行する
4. TS3 を起動し、メニュー [設定]-[プラグイン] で "Nyushitsu Plugin" のチェックボックスを有効にする

ダブルクリックしても TS3 のプラグインインストールウィンドウが開かない場合は TS3 が正常にインストールされているかどうか確認してください。

### 使用方法
+ 棒読みちゃんを起動してから TS3 を起動する
+ 必要に応じてメニュー [プラグイン]-[Nyushitsu Plugin]-[Settings] で設定を行う
+ TS3 デフォルトの入室アナウンス (英語のやつ) はオフになっていないので設定で消しておく
+ チャット読み上げ機能を使う場合は棒読みちゃん読み上げプラグインを無効にしておく

### フイルタ
+ ニックネームの記号以降は削除します　(記号で始まる名前は最初の記号列を削除します)
+ ニックネーム中の数字は飛ばします
+ チャット内の URL リンクは単に "URL" と読み上げます
+ 長文チャット (140字を超えるくらい) は読み上げを省略します

### 変更点
+ 0.6: TeamSpeak 3.1 対応 (3.0.x では ver. 0.5 を使用してください)
+ 0.5: 3人連続する移動があった場合はしばらく部屋移動読み上げを中止する
+ 0.4: チャット読み上げ機能を追加　(棒読みちゃん読み上げプラグインと機能がかぶります)
