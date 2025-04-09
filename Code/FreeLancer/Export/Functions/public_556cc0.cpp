#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556cc0);

PROC_DECLARE(0x556cc0, internal_556cc0, public_556cc0);
extern "C" NAKED register_t __cdecl internal_556cc0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        ret 
        UNREACHABLE_TRAP(0x556cc0)
    }
}
