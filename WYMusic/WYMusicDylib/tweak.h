//
//  网易云逆向，请勿用于商业用途
//
//  Created by weiliang.sun
//
//  https://github.com/sunweiliang/NeteaseMusicCrack
//

#import <Foundation/Foundation.h>


@interface NMSearchSongCell : UITableViewCell
@end


@interface NMAlbum : NSObject
@end


@interface NMSongFile : NSObject
- (void)setCloudUrl:(NSString *)cloudUrl ;
- (NSString *)cloudUrl ;
- (void)setFileExtension:(NSString *)fileExtension ;
- (NSString *)fileExtension ;
- (void)setSize:(unsigned long long )size ;
- (unsigned long long )size ;
- (void)setBitrate:(int )bitrate ;
- (int )bitrate ;
- (void)setFileId:(NSString *)fileId ;
- (NSString *)fileId ;
- (void)encodeWithCoder:(id)arg1 ;
- (BOOL )hasDfsId ;
- (id)copyWithZone:(struct _NSZone *)arg1 ;
- (id)proxyForJson ;
- (void)fillWithDictionary:(id)arg1 ;
- (id)initWithDictionary:(id)arg1 ;
- (BOOL )isAACFile ;
- (id)init ;

- (NSString *)description ;

- (NSString *)debugDescription ;

-(NSDictionary *)swl_mapPropertiesToDictionary;
@end


@interface NMDjProgram : NSObject
@end

@interface NMDownloadProgress : NSObject
@end

@interface NMArtist : NSObject
@end

@interface MPMediaItem : NSObject
@end

@interface NMSongPrivilege : NSObject
@end

@interface NMSimplePrivateCloud : NSObject
@end

@interface NMCollection : NSObject
@end

@interface NMPlayView : NSObject
@end

@interface NMPlayingListView : NSObject
@end

@interface NMUpdateCountingRequest : NSObject
@end

@interface MCMarqueeLabel : UILabel
@end



@interface NMSongUrlInfo : NSObject
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long urlInfoSource; // @synthesize urlInfoSource=_urlInfoSource;
@property(nonatomic) long long urlcode; // @synthesize urlcode=_urlcode;
@property(nonatomic) float gain; // @synthesize gain=_gain;
@property(nonatomic) float gainDB; // @synthesize gainDB=_gainDB;

- (void)setExpireTime:(NSDate *)expireTime ;
- (NSDate *)expireTime ;
- (void)setUrl:(NSString *)url ;
- (NSString *)url ;
+ (id)urlInfoFromSongFile:(id)arg1 songId:(id)arg2 ;
- (void)setBitrate:(long long )bitrate ;
- (long long )bitrate ;
- (void)setCanExtend:(_Bool )canExtend ;
- (_Bool )canExtend ;
- (void)setFee:(long long )fee ;
- (long long )fee ;
- (unsigned long long)fileType ;
- (void)setFilesize:(unsigned long long )filesize ;
- (unsigned long long )filesize ;
- (void)fillWithDictionary:(id)arg1 ;
- (id)initWithDictionary:(id)arg1 ;
- (_Bool )isFeeSong ;
- (_Bool )isLossLess ;
- (void)setMd5:(NSString *)md5 ;
- (NSString *)md5 ;
- (_Bool)musicFileChanged:(id)arg1 ;
- (void)setPayed:(long long )payed ;
- (long long )payed ;
- (id)proxyForJson ;
- (long long )quality ;
- (id)qulityString ;
- (void)setSongId:(NSString *)songId ;
- (NSString *)songId ;
- (void)setType:(NSString *)type ;
- (NSString *)type ;
- (void)setUrlInfoSource:(long long )urlInfoSource ;
- (long long )urlInfoSource ;
- (void)setUrlcode:(long long )urlcode ;
- (long long )urlcode ;
-(NSDictionary *)swl_mapPropertiesToDictionary;
@end


@interface NMSong : NSObject
@property(retain, nonatomic) NSString *addtionName;
@property(retain, nonatomic) NSArray *addtionNames;
@property(retain, nonatomic) NSString *addtionPinyin;
@property(retain, nonatomic) NSString *addtionShuangpin;
@property(retain, nonatomic) NMAlbum *album;
@property(retain, nonatomic) NSString *albumId;
@property(retain, nonatomic) NSString *albumInitial;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSString *alg; // @synthesize alg=_alg;
@property(retain, nonatomic) NSArray *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *artistAvatarUrl; // @synthesize artistAvatarUrl=_artistAvatarUrl;
@property(retain, nonatomic) NSString *artistId; // @synthesize artistId=_artistId;
@property(retain, nonatomic) NSString *artistInitial; // @synthesize artistInitial=_artistInitial;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSString *artistNameWithAddtion; // @synthesize artistNameWithAddtion=_artistNameWithAddtion;
@property(retain, nonatomic) NSString *artistNames; // @synthesize artistNames=_artistNames;
@property(copy, nonatomic) NSDictionary *artistUserIdDict; // @synthesize artistUserIdDict=_artistUserIdDict;
@property(retain, nonatomic) NSMutableArray *artists; // @synthesize artists=_artists;
@property(retain, nonatomic) NMSongFile *auditionfile; // @synthesize auditionfile=_auditionfile;
@property(nonatomic) long long bpm; // @synthesize bpm=_bpm;
@property( nonatomic) _Bool canCommentMusic;
@property( nonatomic) _Bool canDownloadMusic;
@property( nonatomic) _Bool canEnableMusic;
@property( nonatomic) _Bool canPlayLocally;
@property( nonatomic) _Bool canPlayMusic;
@property( nonatomic) _Bool canShareMusic;
@property( nonatomic) _Bool canSubMusic;
@property(nonatomic) long long cloudType; // @synthesize cloudType=_cloudType;
@property(nonatomic) long long commentCount;
@property(retain, nonatomic) NSString *copyrightText; // @dynamic copyrightText;
@property(retain, nonatomic) NSNumber *createTime; // @dynamic createTime;
@property( copy) NSString *description;
@property(retain, nonatomic) NMDjProgram *djProgram;
@property(nonatomic) long long downloadBitrate; // @dynamic downloadBitrate;
@property(retain, nonatomic) NSString *downloadDfsId; // @dynamic downloadDfsId;
@property(nonatomic) long long downloadFailCode; // @synthesize downloadFailCode=_downloadFailCode;
@property(retain, nonatomic) NMDownloadProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(retain, nonatomic) NMSongUrlInfo *downloadUrlInfo; // @synthesize downloadUrlInfo=_downloadUrlInfo;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *equalizerString; // @synthesize equalizerString=_equalizerString;
@property(nonatomic) _Bool exclusive; // @synthesize exclusive=_exclusive;
@property( nonatomic,retain) NSString *expectedDownloadFileSize;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) _Bool fileExist; // @synthesize fileExist=_fileExist;
@property(retain, nonatomic) NMArtist *firstArtist; // @synthesize firstArtist=_firstArtist;
@property(nonatomic) unsigned long long fromType; // @synthesize fromType=_fromType;
@property( nonatomic) _Bool hasFeeIssue;
@property(nonatomic) _Bool hasGetArtistAlbumInfo; // @synthesize hasGetArtistAlbumInfo=_hasGetArtistAlbumInfo;
@property(nonatomic) _Bool hasGetCommentCount; // @synthesize hasGetCommentCount=_hasGetCommentCount;
@property(nonatomic) _Bool hasGetRewardCount; // @synthesize hasGetRewardCount=_hasGetRewardCount;
@property( nonatomic) _Bool hasRingTone;
@property(retain, nonatomic) NMSongFile *hfile; // @synthesize hfile=_hfile;
@property(retain, nonatomic) NSString *initial; // @synthesize initial;
@property( nonatomic) _Bool isCloudSong;
@property( nonatomic) _Bool isFeeSong;
@property( nonatomic) _Bool isFeeSongPaid;
@property( nonatomic) _Bool isInCloud;
@property( nonatomic) _Bool isInMyCloud;
@property( nonatomic) _Bool isInSongLib; // @dynamic isInSongLib;
@property( nonatomic) _Bool isMigu; // @dynamic isMigu;
@property( nonatomic) _Bool isPlayOnlySong;
@property(nonatomic) _Bool isPod; // @synthesize isPod=_isPod;
@property( nonatomic) _Bool isRadio;
@property( nonatomic) _Bool isRegionOffline;
@property( nonatomic) _Bool isServerOffline;
@property( nonatomic) _Bool isThirdParty; // @dynamic isThirdParty;
@property( nonatomic) _Bool isUnavailableMusic;
@property(retain, nonatomic) NMSongFile *lfile; // @synthesize lfile=_lfile;
@property( nonatomic,retain) NSString *link; // @dynamic link;
@property(retain, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) NMSongFile *mfile; // @synthesize mfile=_mfile;
@property(retain, nonatomic) NSString *mvId; // @synthesize mvId=_mvId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *nameWithAddtion; // @synthesize nameWithAddtion=_nameWithAddtion;
@property( nonatomic) _Bool needSelectTargetDownloadBitrate;
@property( nonatomic) _Bool needSyncRingToneInfo;
@property(retain, nonatomic) NSString *persistId; // @synthesize persistId=_persistId;
@property(retain, nonatomic) NSString *pinYin; // @synthesize pinYin=_pinYin;
@property(retain, nonatomic) NMSongUrlInfo *playUrlInfo; // @synthesize playUrlInfo=_playUrlInfo;
@property(retain, nonatomic) NSArray *playlistIds; // @dynamic playlistIds;
@property(nonatomic) long long popularity; // @synthesize popularity=_popularity;
@property(retain, nonatomic) NMSongPrivilege *privilege; // @dynamic privilege;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property( nonatomic,retain) NSString *qulityString;
@property(nonatomic) long long radioType; // @synthesize radioType=_radioType;
@property(nonatomic) long long rewardCount; // @synthesize rewardCount=_rewardCount;
@property(nonatomic) long long ringToneInfo; // @synthesize ringToneInfo=_ringToneInfo;
@property(retain, nonatomic) NSString *ringtoneUrl; // @synthesize ringtoneUrl=_ringtoneUrl;
@property(retain, nonatomic) NMSongUrlInfo *savedDownloadUrlInfo; // @synthesize savedDownloadUrlInfo=_savedDownloadUrlInfo;
@property(nonatomic) long long serverDuration; // @synthesize serverDuration=_serverDuration;
@property(retain, nonatomic) NSString *shuangPin; // @synthesize shuangPin=_shuangPin;
@property(retain, nonatomic) NMSimplePrivateCloud *simplePrivateCloud; // @synthesize simplePrivateCloud=_simplePrivateCloud;
@property(retain, nonatomic) NSArray *songFile; // @synthesize songFile=_songFile;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(retain, nonatomic) NMCollection *source; // @synthesize source=_source;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NMSongFile *targetDownloadSongFile; // @synthesize targetDownloadSongFile=_targetDownloadSongFile;
@property(retain, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(retain, nonatomic) NSString *trackDisc; // @synthesize trackDisc=_trackDisc;
@property(nonatomic) long long trackNumber; // @synthesize trackNumber=_trackNumber;
@property(retain, nonatomic) NSArray *transNames; // @synthesize transNames=_transNames;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) long long userAverageBpm; // @synthesize userAverageBpm=_userAverageBpm;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *whereCopyFrom; // @synthesize whereCopyFrom=_whereCopyFrom;
@property( nonatomic,retain) NSString *songIDWithCloudState;


- (void)setPlayUrlInfo:(NMSongUrlInfo *)playUrlInfo ;
- (NMSongUrlInfo *)playUrlInfo ;

- (void)setSavedDownloadUrlInfo:(NMSongUrlInfo *)savedDownloadUrlInfo ;
- (NMSongUrlInfo *)savedDownloadUrlInfo ;

- (void)setDownloadUrlInfo:(NMSongUrlInfo *)downloadUrlInfo ;
- (NMSongUrlInfo *)downloadUrlInfo ;


-(void)setCanCommentMusic:(bool)canCommentMusic;
-(bool)canCommentMusic;

-(void)setCanDownloadMusic:(bool)canDownloadMusic;
-(bool)canDownloadMusic;

-(void)setCanEnableMusic:(bool)canEnableMusic;
-(bool)canEnableMusic;

-(void)setCanPlayLocally:(bool)canPlayLocally;
-(bool)canPlayLocally;

-(void)setCanPlayMusic:(bool)canPlayMusic;
-(bool)canPlayMusic;

-(void)setCanShareMusic:(bool)canShareMusic;
-(bool)canSubMusic;

-(void)setIsFeeSong:(bool)isFeeSong;
-(bool)isFeeSong;

-(void)setIsFeeSongPaid:(bool)isFeeSongPaid;
-(bool)isFeeSongPaid;

-(void)setIsPlayOnlySong:(bool)isPlayOnlySong;
-(bool)isPlayOnlySong;

-(void)setIsUnavailableMusic:(bool)isUnavailableMusic;
-(bool)isUnavailableMusic;

///>>>>>>>>>>>>>>>>>>>>>>>>>>>

-(void)setIsRegionOffline:(bool)isRegionOffline;
-(bool)isRegionOffline;

-(void)setIsServerOffline:(bool)isServerOffline;
-(bool)isServerOffline;

-(void)setIsCloudSong:(bool)isCloudSong;
-(bool)isCloudSong;

-(void)setIsInCloud:(bool)isInCloud;
-(bool)isInCloud;

-(void)setIsInMyCloud:(bool)isInMyCloud;
-(bool)isInMyCloud;

-(void)setIsInSongLib:(bool)isInSongLib;
-(bool)isInSongLib;

-(void)setIsMigu:(bool)isMigu;
-(bool)isMigu;

-(void)setIsRadio:(bool)isRadio;
-(bool)isRadio;

-(void)setIsThirdParty:(bool)isThirdParty;
-(bool)isThirdParty;

-(NSDictionary *)swl_mapPropertiesToDictionary;
-(void)swl_updatesavedownload_downloadinfo:(NMSongUrlInfo *)playUrlInfo;

+ (id)parseSongIdWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

- (void)setSwlMakeMoney:(BOOL)sender;
- (BOOL)swlMakeMoney;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithID3TagDict:(id)arg1 filesize:(unsigned long long)arg2 isLossLess:(_Bool)arg3;
- (id)initWithMediaItem:(id)arg1;

@end


@interface NMPlayer : NSObject
@property( nonatomic,retain) NMSong *song;
@end

@interface NMSearchSong : NMSong
@property(retain, nonatomic) NSAttributedString *attributedLrc;
- (void)fillWithDictionary:(id)arg1;
@property(retain, nonatomic) NSArray *foldSongs;
@property(nonatomic) _Bool folded;
@property(nonatomic) _Bool hasLrc;
@property(retain, nonatomic) NSString *lrc;
@property(nonatomic) struct CGSize lyricTextSize;
- (void)makeLrcOneLine;
@property(retain, nonatomic) NSArray *matchedRanges;

@end

@interface NMPlayerManager : NSObject
+ (id)defaultManager;
+ (id)currentSong;
- (void)playSong:(id)arg1;
@end



@interface NMPlayViewController : UIViewController
@property(retain, nonatomic) NMSong *currentShownSong;
- (void)moreButtonClicked:(id)arg1;
-(void)swlGetReallyMusicURL:(NSDictionary *)fields data:(NSString *)data musicId:(NSString *)musicId;
- (NSString *)URLEncodeToPercentEscapeString: (NSString *) input;
- (void)downloadButtonClicked:(id)arg1;
@end



@interface NMMV : NSObject
@end
@interface NMDownloadJob : NSObject
@end
@interface NMDownloadQualityMenu : NSObject
@end
@interface NMMVDownloadJob : NSObject
@end
@interface NMDjDownloadMenu : NSObject
@end


@interface NMNewDownloadManager : NSObject
+ (id)defaultManager ;
+ (id)downloadFailReason:(long long)arg1 ;
+ (void)executeBlockOnManagerThread:(int)arg1 ;
+ (long long)getFailCodeWithUrlCode:(long long)arg1 ;
+ (void)performBlockOnDownloadThread:(int)arg1 waitUntilDone:(_Bool)arg2 ;
- (void)_downloadBatchSongs:(id)arg1 isDownloadAll:(_Bool)arg2 collection:(id)arg3 completeBlock:(int)arg4 ;
- (void)_manualResumeDownloadMVAfterFeeCheck:(id)arg1 ;
- (void)_manualResumeDownloadSongAfterFeeCheck:(id)arg1 ;
- (void)_processAddToDownloadQueue:(id)arg1 sourcePlaylistId:(id)arg2 type:(unsigned long long)arg3 hasPrivateCloudStored:(_Bool)arg4 ;
- (void)_processAddToMVDownloadQueue:(id)arg1 ;
- (void)_sendDownloadStatusInBackground:(id)arg1 ;
- (void)addToDownloadQueue:(id)arg1 sourcePlaylistId:(id)arg2 type:(unsigned long long)arg3 hasPrivateCloudStored:(_Bool)arg4 ;
- (void)afterAddedDownloadToDB:(id)arg1 type:(unsigned long long)arg2 isSuccess:(_Bool)arg3 hasPrivateCloudStored:(_Bool)arg4 ;
- (id)calcDownloadStatistic ;
- (id)calcDownloadStatisticInFMDatabase:(id)arg1 ;
- (id)calcDownloadStatisticWithDetail:(_Bool)arg1 ;
- (id)calcDownloadStatisticWithDetail:(_Bool)arg1 database:(id)arg2 ;
- (void)cancelDownload:(id)arg1 ;
- (void)cancelDownload:(id)arg1 finishedCallbackOnMainThread:(int)arg2 ;
- (void)cancelDownload:(id)arg1 notificationObject:(id)arg2 ;
- (void)cancelDownload:(id)arg1 notificationObject:(id)arg2 targetPlaylistId:(id)arg3 finishedCallbackOnMainThread:(int)arg4 ;
- (void)cancelDownload:(id)arg1 targetPlaylistId:(id)arg2 finishedCallbackOnMainThread:(int)arg3 ;
- (void)cancelDownloadAllSongs ;
- (void)cancelDownloadDJProgram:(id)arg1 djProgramId:(id)arg2 ;
- (void)cancelDownloadMV:(id)arg1 ;
- (void)checkDownloadIn2G3GCapability:(int)arg1 needAlertWhenEnable3G:(_Bool)arg2 ;
- (void)continueDownloadOnDownloadThread ;
- (void)continueManualDownloadMVs:(id)arg1 ;
- (void)continueManualDownloadProgram:(id)arg1 ;
- (void)continueManualDownloadSongs:(id)arg1 ;
- (void)setCurrentMV:(NMMV *)currentMV ;
- (NMMV *)currentMV ;
- (void)setCurrentSong:(NMSong *)currentSong ;
- (NMSong *)currentSong ;
- (void)dealloc ;
- (void)deleteDownloadWithConfirm:(id)arg1 isDjProgram:(_Bool)arg2 ;
- (void)setDisplayedQualityMenuForSingle:(_Bool )displayedQualityMenuForSingle ;
- (_Bool )displayedQualityMenuForSingle ;
- (void)djDownloadMenu:(id)arg1 downloadWithSelectedSongFile:(id)arg2 ;
- (void)setDjMenu:(NMDjDownloadMenu *)djMenu ;
- (id)downloadArtistAvatarUrl:(id)arg1 ;
- (id)downloadArtistAvatarUrlForIpadV1Conversion:(id)arg1 ;
- (void)downloadBatchSongs:(id)arg1 isDownloadAll:(_Bool)arg2 collection:(id)arg3 completeBlock:(int)arg4 ;
- (void)downloadDjProgram:(id)arg1 completeBlock:(int)arg2 ;
- (void)downloadExceedDiskSpace ;
- (void)downloadExceedDiskSpace:(id)arg1 ;
- (void)setDownloadJob:(NMDownloadJob *)downloadJob ;
- (NMDownloadJob *)downloadJob ;
- (void)downloadMV:(id)arg1 targetQuality:(id)arg2 completeBlock:(int)arg3 ;
- (void)downloadMVPreCheck:(id)arg1 completeBlock:(int)arg2 ;
- (void)downloadPlaySong:(id)arg1 collection:(id)arg2 ;
- (void)downloadProgress:(id)arg1 progress:(double)arg2 ;
- (void)setDownloadQualityMenu:(NMDownloadQualityMenu *)downloadQualityMenu ;
- (NMDownloadQualityMenu *)downloadQualityMenu ;
- (id)downloadRunLoop ;
- (void)downloadSongComplete:(id)arg1 ;
- (void)downloadSongFail:(id)arg1 ;
- (void)setDownloadingSongType:(unsigned long long )downloadingSongType ;
- (unsigned long long )downloadingSongType ;
- (void)executeDownloadJob ;
- (id)getCurrentQeueuStatus ;
- (id)getDownloadedMV:(id)arg1 ;
- (id)getNextNeedDownload ;
- (unsigned long long)getSongState:(id)arg1 ;
- (unsigned long long)getTempDownloadMVFileSize:(id)arg1 mvQuality:(id)arg2 ;
- (void)setHasDownloadingSong:(_Bool )hasDownloadingSong ;
- (_Bool )hasDownloadingSong ;
- (void)setHasNewDownloadDJProgram:(_Bool )hasNewDownloadDJProgram ;
- (_Bool )hasNewDownloadDJProgram ;
- (void)setHasNewDownloadMV:(_Bool )hasNewDownloadMV ;
- (_Bool )hasNewDownloadMV ;
- (_Bool)inDownloadQueue:(id)arg1 ;
- (id)init ;
- (void)setIsDownloading:(_Bool )isDownloading ;
- (_Bool )isDownloading ;
- (_Bool)isMVDownloading:(id)arg1 ;
- (_Bool)isSongDownloading:(id)arg1 ;
- (void)loadAllDownloadCountStatistic:(int)arg1 ;
- (void)loadAllDownloadMVs:(int)arg1 ;
- (void)loadAllDownloadedDjPrograms:(int)arg1 ;
- (void)loadAllDownloadedMVs:(int)arg1 ;
- (void)loadAllDownloadedSongs:(int)arg1 ;
- (void)loadAllDownloadedSongsAndDownloadingSongCount:(int)arg1 ;
- (void)loadAllDownloadingMVs:(int)arg1 ;
- (void)loadAllDownloadingSongs:(int)arg1 ;
- (void)manualResumeDownloadAllSongs ;
- (void)setMvDownloadJob:(NMMVDownloadJob *)mvDownloadJob ;
- (NMMVDownloadJob *)mvDownloadJob ;
- (void)mvDownloadJob:(id)arg1 downloadMVComplete:(id)arg2 ;
- (void)mvDownloadJob:(id)arg1 downloadMVFail:(id)arg2 ;
- (void)mvDownloadJob:(id)arg1 downloadProgress:(id)arg2 progress:(double)arg3 ;
- (_Bool)needDownload:(id)arg1 ;
- (_Bool)needDownloadBaseDB:(id)arg1 ;
- (long long)newAddedDownloadCount:(id)arg1 ;
- (void)pauseDownloadAllSongs ;
- (void)pauseDownloadAllSongsForIphone ;
- (void)pauseDownloadSong:(id)arg1 ;
- (void)performAutoDownloadInMainThread ;
- (void)performAutoDownloadJobSetupInMainThread:(id)arg1 ;
- (void)performDownloadFinishInMainThread:(id)arg1 ;
- (void)performDownloadInMainThread:(id)arg1 ;
- (void)proceedAutoDownloadJobSetupInMainThread:(id)arg1 ;
- (void)reachabilityChanged:(id)arg1 ;
- (void)resetDownloadWorkStatus ;
- (void)resumeAutoDownload ;
- (void)runDownloadManagerThread ;
- (void)sendCurrentDownloadProgress:(id)arg1 ;
- (void)sendCurrentDownloadStatus:(id)arg1 ;
- (void)sendDownloadStatusInBackground:(id)arg1 ;
- (void)showAddToPlaylistView:(id)arg1 ;
- (void)showAddToPlaylistView:(id)arg1 autoCreateNewPlaylist:(_Bool)arg2 defaultName:(id)arg3 ;
- (void)showAutoDownloadingIn2G3GAlertOnMainThread ;
- (void)showDownloadQualitySelectMenu:(id)arg1 sourcePlaylistId:(id)arg2 hasPrivateCloudStored:(_Bool)arg3 ;
- (void)singleDownloadSong:(id)arg1 collection:(id)arg2 completeBlock:(int)arg3 ;
- (void)startDownload:(id)arg1 sourcePlaylistId:(id)arg2 ;
- (void)startDownload:(id)arg1 sourcePlaylistId:(id)arg2 hasPrivateCloudStored:(_Bool)arg3 ;
- (void)startDownloadDJProgram:(id)arg1 djSongFile:(id)arg2 ;
- (void)startDownloadDJProgram:(id)arg1 djUrlInfo:(id)arg2 ;
- (void)startDownloadMV:(id)arg1 targetMVQuality:(id)arg2 ;
- (void)stopDownloadAll ;
- (void)subscribeMVToDownload:(id)arg1 targetQuality:(id)arg2 ;
- (void)togglePauseDownloadMV:(id)arg1 isPause:(_Bool)arg2 ;
- (void)togglePauseDownloadProgram:(id)arg1 isPause:(_Bool)arg2 ;
- (void)togglePauseDownloadSong:(id)arg1 isPause:(_Bool)arg2 ;
- (void)userHasDownloadSongs:(int)arg1 ;
- (NSString *)debugDescription ;
- (NSString *)description ;
-(NSDictionary *)swl_mapPropertiesToDictionary;
@end





@interface NMCopyRightChecker : NSObject
+ (_Bool)alertCommentFeeIssueWithThreadId:(id)arg1;
+ (_Bool)canBuySingle:(long long)arg1;
+ (long long)checkAndAlertCopyrightIssue:(id)arg1 action:(unsigned long long)arg2 needAlert:(_Bool)arg3;
+ (long long)checkCopyright:(id)arg1 action:(unsigned long long)arg2 needAlert:(_Bool)arg3;
+ (long long)checkCopyrightOnly:(id)arg1 action:(unsigned long long)arg2;
+ (long long)checkMVAndAlertCopyrightIssue:(id)arg1 action:(unsigned long long)arg2 needAlert:(_Bool)arg3;
+ (long long)checkMVCopyright:(id)arg1 action:(unsigned long long)arg2 needAlert:(_Bool)arg3;
+ (long long)checkMVCopyrightOnly:(id)arg1 action:(unsigned long long)arg2;
+ (_Bool)isCopyrighted:(id)arg1 action:(unsigned long long)arg2;
+ (_Bool)isMVCopyrighted:(id)arg1 action:(unsigned long long)arg2;
@end



@interface NMAppDelegate : NSObject
+ (id)appDelegate;
+ (id)appMainViewController;
+ (id)appNavigationController;
+ (void)initialize;
+ (_Bool)isDevelopApp;
+ (_Bool)keyWindowIsAlert;
+ (id)loginNavigationController;
+ (id)parseencryptedSPWhiteList:(id)arg1;
- (void)_BILogForSkinAndAlarm;
- (void)_addBILogForSPNotice:(id)arg1 actionName:(id)arg2;
- (void)_doLogBIForSkinAndAlarm:(id)arg1 title:(id)arg2 resourceId:(id)arg3;
- (void)_processAfterLogin:(id)arg1 openPlatformType:(long long)arg2;
- (void)_processPassportDidLogOutAndClearOnlyData:(_Bool)arg1;
- (void)adBackgroundView:(id)arg1 tappedWithUrl:(id)arg2;
- (void)adBackgroundViewSkipAd:(id)arg1;
- (void)addStartupLog;
- (void)alarmRingAfterDelay;
- (void)alarmRingEndPlay:(id)arg1;
- (void)alarmRingStartPlay:(id)arg1;
- (void)setAnonyModelViewLogin:(_Bool )anonyModelViewLogin ;
- (_Bool )anonyModelViewLogin ;
- (void)appGuideViewLoginClicked:(id)arg1;
- (void)appGuideViewWillDismiss:(id)arg1;
- (double)appScrollBottomEdgeIset;
- (double)appScrollTopEdgeInset;
- (void)setAppWillTerminate:(_Bool )appWillTerminate ;
- (_Bool )appWillTerminate ;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(NSInteger)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(NSInteger)arg4;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(NSInteger)arg4;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(NSInteger)arg3;
- (void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(NSInteger)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(NSInteger)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)setBgUrlSessionCallBack:(NSInteger )bgUrlSessionCallBack ;
- (NSInteger )bgUrlSessionCallBack ;
- (void)buyVipDidShow:(id)arg1;
- (void)checkBlockedStrategy;
- (void)checkColorTouchVersion;
- (void)checkForNotifyAlarm:(id)arg1;
- (_Bool)checkHostSPQualified:(id)arg1;
- (void)checkNetworkState;
- (void)checkNotifySPStatusChangedAfterMainView;
- (void)checkPermissions;
- (void)checkPointPayment;
- (void)checkPushNotification;
- (void)checkSettingListThumbnailIcon;
- (void)checkStoreWebConfig;
- (void)checkToNotifySPOpen;
- (void)checkToNotifyYunBuOpen;
- (_Bool)checkUpdate:(id)arg1;
- (_Bool)checkUrlGotoSPProxyQualified:(id)arg1;
- (void)checkVersion:(_Bool)arg1;
- (void)clearOfflineImagesOnce;
- (void)conversionProgress:(id)arg1;
- (void)dealloc;
- (void)defaultLogin;
- (void)didReceiveQQResponse:(id)arg1;
- (void)didReceiveWeiboRequest:(id)arg1;
- (void)didReceiveWeiboResponse:(id)arg1;
- (void)dismissAdvertisementView:(id)arg1;
- (void)doCheckVersion;
- (void)fillUserInfoWithData:(id)arg1 response:(id)arg2;
- (void)firstLoginProfileSettingDidFinished:(id)arg1;
- (void)setGetPointFromMsgShare:(_Bool )getPointFromMsgShare ;
- (_Bool )getPointFromMsgShare ;
- (void)gotoDownloadControllerFromSource:(unsigned long long)arg1;
- (void)gotoRadioControllerFromSource:(unsigned long long)arg1;
- (void)gotoRecognizeControllerFromSource:(unsigned long long)arg1;
- (void)gotoSearchControllerFromSource:(unsigned long long)arg1;
- (void)gotoUnicomPaymentController;
- (void)handleLocalNotification:(id)arg1;
- (void)handlePush:(id)arg1;
- (void)hideViewFinished;
- (void)iPodLibraryDidChange:(id)arg1;
- (void)iPodScanFinished:(id)arg1;
- (_Bool )isLimitedVersion ;
- (_Bool)isRecognizeUrlScheme:(id)arg1;
- (struct CGRect)landscapeApplicationFrame;
- (void)launchWithPush:(id)arg1;
- (void)launchWithUrlScheme:(id)arg1 pushId:(id)arg2 launchSource:(unsigned long long)arg3;
- (void)lazyDoJobs;
- (void)setLocalNotification:(UILocalNotification *)localNotification ;
- (UILocalNotification *)localNotification ;
- (void)setLocalSeverHost:(NSString *)localSeverHost ;
- (NSString *)localSeverHost ;
- (void)logActiveSourceLog:(id)arg1 fromSource:(unsigned long long)arg2;
- (void)logUnicomProxyInfo;
- (void)loginControllerPushIntoPhoneLoginController;
- (UIViewController *)loginNavigationController ;
- (void)loginStateChanged;
- (UIViewController *)mainNavigationController ;
- (UIViewController *)mainViewController ;
- (void)setMaxCacheSize:(long long )maxCacheSize ;
- (long long )maxCacheSize ;
- (void)memoryWarning;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)needNotifySPStatusChanged:(id)arg1;
- (void)needNotifySPTrialException:(id)arg1;
- (void)notifyForceUpdate;
- (void)notifyOpenUnicom;
- (void)notifySPStatusChanged;
- (void)notifySPTrialException;
- (void)notifyUpdate:(id)arg1 text:(id)arg2 title:(id)arg3;
- (void)setOfflineMode:(_Bool )offlineMode ;
- (_Bool )offlineMode ;
- (void)onReceiveRequest:(id)arg1;
- (void)onReceiveResponse:(id)arg1;
- (void)onReq:(id)arg1;
- (void)onResp:(id)arg1;
- (void)passport:(id)arg1 didFailToLogInWithError:(id)arg2;
- (void)passportDidLogIn:(id)arg1;
- (void)passportDidLogOut:(id)arg1;
- (void)passportDidLogOutAndClearOnlyData:(id)arg1;
- (void)passportDidStartLoggedIn:(id)arg1;
- (void)performSwitchViewWithAnimation:(id)arg1;
- (void)performSwitchViewWithAnimationInDelay:(id)arg1;
- (struct CGRect)portraitApplicationFrame;
- (void)processUrlScheme:(id)arg1;
- (void)processUrlScheme:(id)arg1 pushId:(id)arg2 source:(unsigned long long)arg3;
- (void)pushModalViewController:(id)arg1;
- (void)pushNavigationController:(id)arg1;
- (void)pushNavigationController:(id)arg1 animated:(_Bool)arg2;
- (void)reachabilityChanged:(id)arg1;
- (void)refreshCurrentUserProfile;
- (void)refreshStartUp;
- (void)refreshUMG;
- (void)requestCompleted:(id)arg1;
- (void)requestFailed:(id)arg1;
- (_Bool)resignFirstResponder;
- (void)setResourceFromMsgShare:(id )resourceFromMsgShare ;
- (id )resourceFromMsgShare ;
- (void)resumeAutoDownload;
- (void)scanID3ForRecommend;
- (id)sendAnonymousRequestSynchronousUseHttps:(_Bool)arg1 error:(id *)arg2 response:(id *)arg3;
- (NSString *)sessionID ;
- (void)setUnicomWhilteList:(NSMutableArray *)unicomWhilteList ;
- (NSMutableArray *)unicomWhilteList ;
- (void)setUrlSchemeController:(UIViewController *)urlSchemeController ;
- (UIViewController *)urlSchemeController ;
- (void)setUrlSchemeGotoDownloadController:(_Bool )urlSchemeGotoDownloadController ;
- (_Bool )urlSchemeGotoDownloadController ;
- (void)setUrlSchemeGotoInboxCommentController:(_Bool )urlSchemeGotoInboxCommentController ;
- (_Bool )urlSchemeGotoInboxCommentController ;
- (void)setUrlSchemeGotoInboxPrivateMessageController:(_Bool )urlSchemeGotoInboxPrivateMessageController ;
- (_Bool )urlSchemeGotoInboxPrivateMessageController ;
- (void)setUrlSchemeGotoMyRadioController:(_Bool )urlSchemeGotoMyRadioController ;
- (_Bool )urlSchemeGotoMyRadioController ;
- (void)setUrlSchemeGotoRadioController:(_Bool )urlSchemeGotoRadioController ;
- (_Bool )urlSchemeGotoRadioController ;
- (void)setUrlSchemeGotoRecognizeController:(_Bool )urlSchemeGotoRecognizeController ;
- (_Bool )urlSchemeGotoRecognizeController ;
- (void)setUrlSchemeGotoRunFmController:(_Bool )urlSchemeGotoRunFmController ;
- (_Bool )urlSchemeGotoRunFmController ;
- (void)setUrlSchemeGotoSearchController:(_Bool )urlSchemeGotoSearchController ;
- (_Bool )urlSchemeGotoSearchController ;
- (void)setUrlSchemeGotoUnicomPaymentController:(_Bool )urlSchemeGotoUnicomPaymentController ;
- (_Bool )urlSchemeGotoUnicomPaymentController ;
- (void)setWindow:(id)window ;
- (id)window ;
- (void)setupDeviceCookies;
- (void)showAdvertisementIfNeeded;
- (void)showGuide;
- (void)showLoginViewFinished;
- (void)spIsAvailableButNotActive:(id)arg1;
- (void)spServiceIsExpired:(id)arg1;
- (void)spStatusChanged:(id)arg1;
- (void)stopRing;
- (void)switchViewWithAnimation:(_Bool)arg1;
- (void)updateProgress;
- (void)updateSessionID;
- (void)uploadIDFA;
- (_Bool)validUniversalLink:(id)arg1;
- (_Bool)validUrlScheme:(id)arg1;
- (NSString *)debugDescription ;
- (NSString *)description ;
@end



@interface NMAdBackgroundView : UIView
- (_Bool)showAd:(_Bool)arg1;
- (void)skipButtonClicked:(id)arg1;
@end



@interface NMAlreadyDownloadView : UIView
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableReloadData;
@end



@interface NMPrivateCloudViewController : UIViewController
- (void)viewDidAppear:(_Bool)arg1;
@end



@interface NMSqliteManager : NSObject
+ (id)appendantSqlitePath;
+ (id)defaultManager;
+ (id)generateLogErrorMsg:(id)arg1 userInfo:(id)arg2;
+ (id)sqlitePath;
+ (id)sqlitePathv2;
- (void)_addOrUpdateMVs:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)_cleanPlaylistTracks:(id)arg1;
- (id)_combineStatisticResult:(id)arg1 withMVDict:(id)arg2 needDetail:(_Bool)arg3;
- (void)_fixJobCreateTimeAndState:(id)arg1;
- (void)_fixJobUpdateTime:(id)arg1;
- (void)_internalRefreshPlaylistTracks:(id)arg1 playlist:(id)arg2 callbackBlock:(void (^)(void))arg3;
- (void)_internalRefreshProgramState:(id)arg1;
- (void)_internalRefreshSongCache:(id)arg1;
- (void)_internalRefreshSongIpodState:(id)arg1 songIds:(id)arg2;
- (void)_internalRefreshSongState:(id)arg1 sourceSongArray:(id)arg2;
- (void)addDownloadMVs:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)addDownloadProgramSongs:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)addDownloadSongs:(id)arg1 sourcePlaylistId:(id)arg2 callbackBlock:(void (^)(void))arg3;
- (void)addDownloadedSongsToPlaylist:(id)arg1 inPlaylist:(id)arg2 callbackBlock:(void (^)(void))arg3;
- (void)addLocalPrivateMsg:(id)arg1 userId:(id)arg2 callbackBlock:(void (^)(void))arg3;
- (void)addOrUpdateLocalEvent:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)addOrUpdateOfflinePackageSong:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)addOrUpdateOfflinePackageSongs:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)addOrUpdateRecentPlay:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)addOrUpdateRecentPlayCollection:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)addOrUpdateSongs:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)addPlaylist:(id)arg1 userId:(id)arg2 callbackBlock:(void (^)(void))arg3;
- (void)addPlaylistTracks:(id)arg1 playlist:(id)arg2 callbackBlock:(void (^)(void))arg3;
- (void)addRecentPlayForConversion:(id)arg1 userId:(id)arg2;
- (void)alterTable_UserVersion_2;
- (void)alterTable_UserVersion_3;
- (void)batchUpdateSongClientEq:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)batchUpdateSongJson:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (id)calcDownloadStatisticNeedDetail:(_Bool)arg1;
- (void)calcDownloadStatisticNeedDetail:(_Bool)arg1 callbackBlock:(void (^)(void))arg2;
- (id)calcDownloadStatisticNeedDetail:(_Bool)arg1 database:(id)arg2;
- (void)calcDownloadStatusDetail:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)checkHasLocalEvents:(void (^)(void))arg1;
- (void)checkHasLocalPrivateMsgToUserList:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (int)checkUserVersion;
- (void)clearAllRecentPlays:(void (^)(void))arg1;
- (void)clearAllTrackVersionInChildThread;
- (void)createOfflineSportFMTable;
- (void)createTable;
- (void)dealloc;
- (void)deleteAllRecentPlayCollectionsWithCallbackBlock:(void (^)(void))arg1;
- (void)deleteDownloadWithIds:(id)arg1 resourceType:(unsigned long long)arg2 callbackBlock:(void (^)(void))arg3;
- (void)deleteLocalEvents:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)deleteOfflinePackageSong:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)deleteOfflinePackageSongs:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)deletePlaylist:(id)arg1 userId:(id)arg2 callbackBlock:(void (^)(void))arg3;
- (void)deletePlaylistTracks:(id)arg1 playlistId:(id)arg2 callbackBlock:(void (^)(void))arg3;
- (void)deleteRecentPlayCollection:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)doIpodMatchResultConversion;
- (void)downloadComplete:(id)arg1 isSucc:(_Bool)arg2 callbackBlock:(void (^)(void))arg3;
- (void)downloadMVComplete:(id)arg1 isSucc:(_Bool)arg2 callbackBlock:(void (^)(void))arg3;
- (void)getAllDownloadDj:(void (^)(void))arg1;
- (void)getAllDownloadedDj:(void (^)(void))arg1;
- (void)getAllDownloadedSongs:(void (^)(void))arg1;
- (void)getAllDownloadedSongsAndDowloadingSongCount:(void (^)(void))arg1;
- (void)getAllDownloadingSongs:(void (^)(void))arg1;
- (void)getAllPlaylistFromDB:(void (^)(void))arg1;
- (id)getDBProgramSongDictBySongIds:(id)arg1;
- (id)getDBSongDictBySongIds:(id)arg1;
- (id)getDbSong:(id)arg1;
- (id)getDbSongList:(id)arg1;
- (id)getDownloadSongPath:(id)arg1;
- (id)getDownloadedSongInfo:(id)arg1;
- (void)getDownloadedSongsTopCount:(long long)arg1 callbackBlock:(void (^)(void))arg2;
- (unsigned long long)getMVState:(id)arg1;
- (id)getOfflineSongInfo:(id)arg1;
- (id)getPlaylistById:(id)arg1 userId:(id)arg2;
- (unsigned long long)getPlaylistCountByUserId:(id)arg1;
- (void)getPlaylistsByUserId:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)getRecentPlayCount:(void (^)(void))arg1;
- (unsigned long long)getSongCountByUserId:(id)arg1;
- (long long)getSongState:(id)arg1;
- (void)getUnDownloadMVForAuto:(void (^)(void))arg1;
- (void)getUnDownloadMVForManual:(void (^)(void))arg1;
- (void)getUnDownloadSongsAndDjAndMVForAuto:(void (^)(void))arg1;
- (void)hasDownloadSong:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (id)init;
- (void)insertToHeadOfPlayingList:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)insertToTailOfPlayingList:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)loadAllDownloadMVs:(void (^)(void))arg1;
- (id)loadAllIpodSongs;
- (void)loadAllLocalEvents:(void (^)(void))arg1;
- (void)loadAllLocalPrivateMsgToUser:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)loadDjProgram:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)loadDjRadioPlayInfo:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)loadDownloadMV:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)loadDownloadedMVs:(void (^)(void))arg1;
- (void)loadDownloadingMVs:(void (^)(void))arg1;
- (id)loadIpodSongs:(id)arg1;
- (void)loadOfflinePackageMusic:(void (^)(void))arg1;
- (void)loadPlayingList:(void (^)(void))arg1;
- (void)loadPlaylistCache:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)loadRecentPlayCollections:(void (^)(void))arg1;
- (void)loadRecentPlayResourcesWithCount:(unsigned long long)arg1 finished:(void (^)(void))arg2;
- (void)loadSongsByIds:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)manualResumeDownloadWork:(void (^)(void))arg1;
- (void)openAppendantSqliteDatabase;
- (void)openSqliteDatabasev2;
- (void)playStateChanged:(id)arg1;
- (void)programFixed:(id)arg1;
- (void)radioPlayChanged:(id)arg1;
- (void)refreshDjProgramStateOfProgramList:(id)arg1;
- (void)refreshDjProgramStateOfProgramList:(id)arg1 finishedCallback:(void (^)(void))arg2;
- (void)refreshMVInfoOfMVList:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)refreshPlaylistTracks:(id)arg1 playlist:(id)arg2 callbackBlock:(void (^)(void))arg3;
- (void)refreshRecentPlayCountForConversion:(id)arg1;
- (void)refreshSongStateOfSongList:(id)arg1;
- (void)refreshSongStateOfSongList:(id)arg1 finishedCallback:(void (^)(void))arg2;
- (void)refreshSongStateOfSongList:(id)arg1 needCheckIpod:(_Bool)arg2 needCheckCache:(_Bool)arg3 finishedCallback:(void (^)(void))arg4;
- (void)refreshSongsAndPlaylist:(id)arg1 playlist:(id)arg2 callbackBlock:(void (^)(void))arg3;
- (void)reloadPlaylist:(id)arg1 userId:(id)arg2 callbackBlock:(void (^)(void))arg3;
- (void)removeAllPlayingListWithCallbackBlock:(void (^)(void))arg1;
- (void)removeFromPlayingList:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)removeInvalidIpodSongs:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)removeLocalPrivateMsg:(id)arg1 userId:(id)arg2 callbackBlock:(void (^)(void))arg3;
- (void)removeRecentPlay:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)saveDjRadioPlayInfo:(id)arg1 lastPlayTime:(double)arg2 isRadioEnd:(_Bool)arg3 callbackBlock:(void (^)(void))arg4;
- (void)saveIpodSong:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)saveIpodSongList:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)syncCurrentDownloadCount:(void (^)(void))arg1;
- (void)syncPlaylistDownloadCount:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)syncRecentPlayCount:(long long)arg1 callbackBlock:(void (^)(void))arg2;
- (void)syncRefreshSongCacheOrIpodStateOfSongList:(id)arg1;
- (void)syncSaveDjRadioPlayInfo:(id)arg1 lastPlayTime:(double)arg2 isRadioEnd:(_Bool)arg3 callbackBlock:(void (^)(void))arg4;
- (void)togglePauseDownloadMVs:(id)arg1 isPaused:(_Bool)arg2 callbackBlock:(void (^)(void))arg3;
- (void)togglePauseDownloadProgram:(id)arg1 isPaused:(_Bool)arg2 callbackBlock:(void (^)(void))arg3;
- (void)togglePauseDownloadSongs:(id)arg1 isPaused:(_Bool)arg2 callbackBlock:(void (^)(void))arg3;
- (void)updateAllPlayingList:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)updateAllPlayingListEq:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)updateDownloadMVs:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)updateDownloadUrlInfo:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)updatePlaylist:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)updatePlaylistAndSyncDownload:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)updatePlaylistLocalOrder:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)updatePlaylistTracks:(id)arg1 playlist:(id)arg2 callbackBlock:(void (^)(void))arg3;
- (void)updateProgramDownloadUrlInfo:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)updateSongClientEq:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)updateSongFile:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)updateSongJson:(id)arg1 callbackBlock:(void (^)(void))arg2;
- (void)upgradeTable:(int)arg1;
- (void)upgradeUserVersionIfNeeded;
- (void)userHasDownloadSongs:(void (^)(void))arg1;
@end


 
