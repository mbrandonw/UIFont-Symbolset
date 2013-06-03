UIFont-Symbolset
================

Just some helper methods on `UIFont` to make working with Symbolset fonts better.

```objc
UILabel *label = [UILabel new];
label.font = [UIFont ssStandardFontWithSize:14.0f];
label.text = [UIFont ssStandardSymbolForString:@"retweet"];
```

Note: The actual Symbolset font is not included. Purchase it from [http://symbolset.com](http://symbolset.com/icons)
