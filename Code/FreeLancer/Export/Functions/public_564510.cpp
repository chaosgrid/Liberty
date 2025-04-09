#include "FreeLancer-PCH.h"

PROC_DECLARE(0x564510, internal_564510, public_564510);
extern "C" NAKED register_t __cdecl internal_564510()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e2510]
        mov dword ptr ds : [public_67a55c], eax
        ret 
        UNREACHABLE_TRAP(0x564510)
    }
}
