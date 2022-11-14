#ifndef UTILS_FILEH_H_
#define UTILS_FILEH_H_

#include <io.h>
#include <string>
#include <vector>

namespace zzz {

// �ļ��в������򴴽�
bool DirCreate(const char* pszPath)
{
    if (_access(pszPath, 0) == -1) {
        _mkdir(pszPath);
    }
    return true;
}

} // namespace zzz
#endif // UTILS_FILEH_H_