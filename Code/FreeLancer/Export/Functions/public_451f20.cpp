#include "FreeLancer-PCH.h"

PROC_DECLARE(0x451f20, internal_451f20, public_451f20);
extern "C" NAKED register_t __cdecl internal_451f20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cd098]
        mov dword ptr ds : [public_66d128], eax
        ret 
        UNREACHABLE_TRAP(0x451f20)
    }
}
