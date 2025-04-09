#include "FreeLancer-PCH.h"


#define public_5431a3 _public_5431a3

PROC_DECLARE(0x543190, internal_543190, public_543190);
extern "C" NAKED register_t __cdecl internal_543190()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x60]
        test al, al
        jne public_5431a3
        lea ecx, ds:[esi+8]
        call dword ptr ds : [public_5c6ab8]
        public_5431a3 : nop
        mov cl, byte ptr ds : [esi+0x60]
        xor eax, eax
        test cl, cl
        sete al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x543190)
    }
}

#undef public_5431a3
