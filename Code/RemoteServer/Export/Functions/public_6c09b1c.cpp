#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09b1c, internal_6c09b1c, public_6c09b1c);
extern "C" NAKED register_t __cdecl internal_6c09b1c()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b184]
        UNREACHABLE_TRAP(0x6c09b1c)
    }
}
