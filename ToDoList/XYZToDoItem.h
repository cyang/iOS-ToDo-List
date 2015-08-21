//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Christopher Yang on 5/28/14.
//
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
