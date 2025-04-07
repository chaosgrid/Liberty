#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_579a40);

PROC_DECLARE(0x579a40, internal_579a40, public_579a40);
extern "C" NAKED register_t __cdecl internal_579a40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x360]
        push 0
        push eax
        call public_5798b0
        ret 
        UNREACHABLE_TRAP(0x579a40)
    }
}
