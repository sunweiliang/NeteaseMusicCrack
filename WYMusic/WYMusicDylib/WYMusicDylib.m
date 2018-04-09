//
//  网易云逆向，请勿用于商业用途
//
//  Created by weiliang.sun
//
//  https://github.com/sunweiliang/NeteaseMusicCrack
//

#import "WYMusicDylib.h"
#import <CaptainHook/CaptainHook.h>
#import <UIKit/UIKit.h>
#import <Cycript/Cycript.h>
#import "tweak.h"
#import "SWLTools.h"

static __attribute__((constructor)) void entry(){
    NSLog(@"\n               🎉!!！congratulations!!！🎉\n👍----------------insert dylib success----------------👍");
    
    [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidFinishLaunchingNotification object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification * _Nonnull note) {
        
#ifndef __OPTIMIZE__
        CYListenServer(6666);
#endif
        
    }];
}



#pragma mark - 代码开始，上面的不用管...

#pragma mark - NMSong
CHDeclareClass(NMSong)

static const char * SWL_NeedMakeMoney = "SWL_NeedMakeMoney";
static bool swlhasNullMusicURL;

CHDeclareMethod(1,void, NMSong,swl_updatesavedownload_downloadinfo, NMSongUrlInfo *,playUrlInfo){
    
    [self setPlayUrlInfo:playUrlInfo];
    self.downloadUrlInfo = [[NSClassFromString(@"NMSongUrlInfo") alloc] init];
    self.savedDownloadUrlInfo = [[NSClassFromString(@"NMSongUrlInfo") alloc] init];
    self.downloadUrlInfo = playUrlInfo;
    self.savedDownloadUrlInfo = playUrlInfo;
    
}

CHDeclareMethod(0,NSDictionary *, NMSong,swl_mapPropertiesToDictionary){
    
    NSMutableDictionary *dictionary = [NSMutableDictionary dictionary];
    Class cls = [self class];
    uint ivarsCount = 0;
    Ivar *ivars = class_copyIvarList(cls, &ivarsCount);
    const Ivar *ivarsEnd = ivars + ivarsCount;
    for (const Ivar *ivarsBegin = ivars; ivarsBegin < ivarsEnd; ivarsBegin++) {
        Ivar const ivar = *ivarsBegin;
        NSString *key = [NSString stringWithUTF8String:ivar_getName(ivar)];
        if ([key hasPrefix:@"_"]) key = [key substringFromIndex:1];
        id value = [self valueForKey:key];
        [dictionary setObject:value ? value : [NSNull null]
                       forKey:key];
    }
    return dictionary;
}

CHDeclareMethod(1,void, NMSong,setSwlMakeMoney,BOOL,sender){
    objc_setAssociatedObject(self, SWL_NeedMakeMoney, @(sender), OBJC_ASSOCIATION_ASSIGN);
}
CHDeclareMethod(0,BOOL, NMSong,swlMakeMoney){
    BOOL r = [objc_getAssociatedObject(self, SWL_NeedMakeMoney) boolValue];
    return r;
}


CHOptimizedMethod(1, self, void, NMSong,setCanDownloadMusic,BOOL,canDownloadMusic){
    if(canDownloadMusic == NO){
        [self setSwlMakeMoney:YES];
    }
    CHSuper(1, NMSong,setCanDownloadMusic,canDownloadMusic);
}
CHOptimizedMethod(0, self, BOOL, NMSong,canDownloadMusic){
    BOOL r =  CHSuper(0, NMSong,canDownloadMusic);
    if(r == NO){
        [self setSwlMakeMoney:YES];
    }
    return YES;
}
CHOptimizedMethod(0, self, BOOL, NMSong,canEnableMusic){
    return YES;
}
CHOptimizedMethod(0, self, BOOL, NMSong,canPlayLocally){
    return YES;
}
CHOptimizedMethod(0, self, BOOL, NMSong,canPlayMusic){
    return YES;
}
CHOptimizedMethod(1, self, void, NMSong,setIsFeeSong,BOOL,isFeeSong){
    if(isFeeSong){
        [self setSwlMakeMoney:YES];
    }
    CHSuper(1, NMSong,setIsFeeSong,isFeeSong);
}
CHOptimizedMethod(0, self, BOOL, NMSong,isFeeSong){
    bool r = CHSuper(0, NMSong,isFeeSong);
    if(r == YES){
        [self setSwlMakeMoney:YES];
    }
    return NO;
}
CHOptimizedMethod(0, self, BOOL, NMSong,isFeeSongPaid){
    bool r = CHSuper(0, NMSong,isFeeSongPaid);
    if(r == YES){
        [self setSwlMakeMoney:YES];
    }
    return NO;
}
CHOptimizedMethod(0, self, BOOL, NMSong,isPlayOnlySong){
    return NO;
}

CHOptimizedMethod(1, self, void, NMSong,setDownloadUrlInfo,NMSongUrlInfo *,downloadUrlInfo){
    if(downloadUrlInfo == nil || swlhasNullMusicURL == YES){
        return;
    }
    if([self swlMakeMoney]){
        downloadUrlInfo = [self playUrlInfo];
    }
    CHSuper(1, NMSong, setDownloadUrlInfo,downloadUrlInfo);
}


CHOptimizedMethod(0, self, NMSongUrlInfo *, NMSong,downloadUrlInfo){
    
    NMSongUrlInfo * result = CHSuper(0, NMSong, downloadUrlInfo);
    
    if([self swlMakeMoney]){
        NMSongUrlInfo *swl_play = [self playUrlInfo];
        NSLog(@"swl_swlisneedmakemoney = %@", swl_play);
        return swl_play;
    }
    
    if(swlhasNullMusicURL == YES){
        NMSongUrlInfo *swl_play = [self playUrlInfo];
        NSLog(@"swl_downloadUrlInfo = %@", swl_play);
        return swl_play;
    }
    
    return result;
}


CHOptimizedMethod(1, self, void, NMSong,setPlayUrlInfo,NMSongUrlInfo *,playUrlInfo){
    CHSuper(1, NMSong, setPlayUrlInfo,playUrlInfo);
}
CHOptimizedMethod(0, self, NMSongUrlInfo *, NMSong,playUrlInfo){
    NMSongUrlInfo * result = CHSuper(0, NMSong, playUrlInfo);
    return result;
}


CHOptimizedMethod(0, self, NSString *, NMSong,description){
    NSString * r = [[self swl_mapPropertiesToDictionary] description];
    return r;
}
CHOptimizedMethod(0, self, NSString *, NMSong,debugDescription){
    NSString * r = [[self swl_mapPropertiesToDictionary] description];
    return r;
}


#pragma mark - NMSongUrlInfo
CHDeclareClass(NMSongUrlInfo)
CHOptimizedMethod(0, self, long long, NMSongUrlInfo,fee){
    return 0;
}
CHOptimizedMethod(0, self, BOOL, NMSongUrlInfo,isFeeSong){
    return NO;
}
CHOptimizedMethod(0, self, long long, NMSongUrlInfo,urlcode){
    return 200;
}


#pragma mark - NMPlayViewController
CHDeclareClass(NMPlayViewController)
//static bool swlRequestRealyMusicURL;
static NSString *swlRealyMusicURL;

CHOptimizedMethod(1, self, void, NMPlayViewController,playPauseNotification,NSNotification *,arg1){
    
    CHSuper(1, NMPlayViewController, playPauseNotification,arg1);
    
}


#pragma mark - NMAppDelegate
CHDeclareClass(NMAppDelegate)
CHOptimizedMethod(2, self, void, NMAppDelegate,adBackgroundView,id,arg1,tappedWithUrl,id,arg2){
    //去广告
}
CHOptimizedMethod(1, self, void, NMAppDelegate,adBackgroundViewSkipAd,id,arg1){
    //去广告
}
CHOptimizedMethod(1, self, void, NMAppDelegate,buyVipDidShow,id,arg1){
    //去Vip页面
}
CHOptimizedMethod(1, self, BOOL, NMAppDelegate,checkUpdate,id,arg1){
    //去更新检测
    return NO;
}
CHOptimizedMethod(1, self, void, NMAppDelegate,checkVersion,BOOL,arg1){
    //去更新检测
}
CHOptimizedMethod(0, self, void, NMAppDelegate,doCheckVersion){
    //去更新检测
}
CHOptimizedMethod(0, self, BOOL, NMAppDelegate,isLimitedVersion){
    //去更新检测
    return NO;
}
CHOptimizedMethod(0, self, void, NMAppDelegate,showAdvertisementIfNeeded){
    //去开屏广告
}
CHOptimizedMethod(0, self, void, NMAppDelegate,checkPushNotification){
    //去通知检测
}
CHOptimizedMethod(0, self, void, NMAppDelegate,uploadIDFA){
    //去上传idfa
}



#pragma mark - NMAdBackgroundView
CHDeclareClass(NMAdBackgroundView)
CHOptimizedMethod(1, self, BOOL, NMAdBackgroundView,showAd,BOOL,arg12){
    //去广告
    return NO;
}
CHOptimizedMethod(1, self, BOOL, NMAdBackgroundView,skipButtonClicked,id,arg12){
    return NO;
}



#pragma mark - 入口点
CHConstructor{
    CHLoadLateClass(NMSong);
    CHClassHook(1, NMSong, setCanDownloadMusic);
    CHClassHook(0, NMSong, canDownloadMusic);
    CHClassHook(0, NMSong, canEnableMusic);
    CHClassHook(0, NMSong, canPlayLocally);
    CHClassHook(0, NMSong, canPlayMusic);
    CHClassHook(1, NMSong, setIsFeeSong);
    CHClassHook(0, NMSong, isFeeSong);
    CHClassHook(0, NMSong, isFeeSongPaid);
    CHClassHook(0, NMSong, isPlayOnlySong);
    CHClassHook(1, NMSong, setDownloadUrlInfo);
    CHClassHook(0, NMSong, downloadUrlInfo);
    CHClassHook(1, NMSong, setPlayUrlInfo);
    CHClassHook(0, NMSong, playUrlInfo);
    CHClassHook(0, NMSong, description);
    CHClassHook(0, NMSong, debugDescription);
    

    CHLoadLateClass(NMSongUrlInfo);
    CHClassHook(0, NMSongUrlInfo, fee);
    CHClassHook(0, NMSongUrlInfo, isFeeSong);
    CHClassHook(0, NMSongUrlInfo, urlcode);
    
    
    CHLoadLateClass(NMPlayViewController);
    CHClassHook(1, NMPlayViewController, playPauseNotification);
    
    
    CHLoadLateClass(NMAppDelegate);
    CHClassHook(2, NMAppDelegate, adBackgroundView,tappedWithUrl);
    CHClassHook(1, NMAppDelegate, adBackgroundViewSkipAd);
    CHClassHook(1, NMAppDelegate, buyVipDidShow);
    CHClassHook(1, NMAppDelegate, checkUpdate);
    CHClassHook(1, NMAppDelegate, checkVersion);
    CHClassHook(0, NMAppDelegate, doCheckVersion);
    CHClassHook(0, NMAppDelegate, isLimitedVersion);
    CHClassHook(0, NMAppDelegate, showAdvertisementIfNeeded);
    CHClassHook(0, NMAppDelegate, checkPushNotification);
    CHClassHook(0, NMAppDelegate, uploadIDFA);
    
    
    
    CHLoadLateClass(NMAdBackgroundView);
    CHClassHook(1, NMAdBackgroundView, showAd);
    
    
}



