#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09ac2, internal_6c09ac2, public_6c09ac2);
extern "C" NAKED register_t __cdecl internal_6c09ac2()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b1b4]
        UNREACHABLE_TRAP(0x6c09ac2)
    }
}
