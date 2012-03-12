//
//  sct_monitorViewController.h
//  sct_monitor
//
//  Created by Snow Hellsing on 3/12/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface sct_monitorViewController : UIViewController <UIWebViewDelegate> {
    IBOutlet UIWebView *webv;
    IBOutlet UIActivityIndicatorView *loadingIndicator;
}

@property (nonatomic, strong) IBOutlet UIWebView *webv;
@end
