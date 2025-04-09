#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5727b0);
CLANG_FORWARD_PROC_SYMBOL(public_5760f0);
CLANG_FORWARD_PROC_SYMBOL(public_591de0);

PROC_DECLARE(0x5727b0, internal_5727b0, public_5727b0);
extern "C" NAKED register_t __cdecl internal_5727b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push 0xF
        lea ecx, ds:[esi+0x80]
        call public_5760f0
        mov ecx, esi
        call public_591de0
        xor eax, eax
        mov dword ptr ds : [esi+0xE0], eax
        mov dword ptr ds : [esi+0xE4], eax
        mov dword ptr ds : [esi+0xE8], eax
        mov dword ptr ds : [esi+0xEC], eax
        mov dword ptr ds : [esi+0xF0], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5727b0)
    }
}
