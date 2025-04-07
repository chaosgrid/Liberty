#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09b0a, internal_6c09b0a, public_6c09b0a);
extern "C" NAKED register_t __cdecl internal_6c09b0a()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b1c8]
        UNREACHABLE_TRAP(0x6c09b0a)
    }
}
