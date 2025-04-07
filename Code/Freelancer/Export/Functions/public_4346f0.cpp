#include "Freelancer-PCH.h"

PROC_DECLARE(0x4346f0, internal_4346f0, public_4346f0);
extern "C" NAKED register_t __cdecl internal_4346f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cad94]
        mov dword ptr ds : [public_667e44], eax
        ret 
        UNREACHABLE_TRAP(0x4346f0)
    }
}
