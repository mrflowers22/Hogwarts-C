//
//  MRFCharacter.h
//  Hogwarts-C
//
//  Created by Michael Flowers on 10/8/19.
//  Copyright © 2019 Karl Pfister. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MRFCharacter : NSObject

@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly, nullable) NSString *house;
@property (nonatomic, copy, readonly) NSString *bloodStatus;
@property (nonatomic, readonly) BOOL deathEater;
@property (nonatomic, copy, readonly) NSString *role;

- (MRFCharacter *)initWithName:(NSString *)name house:(NSString *)house bloodStatus:(NSString *)bloodStatus deathEater:(BOOL)deathEater role:(NSString *)role;

@end

@interface MRFCharacter (JSONConvertable)
- (instancetype)initWithDictionary:(NSDictionary<NSString *, id> *)dictionary;

@end

NS_ASSUME_NONNULL_END
