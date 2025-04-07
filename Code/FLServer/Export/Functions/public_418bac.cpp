#include "FLServer-PCH.h"

PROC_DECLARE(0x418bac, internal_418bac, public_418bac);
extern "C" NAKED register_t __cdecl internal_418bac()
{
    __asm
    {
        jmp dword ptr ds : [public_41b468]
        UNREACHABLE_TRAP(0x418bac)
    }
}
