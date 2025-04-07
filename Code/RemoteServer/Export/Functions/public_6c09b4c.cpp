#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09b4c, internal_6c09b4c, public_6c09b4c);
extern "C" NAKED register_t __cdecl internal_6c09b4c()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b1a4]
        UNREACHABLE_TRAP(0x6c09b4c)
    }
}
