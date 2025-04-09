#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52a250);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

PROC_DECLARE(0x52a250, internal_52a250, public_52a250);
extern "C" NAKED register_t __cdecl internal_52a250()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c687c]
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [esi+0x18]
        push ecx
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x20], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x52a250)
    }
}
