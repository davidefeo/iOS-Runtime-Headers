/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSCountedSet, NSMutableArray, NSThread;

@interface _NSCFURLProtocolBridgeWithTrampoline : _NSCFURLProtocolBridge {
    BOOL _canSignalDirectly;
    NSThread *_processThread;
    NSCountedSet *_runloops;
    NSMutableArray *_workQueue;
}

- (void)dealloc;
- (void)finalize;
- (id)initWithCFURLProtocol:(struct _CFURLProtocol { }*)arg1 request:(id)arg2 protocolClass:(Class)arg3;
- (void)processEventQ;
- (void)pushEvent:(id)arg1 from:(const char *)arg2;
- (void)releaseWorkQueue;
- (void)schedule:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;
- (BOOL)shouldSignalDirectly;
- (void)unschedule:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;

@end
