//
//  LangManager.h
//  oplayer
//
//  Created by SYALON on 01/28/19.
//
//  for language

#import <Foundation/Foundation.h>

/**
 *  for multi-language bundle extensive
 */
@interface MultiLanguageBundle : NSBundle
@end

/**
 *  ext
 */
@interface NSBundle(Language)

+ (void)setLanguage:(NSString*)language;

@end

/**
 *  multi-language manager
 */
@interface LangManager : NSObject

@property (nonatomic, strong) NSArray* dataArray;
@property (nonatomic, strong) NSString* currLangCode;

+ (LangManager*)sharedLangManager;

- (NSString*)getCurrentLanguageName;
- (void)initCurrentLanguage;
- (void)saveLanguage:(NSString*)langCode;

@end
