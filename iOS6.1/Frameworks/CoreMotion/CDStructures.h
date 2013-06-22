/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CLConnection;

struct CLConnectionClient {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field1;
    struct dispatch_queue_s *_field2;
    struct dispatch_queue_s *_field3;
    struct dispatch_queue_s *_field4;
    struct CLConnection *_field5;
    struct CLNameValuePair _field6;
    struct CLNameValuePair _field7;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _field8;
    id _field9;
    void _field10;
    id _field11;
    void _field12;
    struct map<std::basic_string<char>, void (^)(CLConnectionMessage *), std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)>>> _field13;
    id _field14;
    void _field15;
    id _field16;
    void _field17;
};

struct CLMotionActivity {
    int type;
    int confidence;
    int mountedState;
    int mountedConfidence;
    float tilt;
};

struct CLNameValuePair {
    void **_field1;
    struct __CFDictionary *_field2;
};

struct Dispatcher {
    void **_field1;
};

struct _Alloc_hider {
    char *_field1;
};

struct _Rb_tree<std::basic_string<char>, std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)>, std::_Select1st<std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)>>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)>>> {
    struct _Rb_tree_impl<std::less<std::basic_string<char>>, false> _field1;
};

struct _Rb_tree_impl<std::less<std::basic_string<char>>, false> {
    struct less<std::basic_string<char>> _field1;
    struct _Rb_tree_node_base _field2;
    unsigned int _field3;
};

struct _Rb_tree_node_base {
    int _field1;
    struct _Rb_tree_node_base *_field2;
    struct _Rb_tree_node_base *_field3;
    struct _Rb_tree_node_base *_field4;
};

struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct _Alloc_hider _field1;
};

struct dispatch_queue_s;

struct less<std::basic_string<char>>;

struct map<std::basic_string<char>, void (^)(CLConnectionMessage *), std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)>>> {
    struct _Rb_tree<std::basic_string<char>, std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)>, std::_Select1st<std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)>>, std::less<std::basic_string<char>>, std::allocator<std::pair<const std::basic_string<char>, void (^)(CLConnectionMessage *)>>> _field1;
};

#if 0
// Names with conflicting types:
typedef struct {
    double _field1;
    CDStruct_03942939 _field2;
} Sample_7d9206a1;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
} CDStruct_afa449f9;

typedef struct {
    double x;
    double y;
    double z;
    double magnitude;
    double horizontal;
    double declination;
    double inclination;
    double timestamp;
} CDStruct_3e502cbb;

typedef struct {
    double w;
    double x;
    double y;
    double z;
} CDStruct_bf7dff04;

typedef struct {
    double x;
    double y;
    double z;
} CDStruct_31142d93;

typedef struct {
    float x;
    float y;
    float z;
} CDStruct_03942939;

typedef struct {
    int type;
} CDStruct_bdecc0cd;

typedef struct {
    CDStruct_bf7dff04 quaternion;
    CDStruct_03942939 userAcceleration;
    CDStruct_03942939 rotationRate;
    CDStruct_03942939 magneticField;
    int magneticFieldCalibrationLevel;
    _Bool doingYawCorrection;
    _Bool doingBiasEstimation;
    _Bool isInitialized;
} CDStruct_04e8b4cd;

typedef struct {
    CDStruct_31142d93 _field1;
    int _field2;
} CDStruct_27fd20ed;

