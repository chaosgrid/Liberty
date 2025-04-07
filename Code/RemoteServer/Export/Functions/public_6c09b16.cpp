#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09b16, internal_6c09b16, public_6c09b16);
extern "C" NAKED register_t __cdecl internal_6c09b16()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b180]
        UNREACHABLE_TRAP(0x6c09b16)
    }
}
