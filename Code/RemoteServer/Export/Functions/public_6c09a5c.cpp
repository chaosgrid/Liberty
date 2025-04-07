#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a5c, internal_6c09a5c, public_6c09a5c);
extern "C" NAKED register_t __cdecl internal_6c09a5c()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0f0]
        UNREACHABLE_TRAP(0x6c09a5c)
    }
}
