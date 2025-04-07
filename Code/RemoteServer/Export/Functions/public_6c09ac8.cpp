#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09ac8, internal_6c09ac8, public_6c09ac8);
extern "C" NAKED register_t __cdecl internal_6c09ac8()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b1ac]
        UNREACHABLE_TRAP(0x6c09ac8)
    }
}
