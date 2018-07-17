/**
 * Tencent is pleased to support the open source community by making Tars available.
 *
 * Copyright (C) 2016THL A29 Limited, a Tencent company. All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use this file except 
 * in compliance with the License. You may obtain a copy of the License at
 *
 * https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software distributed 
 * under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR 
 * CONDITIONS OF ANY KIND, either express or implied. See the License for the 
 * specific language governing permissions and limitations under the License.
 */

// **********************************************************************
// This file was generated by a TARS parser!
// TARS version 2.1.4.2 by WSRD Tencent.
// Generated from `/usr/local/resin_system.mqq.com/webapps/communication/tars/upload/renjunyi/MTT.tars'
// **********************************************************************

#import "TarsObjectV2.h"
#import "MttBrokerRequestParam.h"
#import "MttBrokerUserInfo.h"

@interface MttBrokerUploadRequest : TarsObjectV2

@property (nonatomic, retain, JV2_PROP_GS_V2(stUserInfo,setStUserInfo:)) MttBrokerUserInfo* JV2_PROP_NM(r,0,stUserInfo);
@property (nonatomic, retain, JV2_PROP_GS_V2(stRequestParam,setStRequestParam:)) MttBrokerRequestParam* JV2_PROP_NM(r,1,stRequestParam);
@property (nonatomic, retain, JV2_PROP_GS_V2(vPostData,setVPostData:)) NSData* JV2_PROP_NM(r,2,vPostData);
@property (nonatomic, retain, JV2_PROP_GS_V2(sBoundary,setSBoundary:)) NSString* JV2_PROP_NM(r,3,sBoundary);
@property (nonatomic, retain, JV2_PROP_GS_V2(sContentType,setSContentType:)) NSString* JV2_PROP_NM(r,4,sContentType);
@property (nonatomic, retain, JV2_PROP_GS_V2(sFileName,setSFileName:)) NSString* JV2_PROP_NM(r,5,sFileName);
@property (nonatomic, retain, JV2_PROP_GS_V2(sName,setSName:)) NSString* JV2_PROP_NM(r,6,sName);
@property (nonatomic, assign, JV2_PROP_GS_V2(cZipType,setCZipType:)) TarsInt8 JV2_PROP_NM(r,7,cZipType);
@property (nonatomic, assign, JV2_PROP_GS_V2(iFileSize,setIFileSize:)) TarsInt32 JV2_PROP_NM(r,8,iFileSize);
@property (nonatomic, assign, JV2_PROP_GS_V2(iPackNo,setIPackNo:)) TarsInt32 JV2_PROP_NM(r,9,iPackNo);
@property (nonatomic, assign, JV2_PROP_GS_V2(iDataSize,setIDataSize:)) TarsInt32 JV2_PROP_NM(r,10,iDataSize);
@property (nonatomic, assign, JV2_PROP_GS_V2(cNeedResponse,setCNeedResponse:)) TarsInt8 JV2_PROP_NM(o,11,cNeedResponse);

@end
