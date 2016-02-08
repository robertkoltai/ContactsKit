//
//  CKDetailsTableViewController.h
//  ContactsKit
//
//  Created by Sergey Popov on 08.02.16.
//  Copyright © 2016 Sergey Popov. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CKContact;

@interface CKDetailsTableViewController : UITableViewController

- (instancetype)initWithContact:(CKContact *)contact;

@end
