#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a7a, internal_6c09a7a, public_6c09a7a);
extern "C" NAKED register_t __cdecl internal_6c09a7a()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b090]
        UNREACHABLE_TRAP(0x6c09a7a)
    }
}
