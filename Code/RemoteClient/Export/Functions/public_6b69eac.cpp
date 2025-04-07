#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69eac, internal_6b69eac, public_6b69eac);
extern "C" NAKED register_t __cdecl internal_6b69eac()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b23c]
        UNREACHABLE_TRAP(0x6b69eac)
    }
}
