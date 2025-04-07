#include "DALib-PCH.h"

PROC_DECLARE(0x65c4630, internal_65c4630, public_65c4630);
extern "C" NAKED register_t __cdecl internal_65c4630()
{
    __asm
    {
        call dword ptr ds : [public_65c70d8]
        mov dword ptr ds : [public_65ca254], eax
        ret 
        UNREACHABLE_TRAP(0x65c4630)
    }
}
