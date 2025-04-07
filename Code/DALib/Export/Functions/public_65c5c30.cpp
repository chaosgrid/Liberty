#include "DALib-PCH.h"

PROC_DECLARE(0x65c5c30, internal_65c5c30, public_65c5c30);
extern "C" NAKED register_t __cdecl internal_65c5c30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        ret 
        UNREACHABLE_TRAP(0x65c5c30)
    }
}
