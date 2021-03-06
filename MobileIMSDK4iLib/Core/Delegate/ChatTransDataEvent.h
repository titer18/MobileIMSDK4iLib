//  ----------------------------------------------------------------------
//  Copyright (C) 2017  即时通讯网(52im.net) & Jack Jiang.
//  The MobileIMSDK_X (MobileIMSDK v3.x) Project.
//  All rights reserved.
//
//  > Github地址: https://github.com/JackJiang2011/MobileIMSDK
//  > 文档地址: http://www.52im.net/forum-89-1.html
//  > 即时通讯技术社区：http://www.52im.net/
//  > 即时通讯技术交流群：320837163 (http://www.52im.net/topic-qqgroup.html)
//
//  "即时通讯网(52im.net) - 即时通讯开发者社区!" 推荐开源工程。
//
//  如需联系作者，请发邮件至 jack.jiang@52im.net 或 jb2011@163.com.
//  ----------------------------------------------------------------------
//
//  ChatTransDataEvent.h
//  MibileIMSDK4i_X (MobileIMSDK v3.0 at Summer 2017)
//
//  Created by JackJiang on 14/10/21.
//  Copyright (c) 2017年 52im.net. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ErrorCode.h"
#import "Protocal.h"

@protocol ChatTransDataEvent <NSObject>

- (void) onTransBuffer:(NSString*)fingerPrintOfProtocal withUserId:(NSString*)userid andContent:(NSString*)dataContent andTypeu:(int)typeu protocal:(Protocal *)protocal;

- (void) onErrorResponse:(int)errorCode withErrorMsg:(NSString*)errorMsg protocal:(Protocal *)protocal;

- (void) onTransOtherBuffer:(NSString*)fingerPrintOfProtocal content:(NSString*)dataContent andTypeu:(int)typeu  protocal:(Protocal *)protocal;

@end
