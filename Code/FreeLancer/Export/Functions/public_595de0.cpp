#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_595840);
CLANG_FORWARD_PROC_SYMBOL(public_595ca0);
CLANG_FORWARD_PROC_SYMBOL(public_595de0);

PROC_DECLARE(0x595de0, internal_595de0, public_595de0);
extern "C" NAKED register_t __cdecl internal_595de0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, eax
        mov dword ptr ds : [ecx+0x3CC], eax
        mov dword ptr ds : [ecx+0x428], edx
        call public_595ca0
        call public_595840
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x595de0)
    }
}
