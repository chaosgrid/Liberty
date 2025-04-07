#include "DALib-PCH.h"

PROC_DECLARE(0x65c5b40, internal_65c5b40, public_65c5b40);
extern "C" NAKED register_t __cdecl internal_65c5b40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        ret 
        UNREACHABLE_TRAP(0x65c5b40)
    }
}
