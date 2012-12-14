#ifndef ARGV_OPTION_FLAGS_H
#define ARGV_OPTION_FLAGS_H

typedef enum {
  ARGV_OPTION_VALUE = 0x00000001,
  ARGV_OPTION_OPTIONAL_VALUE = 0x00000003,
  ARGV_OPTION_REQUIRED = 0x00000010
} argv_option_flags;

#endif /* ARGV_OPTION_FLAGS_H */
