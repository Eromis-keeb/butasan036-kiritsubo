
![IMG_7344](https://github.com/user-attachments/assets/cb65861d-41fa-49fe-8ec5-282f44eb5a7e)

# 桐壷（夕霧） 共通 ビルドガイド
桐壷は以下の特徴を備えるキーボードです。
- 36キーQAZオーソリニア配列（直交配列、サムクラスタ変則）
- １つのロータリーエンコーダー（プッシュボタン付き）
- ２つのトグルスイッチによる機能変更（レイヤー変更）
- LEDによるライティング（インジケーターの役割もある）
- 花柄をあしらった標準プレート
- 自由に柄など（0.5mm以下の紙など）をあしらえる額縁プレート
- - ※作例では千代切り紙（バックストリートファクトリー製）を使用した例です。キットには同梱されません。  

ファームウェアはVial対応です。  

vialのソフトウェアから自由にキーマップを変更可能です。




## 必要な物

### キット付属のもの

部品|個数
--|--
桐壷 基板|x1
トッププレート（アクリル）|x1
ミドルプレート上|x1
ミドルプレート下|x1
額縁ミドルプレート上|x1
額縁ミドルプレート下|x1
ボトムプレート（アクリル）|x1

### 各自用意するもの
部品|個数
--|--
RP2040-ZERO|x1
MX用スイッチソケット|x36
SK6812MINI-E |x36
Millmax（なくても作れます）※非対応基板もあり |x5
高さ2.0mmコンスルー(12ピン) |x2
SMDダイオード |x37
EC12互換ロータリーエンコーダ(プッシュスイッチ付き)※遊舎工房さんの高さ17.5mmの物を想定 |x1
チップ抵抗 2012 1KΩ |x2
MOSFET 50V300mA BSS138 |x1
トグルスイッチ|x2
スペーサー（9mm）|x9
M2ネジ（5-6mm）|x9
M2ネジ（7-8mm）|x9
MXキースイッチ |x36
MXキーキャップ |x36
ロータリーエンコーダーノブ（直径22mmくらいまで）|x1
ゴム脚 |x2〜４


部品はTALPKEYBOARDさん、遊舎工房さん、秋月電子通商さん、マルツオンラインさんで調達しています。<br/>
<br/>
<br/>
## 組み立て
基板部分は桐壺基板を使用して解説していきますが、夕霧でもキーの数が違うだけで内容は同じなので適宜読み替えてください。<br/>
ところどころ別基板の写真が使われいる箇所がありますが、こちらも適宜読み替えて眼の前の基板と照らし合わせて組み立てを行ってください。
<br/>
写真でマイコンが既に付いているものがありますが、組み立て上確認しながらやりたい場合は先にマイコンのはんだ付けをしてから作業すると確実になります。<br/>
但し、はんだ付けに慣れていない場合は、マイコンを付けた状態でLEDやSMDダイオードなど細かい部品は取り付け辛い場合があるため、ここではマイコンを付けない状態を前提として説明をしていきます。<br/>

![IMG_7268](https://github.com/user-attachments/assets/83c45d9f-0df4-4102-992e-d6bb0a691be9)

LED→SMDダイオード→スイッチソケットの順ではんだ付けします。<br/>
<br/>
<br/>
<br/>

### 1.LEDの取り付け
レベルシフト回路にチップ抵抗とMOSFETをはんだ付け→LEDのはんだ付けの準で処理していきます。
#### 1-1.チップ抵抗、MOSFETの取り付け
![](image/480285463-915f73e8-3a22-4d67-ae6d-2d71322a0dd8.jpg)
<br/>
<br/>
<br/>

このチップ抵抗と
![IMG_6976](https://github.com/user-attachments/assets/3d64ee09-0674-4a2f-b3a6-4ccfee5e124c)

<br/>
<br/>

このMOSFETを基板にはんだ付けしていきます。
![IMG_6977](https://github.com/user-attachments/assets/5d748084-6dd7-42fe-8b63-9e23fb46d3f5)

<br/>
<br/>
<br/>

基板裏面の赤枠の部分にはんだ付けしていきます。
![IMG_7288](https://github.com/user-attachments/assets/c51157f7-9c86-458f-9a45-57fbd4add298)

![IMG_6978](https://github.com/user-attachments/assets/1066a164-ddc4-4c4d-a158-0bed5a185879)

<br/>
<br/>

フラックスを塗布してから青枠のように片側に予備はんだをしていきます。
はんだごてにごく少量はんだを乗せてからパッドにこて先をあて、こて先を少し立てるようにするとはんだが流れて乗りやすくなると思います。
![IMG_6980](https://github.com/user-attachments/assets/d4f99376-4a9d-48b0-a0e3-304a54873160)

<br/>
<br/>

チップ抵抗、MOSFETを設置場所の少し横に置き、ピンセットなどで保持してスッと横にスライドできる状態にしておいてから、
予備はんだをこて先で溶かし部品をスライドさせれば上手く付けられると思います。<br/>
スライドさせたら、はんだごてを離し１−２秒ほど部品をそのまま保持すると上手く行きます。<br/>
はんだごてより先に保持した部品を動かさないように気をつけましょう。
![IMG_7290](https://github.com/user-attachments/assets/80c3ec40-5fb8-4268-a2b5-c52abaccdd8a)



<br/>
<br/>

片側がきっちり固定できたら反対側もはんだ付けしていきます。<br/>
![IMG_7294](https://github.com/user-attachments/assets/2ce718f5-375b-4984-8ae8-3cbc50bd3005)


<br/>
<br/>
<br/>

#### 1-2.LED本体を取り付け
<br/>
<br/>
基板裏面のLED1-LED42の部分にLED本体をはんだ付けしていきます。<br/>

![IMG_7270](https://github.com/user-attachments/assets/04035c06-9f1c-4477-a583-253df22f24e2)

<br/>
<br/>
赤枠部分Gndの表記の部分にこれまでの要領と同じに予備はんだをしていきます。

![IMG_6986](https://github.com/user-attachments/assets/cfc7f62b-657e-446c-8aac-ce780027e952)

<br/>
<br/>
LED本体オレンジ枠のように切り欠きの部分と予備はんだをしたGndの部分を合わせるようにLEDを設置します。

![IMG_6987](https://github.com/user-attachments/assets/92e451f6-9ef9-4ca4-97b9-82680681c663)

<br/>
<br/>
設置をするとこのようになります。

![IMG_6988](https://github.com/user-attachments/assets/8cbd83dc-d4f7-4b57-ae28-24f5f5b7a637)

<br/>
<br/>
ピンセットなどでLED本体をしっかり固定し、はんだごてで予備はんだを溶かしてはんだ付けします。<br/>
しっかり固定していればはんだが溶けると自然と水平になるので、まっすぐになっていることを確認したらはんだごてを離します。<br/>
この際もLED本体は固定したままにし、はんだごてを離して1−2秒してから固定を解除するようにするとうまく行きます。<br/>
水平になっていなかったりズレたまま固定してしまった場合は、慌てず少し間を置いてから再度ピンセットなどでしっかりと固定した状態ではんだを温め直して修正してください。<br/>
<br/>
<br/>

同じ要領で全てのLEDのGnd部とLED本体の切り欠き部をはんだ付けしていきます。

![IMG_7280](https://github.com/user-attachments/assets/d3fb49e1-6464-48bc-887b-6df833726cda)


<br/>
<br/>

続けてDIｎ、DOut、VCCというように順番にはんだ付けしていきます。
はんだごてにはんだを乗せてからパッドに当てピンの根本から滑らすようにすると綺麗にできると思います。
長い間当てすぎないようにしましょう。1−2秒は大丈夫な気がします。
![IMG_7301](https://github.com/user-attachments/assets/244db11a-9b7a-41e1-b533-bc9c2cc06c94)


<br/>
<br/>

### 2.SMDダイオードの取り付け
<br/>
<br/>
SMDダイオードをはんだ付けしていきます。<br/>

SMDダイオードには図の赤枠内のように縦線が入っています。

![406658558-03dcead0-b42c-49c8-963d-3cf0ec3464ec](https://github.com/user-attachments/assets/c20f0e98-ccdc-44d6-b3e5-5fca8e272cee)
<br>
<br>
基板緑枠内にも同じように縦線が入っている場所があります。
![IMG_6993](https://github.com/user-attachments/assets/f7f76421-2a06-4c73-84a7-74037d2cc11e)
<br/>
<br/>
予備はんだをしたら・・
![IMG_6994](https://github.com/user-attachments/assets/5b08fded-789e-4359-ad67-5e2ae09606b3)
<br/>
<br/>
その縦線と、緑枠内の基板上の縦線の向きが合うようにSMDダイオードを配置します。
![IMG_6995](https://github.com/user-attachments/assets/e4df4da0-299c-4268-bf1b-c33f2a7f1948)
<br/>
<br/>
チップ抵抗の時と同じ要領で予備はんだを溶かし、SMDダイオードをスライドさせてはんだ付けします。
![IMG_6996](https://github.com/user-attachments/assets/d39a79d9-5353-4875-be26-26d40d783d92)
<br/>
<br/>
LEDの時と同じ要領で縦線の向きに注意しながら全てのSMDダイオードの片側をはんだ付けしていきます。<br/>
それが出来たら反対側もはんだ付けしていきます。
![IMG_7305](https://github.com/user-attachments/assets/f835735d-5859-497c-a97e-27bf47cfc53f)

<br/>
<br/>
<br/>

### 3.スイッチソケットの取り付け
<br/>
<br/>

![IMG_7306](https://github.com/user-attachments/assets/12efc935-6b9e-4e0e-b541-5280ecb12dcf)<br/>
<br/>


MXスイッチソケットを取り付けていきます。<br/>
<br/>
緑枠内、赤枠の場所に予備はんだをしていきます。<br/>
要領はこれまでと同じで、フラックスを塗布→はんだを流し込むの順です。<br/>

![IMG_7077](https://github.com/user-attachments/assets/b5a3c895-7141-430e-9302-8483a2070a9b)<br/>

<br/>
赤枠内のように基板全体のスイッチソケット印刷の場所全てに同じように予備はんだをしていきます。<br/>
面積が大きいのでやり易いと思います。<br/>

![IMG_7078](https://github.com/user-attachments/assets/8dfdfbd3-1e32-4696-8c7c-62d920df8bc6)<br/>
<br/>
次にスイッチソケット本体を乗せていきます。<br/>

<br/>

![IMG_7308](https://github.com/user-attachments/assets/8927fc8b-69c9-47b6-853f-f71225608940)<br/>
乗せきったら予備はんだをした箇所をはんだごてで温めて溶かし、はんだ付けしていきます。<br/>
はんだを溶かす際、ピンセットなどでソケット本体をしっかり押さえてやることがポイントです。<br/>
浮いてしまった場合は慌てずしっかり押さえながら溶かし直しせば大丈夫です。<br/>

![IMG_7079](https://github.com/user-attachments/assets/80615f80-0fca-4fcd-a86f-ad81147b7305)<br/>
<br/>
片側のはんだ付けが終わったらもう片側にもはんだを流し込みスイッチソケットを固定していきます。<br/>
この際、横側などからしっかり確認をし、ソケットが浮いていないかを確認しながら行ってください。<br/>

<br/>

![IMG_7311](https://github.com/user-attachments/assets/24687c95-f8f3-4516-bc6c-a27c1f17ef99)<br/>
<br/>
<br/>


### 4.トグルスイッチの取り付け
<br/>
<br/>

トグルスイッチをはんだ付けしていきます。2つ付けます。
![IMG_7287](https://github.com/user-attachments/assets/4583477e-0d3f-4b78-9093-f3ab22599c79)

<br/>
<br/>

基板表に取り付け、裏面からはんだ付けしていきます。<br/>
基板表面、TG1,TG2にそれぞれ１つずつ順番に付けていきます。<br/>
<br/>
<br/>
裏面にフラックスを塗布したら、表面からトグルスイッチを基板の穴に合わせ差し込みます。<br/>
まっすぐ傾きがないように基板に対して水平にして固定（テープなどでも可）します。<br/>

![IMG_7292](https://github.com/user-attachments/assets/1328f909-6c77-4da5-baf4-623caf7613a3)

<br/>
<br/>
はんだごてにはんだを少量乗せて・・・

![IMG_7003](https://github.com/user-attachments/assets/3ad38898-30b8-43a6-ae3c-565abb9efc1c)
<br/>
<br/>
裏側の真ん中のピンにはんだを流し込みます<br/>
この時、押し当てたこて先の力でスイッチが斜めにならないようにしっかりと固定して流し込んでください。<br/>
テープなどでガチガチに固めてもよいですが、私は指で上下をしっかり挟んでから中空で流し込んでいます。<br/>
はんだを乗せたこて先でランドを少し温めてからこて先を立てるようにすると、スッと流れていくので指で押さえながらでも可能です。<br/>
フラックスをしっかり塗布しておけばできるはず。<br/>
はんだごてによる火傷に十分注意して最新の注意を払って行ってください。<br/>
![IMG_7004](https://github.com/user-attachments/assets/a332b878-1efd-40af-b6ce-bb12f6af366a)
<br/>
<br/>
正面、左右から水平を確認します。
![IMG_7005](https://github.com/user-attachments/assets/28e49aa7-0e30-4993-8e46-6fd7dd068090)
<br/>
<br/>

水平の確認が取れたら同じ要領で左右のピンにもはんだを流し込んで固定していきます。<br/>
水平になっていない場合、こて先で中央ピンのはんだを再度温め直して修正してください。<br/>
はんだが溶けている間は修正ができます。<br/>
ここで修正をしておかないと後からのリカバリーは非常に難しくなるので、水平確認は確実に行いましょう。<br/>
![IMG_7006](https://github.com/user-attachments/assets/1bbd286a-b478-41a3-bcfd-b5204f6d2627)
<br/>
<br/>

３つのピンの固定が出来たら同じ要領、真ん中→水平確認→左右ピンの順番でTG2もはんだ付けしていきます。
![IMG_7007](https://github.com/user-attachments/assets/5a849d9c-f1d7-4011-94bb-4814b2ea1ded)
<br/>
<br/>
<br/>




### 5.ロータリーエンコーダーの取り付け
<br/>
<br/>

#### 5-１.Millmaxの取り付け
<br/>
<br/>
Millmaxを使わずに組み立てることも可能です。その場合はこの部分を飛ばし直接ロータリーエンコーダーを取り付けてください。<br/>
Millmaxを１つのロータリーエンコーダーに対して5個はんだ付けしていきます。<br/>
非常に小さい部品かつ、そこそこ高価なのでなくさないように気をつけて作業してください。<br/>

![IMG_7010](https://github.com/user-attachments/assets/15054044-bcfc-4493-9579-a3180693c7cb)

<br/>
<br/>
オレンジ枠（１つのロータリーエンコーダーの取り付け部）内の、青枠内の上２つ、下３つの穴に”表面”から部品を差し込みます。<br/>
表裏間違えると取り付け出来なくなるので注意してください。<br/>

![IMG_7011](https://github.com/user-attachments/assets/e36241b5-aa96-4afe-8dfd-1e27269ce099)
<br/>
<br/>

こちらは裏側<br/>
黄色枠内−裏側の穴にフラックスを塗布します。<br/>
![IMG_7012](https://github.com/user-attachments/assets/11b46d1d-4b8b-4e46-94b3-69721f66a9a2)
<br/>
<br/>

こちらは表面<br/>
緑枠内−表側の穴に部品を合計5個差し込みます。<br/>
![IMG_7013](https://github.com/user-attachments/assets/0c6fc2dc-d63f-45bb-a84b-1522a1c186a7)
<br/>
<br/>
差し込めたら裏向きにしても外れないようにマスキングテープなどでしっかり固定します。<br/>
![IMG_7014](https://github.com/user-attachments/assets/cf45bb77-c360-4d3c-85c7-e587d2dc0749)
<br/>
<br/>
上下両方とも固定します。<br/>
![IMG_7015](https://github.com/user-attachments/assets/cadc67cd-a510-4f50-a635-b7565d1d78e1)
<br/>
<br/>
テープで固定出来たら裏返します。<br/>
裏側赤枠内の部品が飛び出ている周りのランド部分にこれまでと同じ要領ではんだを流し込み固定します。<br/>
この際、飛び出ている穴にはんだが入ってしまわないように注意してください。<br/>
差し込めなくなってしまいますので。<br/>
![IMG_7016](https://github.com/user-attachments/assets/80ed164e-756a-4df0-b121-7346a80d914f)
<br/>
<br/>
固定ができたら他の２箇所も同じ要領でMillmaxを取り付け→固定していきます。

<br/>
<br/>

#### 5-2.ロータリーエンコーダー本体の取り付け
<br/>
<br/>

ロータリーエンコーダー本体を取り付けていきます。<br/>
穴の位置に合うように足を多少広げてから刺し込みます。<br/>
差し込む際、上から垂直に力をかけると足が曲がる可能性が高いので、片側をある程度差し込んでからもう片側を調整しながら差し込むと上手くいきます。<br/>
横から見て水平になっているか確認ながらしっかりと差し込みます。<br/>
Millmaxを使わずに直接取り付ける場合は、この時点でマスキングテープなどでしっかりと固定してから、多めのはんだを流し込んでしっかり固定してください。<br/>
![IMG_7017](https://github.com/user-attachments/assets/5f861ef2-c253-4738-be6f-531336a1e584)
<br/>
<br/>

<br/>
<br/>
Millmaxを使う場合はロータリーエンコーダーは脱着が可能ですが、無理やり外したりすると足が折れてしまう可能性があるため頻繁な差し替えは推奨していません。<br/>
使い方によってクリック感のないタイプのエンコーダーに切り替えたり、エンコーダーの位置に普通のスイッチが必要になった際取り外せるようにした仕様です。<br/>
また、使用するエンコーダーノブによっては軸がタイトで無理やり引き抜こうとするとエンコーダー自体もすっぽ抜けてしまう可能性もあるので、注意して取り外しするようにしてください。<br/>
<br/>
<br/>
<br/>


### 6.マイコン(RP2040−ZERO)の取り付け
<br/>
<br/>
マイコンのRP2040−ZEROを取り付けていきます。<br/>
※ここででは取り付け方を説明しますが、マイコンの不良などの可能性もあるため、<br/>
実際のところは後述する、7.マイコンにVialファームウェアを書き込む項目を先にやってから取り付けるほうが懸命です。<br/>
コンスルーを使用しているので最悪の場合取り外して新しいものに交換は出来ますが、<br/>
コンスルーが勿体ないので。<br/>


![IMG_7120](https://github.com/user-attachments/assets/55fef620-5e93-4884-b67a-6b1e555991ed)
<br/>
<br/>


はじめにコンスルーを取り付けます。<br/>
![IMG_7121](https://github.com/user-attachments/assets/b1f98b22-a8a5-48bc-9606-8eb73b9180d7)
<br/>
<br/>

コンスルーには向きがあります。写真の緑枠内ように小さい四角の窓が空いており、コンスルーを平らに置いたとき上より、赤線、青線が示すとおり下よりといったように方向性があります。<br/>
![IMG_7127](https://github.com/user-attachments/assets/a55d3c82-0a8f-4a20-9688-ec92b5cdaef3)
<br/>
<br/>


基板を裏向きにします。<br/>
![IMG_7125](https://github.com/user-attachments/assets/7233ba3b-d9dc-45f2-90da-ac68b045d2b2)<br/>
<br/>
マイコンのピンの並びに合うようにコンスルーをニッパーなどで切断してマイコンをはんだ付けする土台を作っていきます。<br/>
その四角の窓が下よりの向きになるようにコンスルーの向きを整えます。<br/>
<br/>
下向きの窓が基板側になるようにコンスルーを基板の穴に差し込みます。<br/>
![IMG_7128](https://github.com/user-attachments/assets/2692d3d3-6828-441a-9897-5790f578733c)
<br/>
<br/>

このとき、窓がある側面を同じ方向に揃えて差し込みます。写真では手前になるようにしています。揃っていればどちらでも構いません。（たぶん・・）<br/>
![IMG_7129](https://github.com/user-attachments/assets/22d33f41-c5f4-413b-8045-7832c5018533)
<br/>
<br/>

※コンスルーは基板側にははんだ付けしません。はんだ付けしてしまっても問題ありませんが、コンスルーである意味がなくなってしまいます。（取り外せるというのがメリット）<br/>
![IMG_7130](https://github.com/user-attachments/assets/b72b95b3-c892-414c-9faa-02d015765e00)<br/>
<br/>
<br/>

基板に印刷された番号(緑枠)とマイコンの番号（オレンジ枠）を合わせるようにマイコンを差し込みます。BOOT、RESETスイッチがあるほうが裏面（LEDやスイッチソケットがはんだ付けされている面）となります。<br/>
向きに注意してください。<br/>
![IMG_7131](https://github.com/user-attachments/assets/634a2154-5f24-450c-a219-a236af31a195)<br/>
このとき、フラックスを塗布してから差し込むようにしておくと綺麗にできると思います。<br/>
<br/>
<br/>

パッドをはんだごてで温めはんだを流し込んでいきます。<br/>
![IMG_7132](https://github.com/user-attachments/assets/fee5d801-9833-4e3f-bd03-31a76fdc55d3)

![IMG_7133](https://github.com/user-attachments/assets/6bbd0739-4bf9-4915-bb16-1a3f90d9518b)

順番はどこからでも問題ないですが、順番にやっていったほうがやり易いかと思います。<br/>
<br/>
<br/>

はんだ付け完了<br/>
![IMG_7135](https://github.com/user-attachments/assets/f29b6086-e746-4d71-bd4c-ad8c02da6219)<br/>
<br/>
<br/>
<br/>

### 7.マイコン（RP2040-ZERO）へVialファームウェアを書き込む
<br/>
<br/>

マイコンにキーボード（マクロパッド）として動作させる為のプログラムであるファームウェアを書き込みます。<br/>
これをしないとただの素敵なオブジェです。<br/>
本キーボード（マクロパッド）はVialファームウェアで動作するように設計しています。<br/>
vialソフトウェアに関しては別途ご自身のコンピューターへインストールしておいてください。Windows、Mac対応です。<br/>
※これを自分で調べてインストール出来ないようでは本キーボード（マクロパッド）を組み立てて扱うことはまず不可能です。<br/>
そのため、ここでは敢えて説明は割愛します。<br/>
<br/>
<br/>

コンピューターに認識させます。
緑枠内のBOOTと書かれたスイッチを押しながら・・・
![IMG_7135](https://github.com/user-attachments/assets/5ed1a502-34a1-4ff4-b024-cd0c2a46613e)<br/>

![IMG_7136](https://github.com/user-attachments/assets/f6e0ef7e-b5ff-494b-88e6-9fab15779f4a)<br/>
<br/>
<br/>
USB-Cケーブルで対応したコンピューターとマイコンのUSB-C端子を繋ぎます
![IMG_7137](https://github.com/user-attachments/assets/e429bbc7-2ce0-4570-9130-d023f99d2775)<br/>
※この時コンピューター側はUSB-A端子のほうがトラブルになり難いのでそちらを推奨します。（C-Cで動かないことはありませんがケーブルの相性が出やすい為）<br/>
<br/>
<br/>

ここではmacを例に説明しますが、Windowsでも同じです。<br/>
Finder、エクスプローラーなどのファイラーアプリケーションを開き、デバイスの一覧が出る場所を参照します。<br/>
![スクリーンショット 2025-08-28 13 46 29](https://github.com/user-attachments/assets/495127dd-6c2b-4c33-9527-bb3fba222889)<br/>
青枠内のようにRPI-RP2というデバイスが見えていれば、コンピューターにマイコンが正しく認識されているということになります。<br/>
仮にここでデバイスが何も認識されないようであれば、マイコン自体が壊れている可能性が高くなります。（ケーブルという可能性もあり。）<br/>
<br/>
<br/>

表示されている事を前提にオレンジ枠内、用意したファームウェアの.uf2ファイル（yuugiri_vial.uf2）を緑枠内、当該デバイスツリー上のRPI-RP2アイコンへドラッグ＆ドロップします。<br/>

![スクリーンショット 2025-08-28 13 49 18](https://github.com/user-attachments/assets/2cf3b4e6-16b8-4a9e-9ff5-6b5a20260f8c)<br/>

![IMG_7139](https://github.com/user-attachments/assets/4f16f403-315c-4d3e-8432-95d6c6ef822c)<br/>
エラー等がでなければ正常に書き込みが完了し、Vialソフトウェア上でキーボード（マクロパッド）が認識できるようになります。<br/>
<br/>
<br/>

Vialソフトウェアを開き、緑枠内最上段のキーボード名の部分をクリックすると・・・
![スクリーンショット 2025-08-28 13 51 33](https://github.com/user-attachments/assets/efa3c2f1-6351-438d-a0b8-3dc4ee6c0227)<br/>
<br/>

kiritsuboの名前が選択できるはずです。<br/>
クリックすると・・・<br/>

![IMG_8063](https://github.com/user-attachments/assets/0b636f9c-e26b-4f05-8702-a32049113adb)<br/>
<br/>

青枠内のようにキーボード（マクロパッド）のキーの配列の形をしたキーマップが表示されればOKです。<br/>

![IMG_8064](https://github.com/user-attachments/assets/093467a1-59f8-40b4-ada0-3b8977d2d5c3)<br/>
<br/>
<br/>

これで基板は完成です。<br/>

![IMG_7637](https://github.com/user-attachments/assets/b4d50c39-d3b1-4ea1-8502-21266e758dc7)

<br/>
vialソフトウェア上のLightingタブでライティングアニメーションを変更するなどして、全LEDがぺかーーーーーーーー！<br/> 
っと光っていればこれまでの全工程が概ね成功と言えます。お疲れ様でございます。<br/>
続いて、ロータリーエンコーダーも設定したとおりに機能するか確かめましょう。<br/>
Vol＋、Vol−に設定して確認すると分かり易いかと思います。<br/>

トグルスイッチもオンオフしてみて動作するか確認しましょう。
モデルや設定にによって異なりますが原則オン（左側ないし上側にレバーが移動している状態）の本数によってLEDインジケーター（最上段、二段目のLED）の色が変わる仕組みになっています。<br/>

夕霧、桐壷では下側がオフ、上側がオンになっているのでレバーをオン側にした数だけインジケーターの点灯数が変化するか確認してください。<br/>
1本→1個点灯（レイヤー5に遷移）<br/>
2本→2個点灯（レイヤー6に遷移）<br/>
という動作になれば正常です。<br/>

<br/>
<br/>
<br/>



### 8.ケースの組み立て<br/>
<br/>
<br/>

最後に完成した基板を収めるケースを組み立てていきます。<br/> 

![IMG_1916](https://github.com/user-attachments/assets/52e0a721-c1ad-4f9d-8f42-1f4b87ee41ea)
<br/>


![IMG_1923](https://github.com/user-attachments/assets/f17fb04d-1946-4710-9deb-0aebf71cacc1) 
事前に穴の位置を確認します。
<br/>
<br/>
![IMG_1925](https://github.com/user-attachments/assets/fbf154cf-fc77-4855-9822-14c7eb85231a)
トッププレートとボトムプレートを重ねて穴の位置にズレがないか確認し、プレートの裏表を見ておきます。
<br/>
<br/>

まずボトムプレートの保護シートを剥がします（裏表とも）<br/>
![IMG_1919](https://github.com/user-attachments/assets/3d021817-bfa0-43fe-974b-0c11188a0f90)
<br/>
<br/>

![IMG_1927](https://github.com/user-attachments/assets/c140ab93-f006-4e62-aab0-7a2b0c2651c9)
フィルムを剥がしたら次に四隅の足を作ります。<br/>

![IMG_1911](https://github.com/user-attachments/assets/5f94248c-7be3-45ce-95be-04980c4b9426)
![IMG_1914](https://github.com/user-attachments/assets/22a0fed4-af28-45aa-be1b-5c50b34d3500)
7mm〜のM2ネジで足部品を作ります。

![IMG_1918](https://github.com/user-attachments/assets/a5909568-9c16-4d75-bef4-e57555f792b9)

緑枠内の箇所９箇所にスペーサをM2ネジ（7mm〜）を使ってとめていきます。<br/>
<br/>
<br/>
写真のように表側にスペーサーを置き、裏側からM2ネジでとめます。<br/>
![IMG_7148](https://github.com/user-attachments/assets/f2d89995-7d26-4550-8b5b-ca6bbf668bb6)<br/>

![IMG_1922](https://github.com/user-attachments/assets/d8b32c3f-0345-48b1-9acf-489bec108ee6)<br/>
<br/>
緑枠内の箇所に同じようにスペーサーをとめていきます。<br/>
<br/>
<br/>

<br/>
<br/>

次に完成したボトムプレートに、ミドルプレート（下）を乗せていきます。<br/>
まずミドルプレート（下）に基板を乗せていきます。<br/>
![IMG_1912](https://github.com/user-attachments/assets/0c2c9f08-d484-4aac-8271-b6c6ac86ffbf)<br/>


![IMG_1915](https://github.com/user-attachments/assets/8e41e47d-0c0a-4d24-aa0a-59b736314495)


<br/>
しっかりとハメこんだら・・<br/>

![IMG_1920](https://github.com/user-attachments/assets/200fd08a-439f-4cf8-b001-ea499f0ad68d)


<br/>
<br/>
続いてボトムプレートにミドルフレームをスペーサーの穴の位置に合わせ枠を付けます。。<br/>

![IMG_8081](https://github.com/user-attachments/assets/a4228dc3-6183-48df-867a-221752dfd879)

<br/>


出来上がったボトムプレートに写真のようにミドルプレート基板を収めます。<br/>
![IMG_1924](https://github.com/user-attachments/assets/b974a491-c2a4-4b38-a2d6-d313b214b683)<br/>
![IMG_1913](https://github.com/user-attachments/assets/be9ecaba-768c-47d6-8411-4e8844650024)<br/>


<br/>
<br/>

次にミドルプレート（上）を被せます。<br/>
ガタつきがある場合は基板がミドルプレートから浮いている場合があるので、しっかり嵌っているか確認してから被せなおしてください。
![IMG_1917](https://github.com/user-attachments/assets/5592b601-3035-4874-ade5-23a4fa1344b6)


<br/>
<br/>

<br/>
<br/>

続いてトッププレートをとめていきます。<br/>

フィルムを裏表とも剥がしてから出来上がっている本体の上に乗せ、M2ネジ（5mm〜）でねじ止めします。<br/>
お好みのキースイッチとキーキャップを付けていきます。<br/>
![IMG_1921](https://github.com/user-attachments/assets/5c00a66c-ae9e-4125-9d16-ea63291aeae5)

<br/>
最後にお好みのキースイッチとキーキャップを取り付け<br/>

![IMG_1926](https://github.com/user-attachments/assets/76c3eeb7-57ef-4659-983b-cc1b5781a007)

<br/>





必要に応じて後述するミドルプレートを好みに彩ったりと楽しんでいただければと。<br/>
お疲れ様でした！！<br/>
![IMG_7770](https://github.com/user-attachments/assets/b67a2180-c2a7-4555-bc4f-9d59f3b12b84)


<br/>
<br/>
<br/>

### 9.Extra デコレーションガイド
<br/>
<br/>

ここでは額縁ミドルプレート(夕顔、松風、若紫のみ）を使用する場合の飾り付けのやり方を解説します。<br/>
<br/>

額縁ミドルプレートは上下とも0.5mm以下の薄手のものであれば組み込める額縁のような溝が掘ってあるプレートになっています。<br/>
この溝に溝の蓋をベースに型取りして切り出す事で比較的簡単に好きな柄や色に彩ることができます。<br/>
是非とも好きな柄で楽しんでいただきたい。<br/>
<br/>
<br/>

はじめに切り出す素材を用意します。溝の深さは0.5mmなのでそれ以下のものであればなんでもOK。<br/>
色紙、切り紙、千代紙、包装紙などなど。お好みのものを用意してください。<br/>

![IMG_7173](https://github.com/user-attachments/assets/40298cda-57dc-43f2-bbec-2e633a16ed19)<br/>
<br/>
<br/>

次にテンプレートを本体から切り離します。緑枠の部分がそれです。<br/>
ここではミドルプレート（下）を使って説明しますが、ミドルプレート（上の）場合も同じ要領です。<br/>
![IMG_7174](https://github.com/user-attachments/assets/5bfe2d7d-fbcc-4cdf-92f3-2d4ea85c2700)<br/>
<br/>

オレンジ矢印の指し示す下の部分にピンセットなど平べったく薄い硬めのものを差し込み・・・<br/>
![IMG_7175](https://github.com/user-attachments/assets/8fa6bf1b-39e6-4bef-bbbd-5b6b10e3d5bf)<br/>
赤矢印の方向へ、すくうようにして剥がします。<br/>
向こう側へ押しながらやると綺麗に剥がれると思います。<br/>
<br/>
<br/>

剥がすとこのようになります。<br/>
他の2つも同じように剥がします。<br/>
![IMG_7176](https://github.com/user-attachments/assets/239a944e-22d0-48d4-9d1e-188573ee59c9)<br/>
<br/>
<br/>

剥がしたテンプレートは表と裏があります。<br/> 
こちらが表<br/>
![IMG_7178](https://github.com/user-attachments/assets/71e7e499-8a0d-4425-9294-6c65ede9f77a)<br/>
<br/>

こちらが裏<br/>
![IMG_7179](https://github.com/user-attachments/assets/171344dd-3e2a-4d5d-873a-800702219c7a)<br/>
<br/>
<br/>

切り出したテンプレートの裏側を上にして素材の上に置き、鉛筆などでテンプレートの枠をなぞります。<br/>
この時素材の表にしたい面の向きに注意してください。<br/>
素材の裏側にテンプレートを当てて外形をマークし切り出すイメージです。<br/>
![IMG_7180](https://github.com/user-attachments/assets/32b5d0c8-dd91-453f-bae1-94a94550b82d)<br/>
<br/>
<br/>

外形を描いた状態<br/>
![IMG_7181](https://github.com/user-attachments/assets/28447861-37dc-4c4c-ae05-9e57a57e1a2d)<br/>
<br/>
<br/>

次にハサミなどで外形に沿って切り出します。<br/>
この時外形線をほんの少し残すように微妙に大きめに切るのがポイントです。<br/>
鉛筆などで外形を描いていれば消しゴムで消せるので問題なし。<br/>
![IMG_7182](https://github.com/user-attachments/assets/b6f59d26-af6d-45d5-b6b4-e85fc125c315)<br/>
※実際は裏側になるので線はそのままでも実用上問題にはならないです。<br/>
<br/>
<br/>

切り出したものがこちら。<br/>
![IMG_7183](https://github.com/user-attachments/assets/75e25066-9305-4235-afb0-31a4ee57b77c)<br/>
<br/>
<br/>


![IMG_7185](https://github.com/user-attachments/assets/d5333ba4-4679-41e7-880b-ee7e22a230cf)<br/>
<br/>

ピンセットなどを使って切り出した素材を額縁に収めます。<br/>
![IMG_7186](https://github.com/user-attachments/assets/be2162c2-e047-4af5-b6dc-1c1e1a68243f)<br/>
<br/>
<br/>

微妙に大きく切ることで溝に引っ掛けて落ちないように出来ます。<br/>
あまり大きく切りすぎると入らないので調整しつつ切り出すようにしてください。<br/>
![IMG_7187](https://github.com/user-attachments/assets/0c2c574b-5e81-45f6-a37e-bb06efc5fcaa)<br/>
<br/>
<br/>

しっかりはまるとこういう感じになります。<br/>
他の部分も同じようにしていきます。<br/>
![IMG_7188](https://github.com/user-attachments/assets/043a4cb6-8db9-4e87-87d6-50c78673f3bc)<br/>
<br/>
<br/>
<br/>
<br/>

作例 <br/>
作者は和柄が好きなのでバックストリートファクトリーから発売されている千代切紙を使用して和柄にデコレーションしています。<br/>
色々な柄があり、とても美しいのでおすすめです。<br/>
折り紙としては少々高いですが、その分の価値はあります。<br/>
是非とも色々な組み合わせを試していただきたいです。<br/>
素敵なのが出来上がったらSNS等で共有していただけるととても嬉しいです。<br/>
<br/>![IMG_7086](https://github.com/user-attachments/assets/f25e8529-700f-47ea-b31b-9713d282fd34)

<br/>
<br/>
<br/>










































































































































































































































































































































































































































































































































































































































































































































