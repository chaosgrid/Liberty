#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09ed6, internal_6c09ed6, public_6c09ed6);
extern "C" NAKED register_t __cdecl internal_6c09ed6()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b1dc]
        UNREACHABLE_TRAP(0x6c09ed6)
    }
}
