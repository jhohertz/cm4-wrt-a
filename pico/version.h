#ifndef VERSION_H
#define VERSION_H

#ifndef VERSION_STR_POSTFIX
#define VERSION_STR_POSTFIX ""
#endif /* VERSION_STR_POSTFIX */

#ifndef GIT_VERSION_STR_POSTFIX
#define GIT_VERSION_STR_POSTFIX ""
#endif /* GIT_VERSION_STR_POSTFIX */

#define VERSION_STR "1.00" VERSION_STR_POSTFIX GIT_VERSION_STR_POSTFIX

#endif /* VERSION_H */