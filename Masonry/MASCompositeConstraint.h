//
//  MASCompositeConstraint.h
//  Masonry
//
//  Created by Jonas Budelmann on 21/07/13.
//  Copyright (c) 2013 cloudling. All rights reserved.
//

#import "MASConstraint.h"
#import "MASUtilities.h"

/*
 composite
 英  ['kɒmpəzɪt]   美  [kɑm'pɑzɪt]
 n. 复合材料；合成物；菊科
 adj. 复合的；合成的；菊科的
 vt. 使合成；使混合
 */

/**
 *	A group of MASConstraint objects
 */
@interface MASCompositeConstraint : MASConstraint

/**
 *	Creates a composite with a predefined array of children
 *
 *	@param	children	child MASConstraints
 *
 *	@return	a composite constraint
 */
- (id)initWithChildren:(NSArray *)children;

@end
