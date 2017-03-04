//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface FavoritesDownloadCDNInfo : NSObject <WCDBCoding>
{
    unsigned int localItemId;
    unsigned int size;
    int status;
    int isThumb;
    int dataType;
    unsigned int IntRes1;
    unsigned int IntRes2;
    NSString *localDataID;
    NSString *cdnUrl;
    NSString *cdnKey;
    NSString *md5;
    NSString *head256Md5;
    NSString *dataFmt;
    NSString *StrRes1;
    NSString *StrRes2;
    long long m___rowID;
}

+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const map_0e718273 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_0e718273 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_7a576766 *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt;
@property(nonatomic) int dataType; // @synthesize dataType;
@property(nonatomic) int isThumb; // @synthesize isThumb;
@property(retain, nonatomic) NSString *head256Md5; // @synthesize head256Md5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(retain, nonatomic) NSString *cdnKey; // @synthesize cdnKey;
@property(nonatomic) int status; // @synthesize status;
@property(nonatomic) unsigned int size; // @synthesize size;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl;
@property(retain, nonatomic) NSString *localDataID; // @synthesize localDataID;
@property(nonatomic) unsigned int localItemId; // @synthesize localItemId;
- (void).cxx_destruct;
- (id)init;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_22fabacd *)db_StrRes2;
- (const WCDBCondition_22fabacd *)db_StrRes1;
- (const WCDBCondition_c6db074e *)db_IntRes2;
- (const WCDBCondition_c6db074e *)db_IntRes1;
- (const WCDBCondition_22fabacd *)db_dataFmt;
- (const WCDBCondition_9620f531 *)db_dataType;
- (const WCDBCondition_9620f531 *)db_isThumb;
- (const WCDBCondition_22fabacd *)db_head256Md5;
- (const WCDBCondition_22fabacd *)db_md5;
- (const WCDBCondition_22fabacd *)db_cdnKey;
- (const WCDBCondition_9620f531 *)db_status;
- (const WCDBCondition_c6db074e *)db_size;
- (const WCDBCondition_22fabacd *)db_cdnUrl;
- (const WCDBCondition_22fabacd *)db_localDataID;
- (const WCDBCondition_c6db074e *)db_localItemId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

