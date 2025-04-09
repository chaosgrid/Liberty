#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4a60c0, internal_4a60c0, public_4a60c0);
extern "C" NAKED register_t __cdecl internal_4a60c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d4418]
        mov dword ptr ds : [public_67213c], eax
        ret 
        UNREACHABLE_TRAP(0x4a60c0)
    }
}
