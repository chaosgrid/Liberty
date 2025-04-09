#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_452eb0);

PROC_DECLARE(0x452eb0, internal_452eb0, public_452eb0);
extern "C" NAKED register_t __cdecl internal_452eb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [eax+0x30]
        ret 
        UNREACHABLE_TRAP(0x452eb0)
    }
}
