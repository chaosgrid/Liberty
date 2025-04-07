#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a2c, internal_6c09a2c, public_6c09a2c);
extern "C" NAKED register_t __cdecl internal_6c09a2c()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0d0]
        UNREACHABLE_TRAP(0x6c09a2c)
    }
}
