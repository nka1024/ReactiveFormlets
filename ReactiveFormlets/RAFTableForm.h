//
//  RAFTableForm.h
//  ReactiveFormlets
//
//  Created by Jon Sterling on 6/12/12.
//  Copyright (c) 2012 Jon Sterling. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RAFFormlet.h"

@class RAFInputRow;

// Many RAFTableSection
@interface RAFTableForm : RAFCompoundFormlet <UITableViewDataSource, UITableViewDelegate>
- (UITableView *)buildView;
- (NSArray *)sections;
- (RAFTableSection *)sectionAtIndex:(NSUInteger)index;
- (RAFInputRow *)rowAtIndexPath:(NSIndexPath *)indexPath;
@end

// Many RAFTableRow
@interface RAFSingleSectionTableForm : RAFTableForm <RAFTableSection>
@end
