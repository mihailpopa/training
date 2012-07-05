//
//  CheckListController.h
//  Learn7
//
//  Created by Mihai Popa on 6/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "SecondLevelController.h"

@interface CheckListController : SecondLevelController
@property (strong, nonatomic) NSArray *list;
@property (strong, nonatomic) NSIndexPath *lastIndexPath;
@end
