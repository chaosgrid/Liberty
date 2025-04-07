#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf5440, internal_6bf5440, public_6bf5440);
extern "C" NAKED register_t __cdecl internal_6bf5440()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e0cc]
        mov dword ptr ds : [public_6c13d94], eax
        ret 
        UNREACHABLE_TRAP(0x6bf5440)
    }
}
