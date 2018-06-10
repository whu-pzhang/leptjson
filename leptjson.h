#ifndef LEPTJSON_H__
#define LEPTJSON_H__

/* json data type */
typedef enum {
    LEPT_NULL,
    LEPT_FALSE,
    LEPT_TRUE,
    LEPT_NUMBER,
    LEPT_STRING,
    LEPT_ARRAY,
    LEPT_OBJECT
} lept_type;

/* parse code */
enum {
    LEPT_PARSE_OK = 0,
    LEPT_PARSE_EXPECT_VALUE,
    LEPT_PARSE_INVALID_VALUE,
    LEPT_PARSE_ROOT_NOT_SINGULAR
};

/* json data structure */
typedef struct {
    lept_type type;
} lept_value;

/* parse json */
int lept_parse(lept_value *v, const char *json);

/* obtain json data type */
lept_type lept_get_type(const lept_value *v);

#endif /* LEPTJSON_H__ */
