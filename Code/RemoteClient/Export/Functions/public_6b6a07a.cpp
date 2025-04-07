#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a07a, internal_6b6a07a, public_6b6a07a);
extern "C" NAKED register_t __cdecl internal_6b6a07a()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b018]
        UNREACHABLE_TRAP(0x6b6a07a)
    }
}
