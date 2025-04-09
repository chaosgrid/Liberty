#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_595840);
CLANG_FORWARD_PROC_SYMBOL(public_595ca0);
CLANG_FORWARD_PROC_SYMBOL(public_595db0);

PROC_DECLARE(0x595db0, internal_595db0, public_595db0);
extern "C" NAKED register_t __cdecl internal_595db0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x3C8], eax
        call public_595ca0
        call public_595840
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x595db0)
    }
}
