#include<stdio.h>
#include<iostream>
#include<gmpxx.h>
#include<gmp.h>
#include<sys/time.h>
#include<time.h>
#include<windows.h>
//#define N 5
using namespace std;
int main()
{
	clock_t start,end,start1,end1,start2,end2;
	int n;
	printf("输入n:");
	scanf("%d",&n); 
    mpz_t b;
    mpz_init(b);
    mpz_t p,q,h,g;
    
	cout<<"start"<<endl;
	
	mpz_t k1,k2,k3,k4,k5,k6,gk1,gk2,gk3,gk4,gk5,gk6,t1,t2,r,seed;
	mpz_t y1,y2,h1w1wn,h2w1_wn_;
	mpz_t z,temp,temp1,temp2,temp3,temp4;
	//ZZ U1,U2,U3,U4,U5,U6;
	mpz_t result_out,result_dir,check1,check2,resultU1,resultU2;
	mpz_t suma,mulw,mulw_;
	
	mpz_inits(y1,y2,h1w1wn,h2w1_wn_,z,temp,temp1,temp2,temp3,temp4,result_out,result_dir,check1,check2,resultU1,resultU2,mulw,mulw_,NULL);
	mpz_init(suma);
	mpz_t x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
	mpz_inits(x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,NULL);
	mpz_t x_1,x_2,x_3,x_4,x_5,x_6,x_7,x_8,x_9,x_10;
	mpz_inits(x_1,x_2,x_3,x_4,x_5,x_6,x_7,x_8,x_9,x_10,NULL);
	mpz_t w1,w2,w3,w4,w5,w6,w7,w8,w9,w10;
	mpz_inits(w1,w2,w3,w4,w5,w6,w7,w8,w9,w10,NULL);
	mpz_t w_1,w_2,w_3,w_4,w_5,w_6,w_7,w_8,w_9,w_10;
	mpz_inits(w_1,w_2,w_3,w_4,w_5,w_6,w_7,w_8,w_9,w_10,NULL);
	mpz_t U11,U12,U13,U14,U15;
	mpz_inits(U11,U12,U13,U14,U15,NULL);
	mpz_t U21,U22,U23,U24,U25;
	mpz_inits(U21,U22,U23,U24,U25,NULL);
	//p,q,g  
    mpz_init_set_str(p,"3268470001596555685058361448517594259852327289373621024658735136696086397532371469771539343923030165357102680953673099920140531685895962914337283929936606946054169620100988870978124749211273448893822273457310556591818639255714375162549119727203843057453108725240320611822327564102565670538516259921126103868685909602654213513456013263604608261355992328266121535954955860230896921190144484094504405550995009524584190435021785232142953886543340776477964177437292693777245368918022174701350793004000567940200059239843923046609830997768443610635397652600287237380936753914127667182396037677536643969081476599565572030244212618673244188481261912792928641006121759661066004079860474019965998840960514950091456436975501582488835454404626979061889799215263467208398224888341946121760934377719355124007835365528307011851448463147156027381826788422151698720245080057213877012399103133913857496236799905578345362183817511242131464964979",10);
    mpz_init_set_str(q,"93911948940456861795388745207400704369329482570245279608597521715921884786973",10);
	mpz_init_set_str(g,"2141434891434191460597654106285009794456474073127443963580690795002163321265105245635441519012876162226508712450114295048769820153232319693432987768769296824615642594321423205772115298200265241761445943720948512138315849294187201773718640619332629679913150151901308086084524597187791163240081868198195818488147354220506153752944012718951076418307414874651394412052849270568833194858516693284043743223341262442918629683831581139666162694560502910458729378169695954926627903314499763149304778624042360661276996520665523643147485282255746183568795735922844808611657078638768875848574571957417538833410931039120067791054495394347033677995566734192953459076978334017849678648355479176605169830149977904762004245805443987117373895433551186090322663122981978369728727863969397652199851244115246624405814648225543311628517631088342627783146899971864519981709070067428217313779897722021674599747260345113463261690421765416396528871227",10);
	//u,a
	//mpz_t u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11,u12,u13,u14,u15,u16,u17,u18,u19,u20;
	mpz_t u[21],a[21];
	mpz_init_set_str(u[1],"2254518907481130493680263963174084283420906390588805033813566173364962821624387849139928490513917948493928192816493094304312640171518380440884624932557677657657283882722368693988717792193911637154687677905921685291592713020811029741593682216893117115647791722610281418208843955510998611616418581720581485568896479982551759737341686924800310489605551270076174229170416948207469806240414445859090276855160835291198501742519800526994740296754499327872818684082766679460293097186243340587856831945056426771469455617760406261672148812379523052986540769887100651281713944816337141913236486775714287263694184408830755738818017011778107372949054228695749016861258085266117723050552020294708299969525273228885087873765880014002219850343656823548746634906471218466138462105113326810843685119511960359617499986966031438770882145560901661060888209844720983374286719354065051752163866464134644478755051345092422682587548876015215541282638",10);
    mpz_init_set_str(a[1],"78201518583775881635764344190617247201490358694560752933594375269737003561830",10);
    
	mpz_init_set_str(k1,"49812811214726535801143167808194082128761536688375022781114056087421771049128",10);
	  mpz_init_set_str(gk1,"2015584616249284495408598892659992044922992200462900863922889963542407230082721922700266504789685969334205340401494033351323488190360790560367908511874968491468482767335852933898410137481661943629183872479293477353177640432428451438389979685045601627712548873645285177571502621066337249118242007633957476464463947930780177902425584818826409888068132132884909060144758701626047082352743755252949405145677399555358621154644241726199207906789162958162038266408389479853304669909324876781312158192564480747374711978915472260842683238150925392398962296912398464316924205122460937773169558962225436756015897113039803379997654186951787332297292281655147134257221008043639736235368740382035066407555192895751996446093409487363479721297085279259868606405008754441501963797331164591610818262790544019934969689461756720638067885325929361094112574715237598210275619643664835690454161598319395981342495706364817766312433940142107034064469",10); 
	  mpz_init_set_str(k2,"138712520422926401624801723292833347039542656160566974302907768612140371305146",10);
	  mpz_init_set_str(gk2,"2464242615847203283586855938254499796261932440205866539142696190608106979068764648154808105595143396481761748145434789574799843163318483354345279789621018451292731511637793410377290233109422337997167936837525790591168501200784903864961720261429037625475315379405136960982597709580591338995151028810370160508486321646125664853416572143102311271821893798083364503311377619198608254678011414247179598582536597550706549014718491428299242653605222290593183427581056058796776428219856263291621074748861388245203718792034248619034077518181626458228910675390724132707230057873232986500732703974474517918330371208496779238213456034752719334771271642118247463294273097765196205440778131387523818809601768662968764471037025345657396573399009082124390445301344022348747729925815085891268341968591540371664642345295789391738771123071078911292276574228698941579701988384627395765791092632381101281130943594843384509172164328534989067100000",10);
	  mpz_init_set_str(k3,"141052071668388201855174042822095372744541670694398644555339350328638196710687",10);
	  mpz_init_set_str(gk3,"3126897032124433505575043782342481734797212599810876082253233799137859233589404302461002649080143783743668062344880976956268370817182186720482006947884614835251557182522212578748932991595784199910543750367834427942315803669894687935393444365867781362916223240035718682519447079539310580262992111529217288080683101837161037946373313651624257146320457195651351690882845752689709097332309303254337474850383257201626439597028417822056520838964820554745844770632180298286164030118930338667777155356169276172686231516080220884720060027089308310630222728931147049169900651300856099969690871357527258057081203927656900071142642651193378799266005240659907775467088514593307896002905863650238022862283071713518486242199715715345955792328760684316505863995417822255972805918136074809877629494789892461318993517359966988096858182096273897522402300387729575132590635485890116312486665622719100467844280967467792721138627804132873528970726",10);
	  mpz_init_set_str(k4,"121196646710583210412778458255772902354138056971015569132144911357908377422615",10);
	  mpz_init_set_str(gk4,"1711363281785923683865128179050694149978658128540357151708641356715041681286800526263715969062185753230436328530256320515174347093302987811868986839281997495415710438410318940958320206233845222571672483541775683103256448951345390023116029147659586904044619660241249060696955973220961909853402106196733324836480481083242220330769520535688121371755165570288096674747093339846692947497434051010800399083121315139043581603647931859983501661927903995595781407165577317756826243178417843225709745320514537408548010689113831419005273333433660628931580885980376656891054696646167227593332598466528116913320955550975841421469043831805739015974298824598798137293704394618579593471911971358967469396123437244897288870693633749799388451238554091760793770080433701798232551409261123598023811259556531241183079594992322311330841193125657927952791228227402294221589675708858647000918897927301649418484985508593443181395436273967019432938665",10);
	  mpz_init_set_str(k5,"49739845643109768338491903889960177492929269230359945210870889204152647272799",10);
	  mpz_init_set_str(gk5,"306882118161307640737022099480630259397570260662256034229841545223644525221729642902295406046901166498523940184469718652101400767868167929446112913324764086184430896165562846612215002499607157199179127453226584732262725549069423050224482795262766425172355455987694808742226944538859638432584404509088257792377462041310188617532687388331388309585982199756219896057158435348476111267324377335885413668967730476694032178069298514830453713799849099625201757354051907355496521211548864391578433319063980406733434669887457653324205224635090341591743289209421598119646920072870732016471627389674148023752821864632519102351652776914176118426705933774511174358620104876765831664740672427817197469512043896486841599703115951251125764630974560478975266894743873474119820065910049308538513377631891973533853624535068233871712867467406074837073087881307451394127200844280524743075912953630180983721366303360880621582252141915275113747917",10);
	  mpz_init_set_str(k6,"71448392780459341622166103676134780661170671931973565235820286468783558865331",10);
	  mpz_init_set_str(gk6,"1345156819003885185110878168858638805673521250053333396894610247087622622762911593378125123574159596123193426740316460620220860347175741626444114069363006533367211519264229847142084392131014022256532512387931415441897174488710343786280173957655035963202194909889051249099922431713112316233466893724084422071701937796209773867690712475441008723999348216709539962702682897118390828688375596656820903705789267341882222094896585994930358145200793794886572039481110793195387112882658769494266798972232966601948188670683954534016692741181440481044208181912046475765213785498969086660551510711765375551015748867402638393018656483903548585541951176571895128562339265486341526538653608716736729502903111231652346121406178102331228325462733044267355574445901528343622782238522909840150929616954696794394278394227589223837558972018897573507970317456605140556803346356665859518215006719064112649842951996579058268909996249615987079392994",10);
	//ti r
	mpz_init_set_str(t1,"60983576670588942496676320339641323456",10);
	mpz_init_set_str(t2,"60983576670588942496676320339641323456",10);
	mpz_init_set_str(r,"5",10);
 
 //   mpz_init_set_str(u[2],"37255391992718631624550984074418054194344166866855944853456273387303902237666113294534582106752976638199893369080939273176880276063953505045827370873833713592257585417482835703998685623984919699932913297083489384208599225821745301665172562370553582018646983351451219253990903046499332822941491103978886965707",10);
  //  mpz_init_set_str(a[2],"910251589119361454643534412976247050642802701969",10);
   //mpz_init_set_str(u[],"",10);
  /* mpz_init_set_str(u[],"",10);
   mpz_init_set_str(a[],"",10);
   mpz_init_set_str(u[],"",10);
   mpz_init_set_str(a[],"",10);
   mpz_init_set_str(u[],"",10);
   mpz_init_set_str(a[],"",10);
   */int i,j,k;
   int count=1000;
   //直接计算 
   start=clock(); 
   for(i=0;i<count;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		mpz_powm(b,u[1],a[1],p);//b=u^a mod p
	   }
   		
   		mpz_powm_ui(b,b,n,p);//b=u1^a1....un^an
   		
//	mpz_powm(b,u[2],a[2],p);
   }
    end=clock();	
	printf("dirtime=%f\n",double(end-start)/CLOCKS_PER_SEC);
	//mpz_init_set_str(u[],"",10);
    //mpz_init_set_str(a[],"",10);
    //mpz_add(b,u[1],q);
    gmp_printf("b=%Zd\n",b);
 	//=================================外包计算============================ 
 	//pairs
	  
	//x1y1
	mpz_mul_ui(suma,a[1],n);//suma=a1+a2+...+an
	mpz_mul(temp3,k1,t1);
	mpz_invert(temp1,temp3,q); 
	//mpz_gcdext(z,temp1,temp,temp3,q);//XGCD,temp1=k1t1^-1 mod q 
	mpz_mul(temp2,k5,suma);//temp2=k5*suma
	mpz_sub(temp2,temp2,k3);//temp2=k5*suma-k3
	mpz_mod(temp2,temp2,q);//temp2=k5*suma-k3 mod q
	mpz_mul(y1,temp1,temp2);
	mpz_mod(y1,y1,q);
	mpz_mul(temp1,t1,y1);
	mpz_mod(temp1,temp1,q);
	for(i=0;i<n;i++)
	{
		mpz_sub(x1,a[1],temp1);//xi=ai-t1y1
		mpz_mod(x1,x1,q);
}
	
	//x2y2
	mpz_mul(temp3,k2,t2);
	mpz_invert(temp1,temp3,q);//k2t2^-1 mod q
	//mpz_gcdext(z,temp1,temp,temp3,q);//temp1=k2t2^-1 mod q
 	mpz_mul(temp2,k6,suma);//
 	mpz_mul(temp2,r,temp2);//r*k6*suma
 	mpz_sub(temp2,temp2,k4);//temp2=r*k6*suma-k4
 	mpz_mod(temp2,temp2,q);
 	mpz_mul(y2,temp1,temp2);
 	mpz_mod(y2,y2,q);
	mpz_mul(temp1,t2,y2);
	mpz_mod(temp1,temp1,q);	
	for(i=0;i<n;i++)
	{
		mpz_mul(temp2,r,a[1]);
		mpz_mod(temp2,temp2,q);
		mpz_sub(x_1,temp2,temp1);//xi'=rai-t2y2
		mpz_mod(x_1,x_1,q);
	}
	
//	gmp_printf("x_1=%Zd\n",x_1);
	//计算拆分参数
	mpz_invert(temp1,gk5,p);
	for(i=0;i<n;i++)
	{
		mpz_mul(temp1,temp1,u[1]);
		mpz_mod(w1,temp1,p);
	}	
//	gmp_printf("w1=%Zd\n",w1);
	
	mpz_invert(temp1,gk6,p);
	for(i=0;i<n;i++)
	{
		mpz_mul(temp1,temp1,u[1]);
		mpz_mod(w_1,temp1,p);
	}
	
//	gmp_printf("w_1=%Zd\n",w_1);
	
	mpz_set_si(mulw,1);
	mpz_set_si(mulw_,1);
	
		mpz_powm_ui(mulw,w1,n,p);//w1w2...wn
	//	gmp_printf("w1wn=%Zd\n",mulw);
	
		mpz_powm_ui(mulw_,w_1,n,p);///w1_w2_...wn_
	//	gmp_printf("w_1w_n=%Zd\n",mulw_);
	
	mpz_mul(h1w1wn,gk1,mulw);
	mpz_mod(h1w1wn,h1w1wn,p);
	mpz_mul(h2w1_wn_,gk2,mulw_);
	mpz_mod(h2w1_wn_,h2w1_wn_,p);
//	gmp_printf("h1w1wn=%Zd\n",h1w1wn);
	//外包计算
		 
	 
	mpz_powm(U11,w1,x1,p);//U11=w1^x1 mod p
	
	mpz_powm(U12,h1w1wn,y1,p);//U12=h1w1wn^y1 mod p	 	
	 
	mpz_powm(U21,w_1,x_1,p);//U21=w_1^x_1 mod p
	 	
	mpz_powm(U22,h2w1_wn_,y2,p);//U22=h1w_1w_n^y1 mod p
//	gmp_printf("U21=%Zd\n",U21);
	 //恢复验证
		mpz_powm_ui(resultU1,U11,n,p);//w1^x1.....wn^xn
		
		mpz_powm_ui(resultU2,U21,n,p);
		//resultU1=operator*(resultU1,U1[i])%p;//w1^x1...wn^xn 
	
//	gmp_printf("resultU1=%Zd\n",resultU2);
	mpz_mul(temp1,gk3,resultU1);
	mpz_mod(temp1,temp1,p);
	mpz_powm(temp2,U12,t1,p);  
	mpz_mul(result_out,temp1,temp2);
	mpz_mod(result_out,result_out,p);
	gmp_printf("result_out=%Zd\n",result_out);
	mpz_powm(check1,result_out,r,p);
	gmp_printf("check1=%Zd\n",check1);
	
	mpz_mul(temp1,gk4,U21);
	mpz_mod(temp1,temp1,p);
	mpz_powm(temp2,U22,t2,p);
	mpz_mul(check2,temp1,temp2);
	mpz_mod(check2,check2,p);
	gmp_printf("check2=%Zd\n",check2);
	 
    
    	 //====================fixed计时==========================
	  start2=clock();
	  for(k=0;k<count;k++)
	  {
	  	
	  
	  mpz_mul_ui(suma,a[1],n);//suma=a1+a2+...+an
	mpz_mul(temp3,k1,t1);
	mpz_invert(temp1,temp3,q); 
	//mpz_gcdext(z,temp1,temp,temp3,q);//XGCD,temp1=k1t1^-1 mod q 
	mpz_mul(temp2,k5,suma);//temp2=k5*suma
	mpz_sub(temp2,temp2,k3);//temp2=k5*suma-k3
	mpz_mod(temp2,temp2,q);//temp2=k5*suma-k3 mod q
	mpz_mul(y1,temp1,temp2);
	mpz_mod(y1,y1,q);
	mpz_mul(temp1,t1,y1);
	mpz_mod(temp1,temp1,q);
	for(i=0;i<n;i++)
	{
		mpz_sub(x1,a[1],temp1);//xi=ai-t1y1
		mpz_mod(x1,x1,q);
	}
	
	//x2y2
	mpz_mul(temp3,k2,t2);
	mpz_invert(temp1,temp3,q);//k2t2^-1 mod q
	//mpz_gcdext(z,temp1,temp,temp3,q);//temp1=k2t2^-1 mod q
 	mpz_mul(temp2,k6,suma);//
 	mpz_mul(temp2,r,temp2);//r*k6*suma
 	mpz_sub(temp2,temp2,k4);//temp2=r*k6*suma-k4
 	mpz_mod(temp2,temp2,q);
 	mpz_mul(y2,temp1,temp2);
 	mpz_mod(y2,y2,q);
	mpz_mul(temp1,t2,y2);
	mpz_mod(temp1,temp1,q);	
	for(i=0;i<n;i++)
	{
		mpz_mul(temp2,r,a[1]);
		mpz_mod(temp2,temp2,q);
		mpz_sub(x_1,temp2,temp1);//xi'=rai-t2y2
		mpz_mod(x_1,x_1,q);
	}
	
//	gmp_printf("x_1=%Zd\n",x_1);
	//计算拆分参数
	mpz_invert(temp1,gk5,p);
	for(i=0;i<n;i++)
	{
		mpz_mul(temp1,temp1,u[1]);
		mpz_mod(w1,temp1,p);
	}	
//	gmp_printf("w1=%Zd\n",w1);
	
	mpz_invert(temp1,gk6,p);
	for(i=0;i<n;i++)
	{
		mpz_mul(temp1,temp1,u[1]);
		mpz_mod(w_1,temp1,p);
	}
	
//	gmp_printf("w_1=%Zd\n",w_1);
	
	mpz_set_si(mulw,1);
	mpz_set_si(mulw_,1);
	
		mpz_powm_ui(mulw,w1,n,p);//w1w2...wn
//		gmp_printf("w1wn=%Zd\n",mulw);
	
		mpz_powm_ui(mulw_,w_1,n,p);///w1_w2_...wn_
//		gmp_printf("w_1w_n=%Zd\n",mulw_);
	
	mpz_mul(h1w1wn,gk1,mulw);
	mpz_mod(h1w1wn,h1w1wn,p);
	mpz_mul(h2w1_wn_,gk2,mulw_);
	mpz_mod(h2w1_wn_,h2w1_wn_,p);
//	gmp_printf("h1w1wn=%Zd\n",h1w1wn);
	//外包计算
		 
	 
	
	 //恢复验证
		mpz_powm_ui(resultU1,U11,n,p);//w1^x1.....wn^xn
		
		mpz_powm_ui(resultU2,U21,n,p);
		//resultU1=operator*(resultU1,U1[i])%p;//w1^x1...wn^xn 
	
//	gmp_printf("resultU1=%Zd\n",resultU2);
	mpz_mul(temp1,gk3,resultU1);
	mpz_mod(temp1,temp1,p);
	mpz_powm(temp2,U12,t1,p);  
	mpz_mul(result_out,temp1,temp2);
	mpz_mod(result_out,result_out,p);
//	gmp_printf("result_out=%Zd\n",result_out);
	mpz_powm(check1,result_out,r,p);
//	gmp_printf("check1=%Zd\n",check1);
	
	mpz_mul(temp1,gk4,U21);
	mpz_mod(temp1,temp1,p);
	mpz_powm(temp2,U22,t2,p);
	mpz_mul(check2,temp1,temp2);
	mpz_mod(check2,check2,p);
//	gmp_printf("check2=%Zd\n",check2);
	
	}
	  
	  end2=clock();
    printf("out_fixed_time=%f\n",double(end2-start2)/CLOCKS_PER_SEC);
    //=======================================ding计时========================= 
    //ti r重新赋值 
    mpz_set_str(t1,"10319027958316840958",10);
	mpz_set_str(t2,"10319027958316840958",10);
	mpz_set_str(r,"9",10);
    start1=clock();
	  for(k=0;k<count;k++)
	  {
	  	
	  
	  mpz_mul_ui(suma,a[1],n);//suma=a1+a2+...+an
	mpz_mul(temp3,k1,t1);
	mpz_invert(temp1,temp3,q); 
	//mpz_gcdext(z,temp1,temp,temp3,q);//XGCD,temp1=k1t1^-1 mod q 
	mpz_mul(temp2,k5,suma);//temp2=k5*suma
	mpz_sub(temp2,temp2,k3);//temp2=k5*suma-k3
	mpz_mod(temp2,temp2,q);//temp2=k5*suma-k3 mod q
	mpz_mul(y1,temp1,temp2);
	mpz_mod(y1,y1,q);
	mpz_mul(temp1,t1,y1);
	mpz_mod(temp1,temp1,q);
	for(i=0;i<n;i++)
	{
		mpz_sub(x1,a[1],temp1);//xi=ai-t1y1
		mpz_mod(x1,x1,q);
	}
	
	//x2y2
	mpz_mul(temp3,k2,t2);
	mpz_invert(temp1,temp3,q);//k2t2^-1 mod q
	//mpz_gcdext(z,temp1,temp,temp3,q);//temp1=k2t2^-1 mod q
 	mpz_mul(temp2,k6,suma);//
 	mpz_mul(temp2,r,temp2);//r*k6*suma
 	mpz_sub(temp2,temp2,k4);//temp2=r*k6*suma-k4
 	mpz_mod(temp2,temp2,q);
 	mpz_mul(y2,temp1,temp2);
 	mpz_mod(y2,y2,q);
	mpz_mul(temp1,t2,y2);
	mpz_mod(temp1,temp1,q);	
	for(i=0;i<n;i++)
	{
		mpz_mul(temp2,r,a[1]);
		mpz_mod(temp2,temp2,q);
		mpz_sub(x_1,temp2,temp1);//xi'=rai-t2y2
		mpz_mod(x_1,x_1,q);
	}
	
//	gmp_printf("x_1=%Zd\n",x_1);
	//计算拆分参数
	mpz_invert(temp1,gk5,p);
	for(i=0;i<n;i++)
	{
		mpz_mul(temp1,temp1,u[1]);
		mpz_mod(w1,temp1,p);
	}	
//	gmp_printf("w1=%Zd\n",w1);
	
	mpz_invert(temp1,gk6,p);
	for(i=0;i<n;i++)
	{
		mpz_mul(temp1,temp1,u[1]);
		mpz_mod(w_1,temp1,p);
	}
	
//	gmp_printf("w_1=%Zd\n",w_1);
	
	mpz_set_si(mulw,1);
	mpz_set_si(mulw_,1);
	
		mpz_powm_ui(mulw,w1,n,p);//w1w2...wn
//		gmp_printf("w1wn=%Zd\n",mulw);
	
		mpz_powm_ui(mulw_,w_1,n,p);///w1_w2_...wn_
//		gmp_printf("w_1w_n=%Zd\n",mulw_);
	
	mpz_mul(h1w1wn,gk1,mulw);
	mpz_mod(h1w1wn,h1w1wn,p);
	mpz_mul(h2w1_wn_,gk2,mulw_);
	mpz_mod(h2w1_wn_,h2w1_wn_,p);
//	gmp_printf("h1w1wn=%Zd\n",h1w1wn);
	//外包计算
		 
	 
	
	 //恢复验证
		mpz_powm_ui(resultU1,U11,n,p);//w1^x1.....wn^xn
		
		mpz_powm_ui(resultU2,U21,n,p);
		//resultU1=operator*(resultU1,U1[i])%p;//w1^x1...wn^xn 
	
//	gmp_printf("resultU1=%Zd\n",resultU2);
	mpz_mul(temp1,gk3,resultU1);
	mpz_mod(temp1,temp1,p);
	mpz_powm(temp2,U12,t1,p);  
	mpz_mul(result_out,temp1,temp2);
	mpz_mod(result_out,result_out,p);
//	gmp_printf("result_out=%Zd\n",result_out);
	mpz_powm(check1,result_out,r,p);
//	gmp_printf("check1=%Zd\n",check1);
	
	mpz_mul(temp1,gk4,U21);
	mpz_mod(temp1,temp1,p);
	mpz_powm(temp2,U22,t2,p);
	mpz_mul(check2,temp1,temp2);
	mpz_mod(check2,check2,p);
//	gmp_printf("check2=%Zd\n",check2);
	
	}
	end1=clock();
	printf("out_ding_time=%f\n",double(end1-start1)/CLOCKS_PER_SEC);
	//mpz_clear(a);
    mpz_clear(b);
    mpz_clear(p);
    mpz_clear(q);
    mpz_clear(g);
    return 0;
}
