#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09f3a, internal_6c09f3a, public_6c09f3a);
extern "C" NAKED register_t __cdecl internal_6c09f3a()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b148]
        UNREACHABLE_TRAP(0x6c09f3a)
    }
}
