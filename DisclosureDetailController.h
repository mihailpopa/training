//
//  DisclosureDetailController.h
//  Learn7
//
//  Created by Mihai Popa on 6/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DisclosureDetailController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *label;
@property (copy, nonatomic) NSString *message;
@end
