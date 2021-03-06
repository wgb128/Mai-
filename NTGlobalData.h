/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */


@class UIViewController, NSMutableArray, NSMutableSet, NSArray, NSMutableDictionary, NSDate;

@interface NTGlobalData : NSObject {
}

@property(assign, nonatomic) int signUpTipsType;
@property(retain, nonatomic) NSString* signUpTips;
//@property(retain, nonatomic) MMGlobalConfig* globalConfig;
@property(retain, nonatomic) NSString* payingPrepayId;
//@property(retain, nonatomic) NTJobModel* sharingJob;
//@property(retain, nonatomic) KSCrashInstallation* crashInstallation;
@property(assign, nonatomic) bool sendingCrashLog;
@property(retain, nonatomic) NSArray* countryCode;
@property(retain, nonatomic) NSArray* skillProsessions;
@property(retain, nonatomic) NSMutableArray* jobPushSettings;
@property(retain, nonatomic) NSMutableArray* provinces;
@property(retain, nonatomic) NSArray* professionsServerData;
@property(retain, nonatomic) NSMutableArray* professionsArray;
@property(retain, nonatomic) NSMutableDictionary* professions;
@property(retain, nonatomic) NSDictionary* pubmenus;
@property(retain, nonatomic) UIViewController* sharingRoot;
@property(assign, nonatomic) int searchJobSalaryMax;
@property(assign, nonatomic) int searchJobSalaryMin;
@property(assign, nonatomic) int searchJobRank;
@property(assign, nonatomic) int searchJobRelation;
@property(retain, nonatomic) NSString* searchJobSkills;
@property(assign, nonatomic) int searchJobMajor;
@property(assign, nonatomic) int searchJobProfession;
@property(retain, nonatomic) NSString* searchJobCity;
@property(retain, nonatomic) NSString* searchJobProvince;
@property(assign, nonatomic) int searchPersonPurpose;
@property(assign, nonatomic) int searchPersonRank;
@property(assign, nonatomic) int searchPersonRelation;
@property(retain, nonatomic) NSString* searchPersonSkills;
@property(assign, nonatomic) int searchPersonMajor;
@property(assign, nonatomic) int searchPersonProfession;
@property(retain, nonatomic) NSString* searchPersonCity;
@property(retain, nonatomic) NSString* searchPersonProvince;
//@property(retain, nonatomic) NSLock* addressBookLock;
@property(assign, nonatomic) BOOL launchPhonebook;
@property(retain, nonatomic) NSString* bindedPushToken;
//@property(retain, nonatomic) NSOperationQueue* drawAvatarQueue;
@property(retain) NSMutableSet* drawAvatarSet;
@property(assign, nonatomic) long long currentMessageId;
@property(retain, nonatomic) NSMutableArray* renmaiHotWords;
@property(retain, nonatomic) NSMutableArray* gossipHotWords;
@property(retain, nonatomic) NSMutableArray* specials;
//@property(retain, nonatomic) NTMyselfModel* myself;
@property(retain, nonatomic) NSMutableDictionary* feedCache;
@property(retain, nonatomic) NSMutableDictionary* gossipCache;
@property(retain, nonatomic) NSMutableDictionary* messageCache;
@property(retain, nonatomic) NSMutableDictionary* jobCache;
@property(retain, nonatomic) NSMutableDictionary* userCache;
@property(retain, nonatomic) NSMutableDictionary* contactCache;
@property(retain, nonatomic) NSString* dbPath;
@property(retain, nonatomic) NSDictionary* defaultParameters;
@property(retain, nonatomic) NSString* basePath;
+(BOOL)isLogin;
+(void)logout;
+(id)lastLoginMobile;
+(void)updateLastLoginMobile:(id)mobile;
+(void)appendPostImgs:(id)imgs andPostBody:(id)body andBoundary:(id)boundary;
+(id)getInstance;
//-(void).cxx_destruct;
-(id)cancelJobPushSetting;
-(id)saveJobPushSetting:(id)setting;
-(id)getJobPushSetting;
-(id)updateCollectedGossips:(id)gossips datalist:(id)datalist;
-(id)getShareUrl:(id)url;
-(void)serverLog:(id)log;
-(id)contactsWithUrl:(id)url page:(int)page output:(id)output;
-(id)mobileRenmais:(id)renmais output:(id)output;
-(id)scanCard:(id)card;
-(id)actionTaskByType:(int)type;
-(id)actionTask:(id)task attach:(id)attach level:(int)level;
-(id)ignoreTask:(id)task attach:(id)attach;
-(id)ignoreJudge:(id)judge;
-(id)verifyJudge:(id)judge;
-(id)addUserTag:(id)tag tag:(id)tag2 anony:(int)anony;
-(id)randomUserName;
-(id)getRenmaiSearchWords;
-(id)getGossipSearchWords;
-(id)searchGossip:(id)gossip pagenum:(int)pagenum output:(id)output;
-(id)clearGossipHint:(long long)hint;
-(id)updateTasks:(int)tasks pending:(int)pending serviceId:(int)anId itemId:(int)anId4 output:(id)output;
-(id)updateTasks:(int)tasks pending:(int)pending output:(id)output;
-(id)recentFriends:(int)friends output:(id)output;
-(id)jobRecoPersons:(int)persons datalist:(id)datalist;
-(id)updateConfig:(id)config config:(int)config2;
-(id)prizeUserTag:(id)tag userMmid:(id)mmid can:(int)can;
-(id)commentUserFeed:(id)feed text:(id)text;
-(id)getDetailOfJob:(int)job openJobType:(int)type;
-(id)updateGroup:(long long)group avatar:(id)avatar;
-(id)updateAvatar:(id)avatar;
-(id)deleteFeedComment:(id)comment commment:(int)commment;
-(id)commentFeed:(id)feed text:(id)text replyto:(int)replyto selectAtUsers:(id)users;
-(id)personDetail:(id)detail;
-(id)getD1Contacts:(long long)contacts;
-(id)getRenmaiArray:(id)array output:(id)output;
-(id)updateTags:(id)tags;
-(id)updateEducations:(id)educations isDelete:(BOOL)aDelete setCurrent:(int)current;
-(id)updateWorks:(id)works isDelete:(BOOL)aDelete setCurrent:(int)current;
-(id)refuseAgentReco:(int)reco;
-(id)confirmAgentReco:(int)reco agent:(id)agent accept:(int)accept;
-(id)agentRecoConfirm:(int)confirm tids:(id)tids;
-(id)requestAgents:(int)agents agents:(id)agents2;
-(id)agentRecommends:(id)recommends jid:(int)jid pagenum:(int)pagenum output:(id)output;
-(id)recommendAgents:(int)agents users:(id)users;
-(id)ignoreContactExchange:(id)exchange;
-(id)recommondAddFriendRequest:(id)request recommondID:(id)anId attach:(id)attach level:(int)level accountFromSearch:(id)search;
-(id)inviteCompleteProfile:(id)profile;
-(id)tryAddFriendRequest:(id)request level:(int)level accountFromSearch:(id)search;
-(id)exchangeContactRequest:(id)request hello:(id)hello level:(int)level accountFromSearch:(id)search;
-(id)preInitReq:(id)req;
-(id)updateGossipTopic:(int)topic datalist:(id)datalist topic:(id)topic3;
-(id)shareJob:(int)job;
-(id)pingBackTalent:(id)talent;
-(id)pingBackJob:(int)job;
-(id)getContactShow;
-(id)updateCommentedGossips:(int)gossips datalist:(id)datalist;
-(id)updateAddedGossips:(int)gossips datalist:(id)datalist;
-(id)searchJobs:(int)jobs datalist:(id)datalist limit:(int)limit;
-(id)searchPersons:(int)persons datalist:(id)datalist queryString:(id)string;
-(id)searchJobsWithStartPage:(int)startPage limit:(int)limit keyword:(id)keyword filterWithProvince:(id)province city:(id)city profession:(int)profession major:(int)major skills:(id)skills salary:(int)salary workExperience:(int)experience purpose:(int)purpose relation:(int)relation rank:(int)rank degree:(int)degree distData:(id)data;
-(id)searchPersonsWithStartPage:(int)startPage limit:(int)limit keyword:(id)keyword filterWithProvince:(id)province city:(id)city profession:(int)profession major:(int)major skills:(id)skills salary:(int)salary workExperience:(int)experience purpose:(int)purpose relation:(int)relation rank:(int)rank degree:(int)degree distData:(id)data;
-(id)searchRenmai:(id)renmai pagenum:(int)pagenum output:(id)output dist:(int)dist;
-(id)searchMobiles:(id)mobiles pagenum:(int)pagenum output:(id)output;
-(id)increaseRank:(id)rank;
-(id)deleteComment:(id)comment commment:(int)commment;
-(id)addComment:(id)comment text:(id)text replyto:(int)replyto isrealname:(BOOL)isrealname username_type:(int)type name:(id)name avatar:(id)avatar;
-(id)addComment:(id)comment text:(id)text replyto:(int)replyto isrealname:(BOOL)isrealname username_type:(int)type;
-(id)followGossipTopic:(id)topic follow:(int)follow;
-(id)shareGossip:(long long)gossip;
-(id)unCollectGossip:(long long)gossip;
-(id)collectGossip:(long long)gossip;
-(id)jubaoGossip:(long long)gossip reason:(id)reason;
-(id)likeFeedDetailComment:(int)comment like:(BOOL)like;
-(id)likeGossipComment:(id)comment like:(BOOL)like;
-(id)likeGossip:(id)gossip like:(int)like;
-(id)deleteGossip:(long long)gossip;
-(id)addGossip:(id)gossip images:(id)images imageIds:(id)ids gtype:(int)gtype username_type:(int)type hidename:(int)hidename tags:(id)tags hash:(id)hash circle_id:(int)anId;
-(id)getGossip:(int)gossip;
-(id)getGossipComments:(id)comments fromStart:(bool)start;
-(id)updateGossips:(int)gossips datalist:(id)datalist readCache:(BOOL)cache writeCache:(BOOL)cache4;
-(id)getContactGroups:(id)groups pagenum:(int)pagenum output:(id)output dist:(int)dist;
-(id)getCommonFriends:(id)friends pagenum:(int)pagenum output:(id)output addrOnly:(BOOL)only;
-(id)getCircleUsers:(id)users circlename:(id)circlename pagenum:(int)pagenum output:(id)output;
-(id)addDialogV3:(long long)a3 hash:(id)hash text:(id)text image:(id)image audio:(id)audio duration:(int)duration hint:(id)hint inAnony:(BOOL)anony atuids:(id)atuids;
-(id)clearAudioUnread:(long long)unread;
-(id)setAdminUser:(id)user cancel:(BOOL)cancel fromMessage:(long long)message;
-(id)removeUser:(id)user fromMessage:(long long)message;
-(id)addUser:(long long)user uids:(id)uids;
-(id)quitGroupChat:(long long)chat;
-(id)setMsg:(long long)msg isTop:(int)top;
-(id)setMsg:(long long)msg notify:(int)notify;
-(id)delDialog:(long long)dialog;
-(id)delMsg:(long long)msg;
-(id)clearBadge:(long long)badge toDid:(long long)to;
-(id)createGroupMid:(id)mid;
-(id)getMid:(id)mid mtype:(int)mtype;
-(id)getMessage:(long long)message beforeId:(long long)anId;
-(id)getMyMessages:(id)messages;
-(id)getMsgUsers:(id)users;
-(id)getMsgTime:(long long)time msgId:(long long)anId afterDid:(long long)after lastCheckTime:(long long)time4 msgCount:(int)count dialogCount:(int)count6;
-(id)updateMyjobs:(id)myjobs datalist:(id)datalist page:(int)page limit:(int)limit;
-(id)jobStatusUpdate:(long long)update status:(int)status;
-(id)jobUpdate:(long long)update status:(int)status province:(id)province city:(id)city company:(id)company cid:(int)cid title:(id)title email:(id)email profession:(int)profession major:(int)major skills:(id)skills level:(int)level worktime:(int)worktime degree:(int)degree salary:(int)salary salaryMin:(int)min salaryMax:(int)max description:(id)description sell:(id)sell address:(id)address;
-(id)jobAdd:(id)add cid:(int)cid title:(id)title email:(id)email province:(id)province city:(id)city profession:(int)profession major:(int)major skills:(id)skills level:(int)level worktime:(int)worktime degree:(int)degree salary:(int)salary salaryMin:(int)min salaryMax:(int)max description:(id)description sell:(id)sell sendRec:(BOOL)rec address:(id)address recordAttach:(id)attach;
-(id)updateJobsWithUrl:(id)url page:(int)page datalist:(id)datalist limit:(int)limit;
-(id)updatePersons:(int)persons datalist:(id)datalist;
-(id)jubaoContact:(id)contact reason:(id)reason;
-(id)updateRenmais:(int)renmais gtype:(id)gtype gname:(id)gname output:(id)output progress:(int*)progress dist:(int)dist;
-(void)updateMyselfInfo:(id)info;
-(id)getUser:(int)user;
-(id)uploadContacts;
-(id)updateUsername:(id)username;
-(id)updateStatus:(int)status;
-(id)userUpdate:(id)update gender:(int)gender mobile:(id)mobile email:(id)email province:(id)province city:(id)city htProvince:(id)province7 htCity:(id)city8 address:(id)address birthday:(id)birthday purpose:(int)purpose profession:(int)profession major:(int)major skills:(id)skills level:(int)level worktime:(int)worktime degree:(int)degree salary:(int)salary company:(id)company cid:(int)cid title:(id)title sell:(id)sell weixin:(id)weixin qq:(id)qq status:(int)status jobPushFreq:(int)freq jobPushCount:(int)count skills:(id)skills28;
-(id)checkVersion:(id)version version:(id)version2;
-(id)unbindPush;
-(id)bindPush;
-(void)loginSucceed:(id)succeed forphone:(BOOL)forphone;
-(id)sendServerRequest:(id)request postData:(id)data cnttype:(id)cnttype;
-(id)uploadServerRequest:(id)request parameters:(id)parameters uploadData:(id)data cnttype:(id)cnttype;
-(id)postServerRequest:(id)request parameters:(id)parameters;
-(id)getServerRequest:(id)request parameters:(id)parameters;
-(id)getServerRequest:(id)request;
-(id)getServerUrl:(id)url;
-(id)getJobServerUrl:(id)url;
-(id)getMsgV31Url:(id)url;
-(id)getMsgServerUrl:(id)url;
-(id)getFeedV3ServerUrl:(id)url;
-(id)getGossipServerUrl:(id)url;
-(id)getAccountServerUrl:(id)url;
-(id)getToolsServerUrl:(id)url;
-(id)getTalentServerUrl:(id)url;
-(id)getUserV4ServerUrl:(id)url;
-(id)getUserServerUrl:(id)url;
-(id)getContactServerUrl:(id)url;
-(void)loadProfessionDict:(id)dict;
-(id)majorName:(int)name major:(int)major;
-(id)profName:(int)name;
-(id)pfmjtags:(int)pfmjtags major:(int)major;
-(id)getMajor:(int)major major:(int)major2;
-(id)getProf:(int)prof;
-(id)getProfByIndex:(int)index;
-(id)getGossipByGID:(int)gid;
-(id)getJobByJID:(int)jid;
-(id)getUserByTID:(id)tid;
-(id)getUserByMMID:(id)mmid;
-(void)realUploadContacts;
-(BOOL)checkAddressbookAccess;
-(id)getDatabase;
-(void)resetBasePath:(id)path;
-(void)clearData;
-(void)clearGossipCache;
-(void)clearFeedCache;
-(void)setupGlobalConfig;
-(void)setupSignUpTips;
-(id)init;
-(void)clearSearchs;
-(void)updateSearchs;
-(BOOL)isMainCity:(id)city;
-(void)makeDefaultParameters;
-(id)makeParametersAppendedDefaultsParameters:(id)parameters;
-(id)requestStringFromObject:(id)object;
-(id)makeQueryStringForParametes:(id)parametes isAddDefautParameters:(BOOL)parameters;
-(id)appendCommonParemeter:(id)paremeter;
-(id)makeQueryStringForParametes:(id)parametes;
-(void)restoreLocalConstData:(id)data;
-(void)updateFromServerConstWithDateString:(id)dateString mobile:(id)mobile;
-(void)loadSkillPids:(id)pids;
-(void)loadPubmenus:(id)pubmenus;
-(void)loadCountryCodeFromArray:(id)array;
-(void)loadProfessionsInfoFromDict:(id)dict;
-(void)loadJobPushSettingFromDict:(id)dict;
-(void)loadLocationInfoFromArray:(id)array;
-(void)updateConst:(id)aConst;
-(void)updateConst;
@end

