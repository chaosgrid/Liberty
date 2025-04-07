#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285c90);

#define public_62afd92 _public_62afd92

PROC_DECLARE(0x62afd80, internal_62afd80, public_62afd80);
extern "C" NAKED register_t __cdecl internal_62afd80()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x64]
        test al, al
        jne public_62afd92
        lea ecx, ds:[esi+8]
        call public_6285c90
        public_62afd92 : nop
        mov cl, byte ptr ds : [esi+0x64]
        xor eax, eax
        test cl, cl
        sete al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62afd80)
    }
}

#undef public_62afd92
