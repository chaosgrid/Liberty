#include "DALib-PCH.h"

PROC_DECLARE(0x65c22e0, internal_65c22e0, public_65c22e0);
extern "C" NAKED register_t __cdecl internal_65c22e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        ret 
        UNREACHABLE_TRAP(0x65c22e0)
    }
}
