#include "DALib-PCH.h"

PROC_DECLARE(0x65c2eb0, internal_65c2eb0, public_65c2eb0);
extern "C" NAKED register_t __cdecl internal_65c2eb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x7C]
        ret 
        UNREACHABLE_TRAP(0x65c2eb0)
    }
}
