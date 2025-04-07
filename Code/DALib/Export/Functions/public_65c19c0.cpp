#include "DALib-PCH.h"

PROC_DECLARE(0x65c19c0, internal_65c19c0, public_65c19c0);
extern "C" NAKED register_t __cdecl internal_65c19c0()
{
    __asm
    {
        call dword ptr ds : [public_65c70d8]
        mov dword ptr ds : [public_65ca120], eax
        ret 
        UNREACHABLE_TRAP(0x65c19c0)
    }
}
