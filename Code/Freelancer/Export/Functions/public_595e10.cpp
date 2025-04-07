#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_595840);
CLANG_FORWARD_PROC_SYMBOL(public_595ca0);
CLANG_FORWARD_PROC_SYMBOL(public_595e10);

PROC_DECLARE(0x595e10, internal_595e10, public_595e10);
extern "C" NAKED register_t __cdecl internal_595e10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x3D0], eax
        call public_595ca0
        call public_595840
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x595e10)
    }
}
