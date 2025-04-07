#include "DALib-PCH.h"

PROC_DECLARE(0x65c2bc0, internal_65c2bc0, public_65c2bc0);
extern "C" NAKED register_t __cdecl internal_65c2bc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65ca120]
        ret 
        UNREACHABLE_TRAP(0x65c2bc0)
    }
}
