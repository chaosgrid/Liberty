#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_595840);
CLANG_FORWARD_PROC_SYMBOL(public_595ca0);
CLANG_FORWARD_PROC_SYMBOL(public_595d60);

PROC_DECLARE(0x595d60, internal_595d60, public_595d60);
extern "C" NAKED register_t __cdecl internal_595d60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x3C0], eax
        mov dword ptr ds : [ecx+0x3C4], edx
        call public_595ca0
        call public_595840
        ret 8
        UNREACHABLE_TRAP(0x595d60)
    }
}
