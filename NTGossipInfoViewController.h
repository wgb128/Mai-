/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

@class UIButton, NSString, UILabel, UIImageView,NTGossipModel;

@interface NTGossipInfoViewController : UIView {}

@property(assign, nonatomic) int justEnter;
@property(assign, nonatomic) int scrollToCid;
@property(assign, nonatomic) BOOL forceUpdate;
@property(assign, nonatomic) BOOL forComment;
@property(assign, nonatomic) int gossipId;
@property(retain, nonatomic) NTGossipModel* gossipinfo;
@property(assign, nonatomic) BOOL isHotExpanded;
@property(assign, nonatomic) int currentCommentId;
@property(retain, nonatomic) UITableView* commentTable;
@property(retain, nonatomic) UIView* buttonsView;
@property(retain, nonatomic) UIView* buttonsTags;
@property(retain, nonatomic) UIButton* reloadBtn;
@property(retain, nonatomic) UIActivityIndicatorView* imgIndicator;
@property(retain, nonatomic) UIImageView* imgView;
@property(retain, nonatomic) UILabel* timeLabel;
@property(retain, nonatomic) UILabel* nameLabel;
@property(retain, nonatomic) UIView* topView;

-(void)restoreComment;
-(void)storeComment;
-(void)showInputPanel:(int)panel animation:(double)animation;
-(void)hideInputPanel:(BOOL)panel;
-(BOOL)hideSendButtonInInputPanel;
-(void)imageGalleryView:(id)view didSelectImageAtIndex:(unsigned)index sender:(id)sender;
-(void)swipeableTableViewCell:(id)cell didTriggerRightUtilityButtonWithIndex:(int)index;
-(BOOL)swipeableTableViewCellShouldHideUtilityButtonsOnSwipe:(id)swipeableTableViewCell;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(int)inputPanelShowPos;
-(int)inputPanelPos;
-(void)textViewDidEndEditing:(id)textView;
-(void)textViewDidChange:(id)textView;
-(void)updateTableData:(bool)data;
-(void)scrollToTableRow:(id)tableRow rowIdx:(int)idx;
-(bool)scrollToComment:(int)comment;
-(void)likeComment:(id)comment;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)deleteGossipCommentHandler:(id)handler;
-(void)complainGossipCommentHandler:(id)handler;
-(void)copyMessageHandler:(id)handler;
-(void)addLongPressMenuForGossipComment:(id)gossipComment commentModel:(id)model;
-(void)removeAllGestureRecognizer:(id)recognizer;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(BOOL)isHotCommentSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(float)hotCommentHeightForRowAtIndexPath:(id)indexPath;
-(int)numberOfHotCommentsRows;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)scrollToTableBottom;
-(void)sendFeedComment;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(void)shareClick:(id)click;
-(void)commentClick:(id)click;
-(void)yesClick:(id)click;
-(void)imgReloadClick:(id)click;
-(void)updateGossip;
-(CGSize)imageSize:(id)size;
-(void)reloadGossipTagButtons:(int)buttons;
-(void)reloadGossipButtons:(int)buttons;
-(void)deleteGossipHandler:(id)handler;
-(void)refluteGossip:(id)gossip;
-(void)actualRefluteGossip:(id)gossip message:(id)message;
-(void)collectGossip:(id)gossip;
-(void)jubaoGossip:(id)gossip;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)complete:(id)complete;
-(void)getGossipInfo;
-(void)initGossipInfo;
-(void)back:(id)back;
-(void)gossipItemSelected:(int)selected;
-(void)textKeyboardHide;
-(void)keyboardWillShow:(id)keyboard;
-(void)gossipBtnClicked:(id)clicked;
-(void)textViewDidBeginEditing:(id)textView;
-(void)setupCommentInputPanel;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)okClick:(id)click;
-(void)shareToMaiMaiFeed:(id)maiMaiFeed;
-(void)handlerShareCommentActionSheet:(id)sheet withComment:(id)comment;
-(void)handleShareComment:(id)comment;
-(void)viewDidLoad;
-(void)copyDlgText;
-(void)longPressedText:(id)text;
-(void)textAnchorTouch:(int)touch text:(id)text tagType:(int)type tagData:(id)data;
-(void)setOpenUrlParameters:(id)parameters;
@end
