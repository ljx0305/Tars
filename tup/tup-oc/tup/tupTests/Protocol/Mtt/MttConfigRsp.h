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
#import "MttBrowserRsp.h"
#import "MttDomainRsp.h"
#import "MttKeywordRsp.h"
#import "MttPluginRsp.h"
#import "MttPluginRspNew.h"
#import "MttSearchRsp.h"

@interface MttConfigRsp : TarsObjectV2

@property (nonatomic, retain, JV2_PROP_GS_V2(stBrowserRsp,setStBrowserRsp:)) MttBrowserRsp* JV2_PROP_NM(r,0,stBrowserRsp);
@property (nonatomic, retain, JV2_PROP_GS_V2(stSearchRsp,setStSearchRsp:)) MttSearchRsp* JV2_PROP_NM(r,1,stSearchRsp);
@property (nonatomic, retain, JV2_PROP_GS_V2(stKeywordRsp,setStKeywordRsp:)) MttKeywordRsp* JV2_PROP_NM(r,2,stKeywordRsp);
@property (nonatomic, retain, JV2_PROP_GS_V2(stDomainRsp,setStDomainRsp:)) MttDomainRsp* JV2_PROP_NM(r,3,stDomainRsp);
@property (nonatomic, retain, JV2_PROP_GS_V2(stPluginRsp,setStPluginRsp:)) MttPluginRsp* JV2_PROP_NM(r,4,stPluginRsp);
@property (nonatomic, retain, JV2_PROP_GS_V2(stPluginRspNew,setStPluginRspNew:)) MttPluginRspNew* JV2_PROP_NM(o,5,stPluginRspNew);

@end
