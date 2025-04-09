#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4c96a0, internal_4c96a0, public_4c96a0);
extern "C" NAKED register_t __cdecl internal_4c96a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d710c]
        mov dword ptr ds : [public_6748ec], eax
        ret 
        UNREACHABLE_TRAP(0x4c96a0)
    }
}
