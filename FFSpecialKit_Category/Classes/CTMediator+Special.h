//
//  CTMediator+Special.h
//  FFSpecialKit_Category
//
//  Created by 陈辉金 on 2020/10/28.
//


#import <UIKit/UIKit.h>

#import <CTMediator/CTMediator.h>

#import <FFAPIsKit/APIRequest.h>

#import <FFAPIsKit/FFReformProtocol.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTMediator (Special)

- (UIViewController*)specialDetailController;

- (NSDictionary*)specialReformerWithOriginData:(NSDictionary*)data;

- (NSDictionary *)specialReformer;

- (APIRequest*)specialAPIRequest;

@end

NS_ASSUME_NONNULL_END
