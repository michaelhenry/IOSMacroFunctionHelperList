//
//  IOSMacroFunctionHelperList.h
//  iamkel.net
//
//  Collection of important Macro functions
//  Feel Free to contribute!!! Happy Coding!!! Happy Sharing!!!


// http://bmpradeep.wordpress.com/tag/uicolorfromrgb
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define HeightForText(text,width,margin,font)   ([text sizeWithFont:font constrainedToSize:CGSizeMake(width-(margin*2),2000.0f) lineBreakMode:NSLineBreakByWordWrapping].height + margin*2)

#define isSystemGreaterThanEqual(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)

#define isiPhone5  ([[UIScreen mainScreen] bounds].size.height == 568)?TRUE:FALSE