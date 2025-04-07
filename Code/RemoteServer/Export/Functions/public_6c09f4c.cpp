#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09f4c, internal_6c09f4c, public_6c09f4c);
extern "C" NAKED register_t __cdecl internal_6c09f4c()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b234]
        UNREACHABLE_TRAP(0x6c09f4c)
    }
}
