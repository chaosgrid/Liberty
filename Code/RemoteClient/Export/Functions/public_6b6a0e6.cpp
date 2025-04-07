#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a0e6, internal_6b6a0e6, public_6b6a0e6);
extern "C" NAKED register_t __cdecl internal_6b6a0e6()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b144]
        UNREACHABLE_TRAP(0x6b6a0e6)
    }
}
