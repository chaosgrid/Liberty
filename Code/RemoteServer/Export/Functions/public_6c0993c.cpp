#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c0993c, internal_6c0993c, public_6c0993c);
extern "C" NAKED register_t __cdecl internal_6c0993c()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b030]
        UNREACHABLE_TRAP(0x6c0993c)
    }
}
