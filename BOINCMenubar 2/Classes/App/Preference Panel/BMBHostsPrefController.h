//
//  BMBHostsPrefController.h
//  BOINCMenubar
//
//  Created by BrotherBard on 4/13/08.
//  Copyright 2008-2009 BrotherBard <nkinsinger at brotherbard dot com>. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without modification,
//  are permitted provided that the following conditions are met:
//     * Redistributions of source code must retain the above copyright notice, this
//       list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright notice,
//       this list of conditions and the following disclaimer in the documentation 
//       and/or other materials provided with the distribution.
//  
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
//  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
//  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
//  ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

#import <Cocoa/Cocoa.h>


@class BOINCClient;
@class BMBEditHostInformationSheet;
@class BOINCActiveClientManager;



@interface BMBHostsPrefController : NSViewController
{
    BOINCActiveClientManager    *clientManager;  // weak link
    
    NSArray                     *clientList;
    
    BMBEditHostInformationSheet *editHostInformationSheet;
    
    NSTableView                 *hostsTable;
    NSButton                    *removeHostButton;
    
    NSArray                     *statusArray;
    
    NSDictionary                *selectedRowAttributes;
    NSDictionary                *warningAttributes;
    NSDictionary                *connectedAttributes;
    NSDictionary                *inProgressAttributes;
}
@property (nonatomic, retain)          NSArray     *clientList;
@property (nonatomic, retain) IBOutlet NSTableView *hostsTable;
@property (nonatomic, retain) IBOutlet NSButton    *removeHostButton;


- (id)initWithClientManager:(id)manager;

- (IBAction)addHost:(id)sender;
- (IBAction)editHost:(id)sender;
- (IBAction)removeHost:(id)sender;
- (IBAction)showHostPreferenceHelp:(id)sender;
- (IBAction)toggleIsAlwaysConnected:(id)sender;

- (void)didEndEditHost;
- (void)didEndAddHost:(BOINCClient *)client;


@end
