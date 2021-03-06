/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "SKUIItemCollectionDelegate-Protocol.h"
#import "SKUIItemStateCenterObserver-Protocol.h"
#import "SKUILayoutCacheDelegate-Protocol.h"
#import "SKUIViewControllerTesting-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ASUpdatesPage, NSMutableSet, NSString, SKUIItemCollectionController, SKUILayoutCache, SSSoftwareUpdatesStore, UIAlertView, UIColor, UITableView;

@interface ASUpdatesViewController : _AVAudioSessionCategoryPlayback <SKUIItemCollectionDelegate, SKUIItemStateCenterObserver, SKUILayoutCacheDelegate, SKUIViewControllerTesting, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UIAlertView *_autoUpdatesAlertView;
    UIColor *_borderColor;
    NSMutableSet *_expandedUpdateItems;
    BOOL _isLoading;
    BOOL _isPad;
    SKUIItemCollectionController *_itemCollectionController;
    NSString *_performanceTestName;
    SKUILayoutCache *_layoutCache;
    BOOL _showsPurchasedPageLink;
    SSSoftwareUpdatesStore *_softwareUpdatesStore;
    UITableView *_tableView;
    BOOL _updateAllEnabled;
    ASUpdatesPage *_updatesPage;
}

+ (BOOL)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
- (id)_updateCellForIndexPath:(id)fp8;
- (id)_updatableItems;
- (id)_textLayoutRequestForText:(id)fp8;
- (id)_tableView;
- (id)_softwareUpdatesStore;
- (void)_showProductPageForItem:(id)fp8;
- (void)_setUpdatesPageWithUpdates:(id)fp8 fromCache:(BOOL)fp12;
- (struct _NSRange)_sectionsRangeForUpdateItems;
- (void)_reloadTableView;
- (void)_reloadForItemStateChanges:(id)fp8;
- (void)_reloadData;
- (void)_reloadBars;
- (id)_purchasedRowCellForIndexPath:(id)fp8;
- (int)_itemIndexForIndexPath:(id)fp8;
- (id)_itemForIndexPath:(id)fp8;
- (id)_itemCollectionController;
- (BOOL)_isUpdateAllEnabled;
- (BOOL)_isIndexPathExpanded:(id)fp8;
- (id)_indexPathForItemIndex:(int)fp8;
- (void)_expandIndexPath:(id)fp8;
- (void)_enableForcedBadgeIfApplicable;
- (void)_displayAutoUpdatesDiscovery;
- (void)_updatesStoreChangeNotification:(id)fp8;
- (void)_applicationWillEnterForeground:(id)fp8;
- (void)_updateAllAction:(id)fp8;
- (void)tableView:(id)fp8 willDisplayCell:(id)fp12 forRowAtIndexPath:(id)fp16;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didEndDisplayingCell:(id)fp12 forRowAtIndexPath:(id)fp16;
- (void)itemTableView:(id)fp8 didConfirmItemOfferForTableViewCell:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)scrollViewWillEndDragging:(id)fp8 withVelocity:(struct CGPoint)fp12 targetContentOffset:(inout struct CGPoint *)fp20;
- (void)scrollViewWillBeginDragging:(id)fp8;
- (void)scrollViewDidEndDecelerating:(id)fp8;
- (void)alertViewCancel:(id)fp8;
- (void)alertView:(id)fp8 didDismissWithButtonIndex:(int)fp12;
- (BOOL)performTestWithName:(id)fp8 options:(id)fp12;
- (void)layoutCacheDidFinishBatch:(id)fp8;
- (void)itemStateCenterRestrictionsChanged:(id)fp8;
- (void)itemStateCenter:(id)fp8 itemStatesChanged:(id)fp12;
- (struct _NSRange)visibleItemRangeForItemCollectionController:(id)fp8;
- (BOOL)shouldCacheAheadWhenIdleForItemCollectionController:(id)fp8;
- (struct _NSRange)itemCollectionController:(id)fp8 itemPageRangeForOffset:(struct CGPoint)fp12;
- (id)itemCollectionController:(id)fp8 cellLayoutForItemIndex:(int)fp12;
- (void)viewWillTransitionToSize:(struct CGSize)fp8 withTransitionCoordinator:(id)fp16;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)setTabBarItem:(id)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (void)loadView;
- (void)reloadData;
- (void)dealloc;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

