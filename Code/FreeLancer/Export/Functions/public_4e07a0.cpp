#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4e07a0, internal_4e07a0, public_4e07a0);
extern "C" NAKED register_t __cdecl internal_4e07a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d8858]
        mov dword ptr ds : [public_674af0], eax
        ret 
        UNREACHABLE_TRAP(0x4e07a0)
    }
}
