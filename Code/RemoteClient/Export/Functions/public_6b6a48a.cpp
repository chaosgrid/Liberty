#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a48a, internal_6b6a48a, public_6b6a48a);
extern "C" NAKED register_t __cdecl internal_6b6a48a()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b19c]
        UNREACHABLE_TRAP(0x6b6a48a)
    }
}
