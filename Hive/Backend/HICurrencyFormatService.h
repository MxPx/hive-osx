@interface HICurrencyFormatService : NSObject

@property (nonatomic, copy, readonly) NSString *decimalSeparator;
@property (nonatomic, copy) NSLocale *locale;

+ (HICurrencyFormatService *)sharedService;

- (NSString *)stringWithUnitForValue:(NSNumber *)value
                          inCurrency:(NSString *)currency;

- (NSString *)stringForValue:(NSNumber *)value
                  inCurrency:(NSString *)currency;

- (NSDecimalNumber *)parseString:(NSString *)string
                           error:(NSError **)error;

@end
