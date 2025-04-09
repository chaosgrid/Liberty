#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_454f80);
CLANG_FORWARD_PROC_SYMBOL(public_454fb0);
CLANG_FORWARD_PROC_SYMBOL(public_455290);

PROC_DECLARE(0x454f80, internal_454f80, public_454f80);
extern "C" NAKED register_t __cdecl internal_454f80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_5c60f8]
        mov ecx, esi
        mov byte ptr ds : [esi+0x2D], 1
        call public_455290
        push 0
        mov ecx, esi
        call public_454fb0
        mov byte ptr ds : [esi+0xC4], 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x454f80)
    }
}
