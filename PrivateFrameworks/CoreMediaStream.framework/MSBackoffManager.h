/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSDate;

@interface MSBackoffManager : NSObject {
    double _backoffFactor;
    double _currentInterval;
    double _initialInterval;
    double _maxBackoffInterval;
    NSDate *_nextExpiryDate;
    double _randomizeFactor;
    NSDate *_retryAfterDate;
}

@property double backoffFactor;
@property double currentInterval;
@property double initialInterval;
@property double maxBackoffInterval;
@property(retain) NSDate * nextExpiryDate;
@property double randomizeFactor;
@property(retain) NSDate * retryAfterDate;

- (void)backoff;
- (double)backoffFactor;
- (double)currentInterval;
- (void)dealloc;
- (void)didReceiveRetryAfterDate:(id)arg1;
- (id)initWithInitialInterval:(double)arg1 backoffFactor:(double)arg2 randomizeFactor:(double)arg3 maxBackoffInterval:(double)arg4 retryAfterDate:(id)arg5;
- (double)initialInterval;
- (double)maxBackoffInterval;
- (id)nextExpiryDate;
- (double)randomizeFactor;
- (void)reset;
- (id)retryAfterDate;
- (void)setBackoffFactor:(double)arg1;
- (void)setCurrentInterval:(double)arg1;
- (void)setInitialInterval:(double)arg1;
- (void)setMaxBackoffInterval:(double)arg1;
- (void)setNextExpiryDate:(id)arg1;
- (void)setRandomizeFactor:(double)arg1;
- (void)setRetryAfterDate:(id)arg1;

@end