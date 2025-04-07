#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69cfc, internal_6b69cfc, public_6b69cfc);
extern "C" NAKED register_t __cdecl internal_6b69cfc()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b0f8]
        UNREACHABLE_TRAP(0x6b69cfc)
    }
}
