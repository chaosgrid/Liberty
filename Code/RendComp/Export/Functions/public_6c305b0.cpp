#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c305c0 _public_6c305c0
#define public_6c305e8 _public_6c305e8

PROC_DECLARE(0x6c305b0, internal_6c305b0, public_6c305b0);
extern "C" NAKED register_t __cdecl internal_6c305b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jbe public_6c305c0
        dec eax
        mov dword ptr ds : [esi+8], eax
        public_6c305c0 : nop
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jne public_6c305e8
        mov dword ptr ds : [esi+8], 1
        mov eax, dword ptr ds : [esi+4]
        push eax
        mov dword ptr ds : [esi], offset public_6c365cc
        call public_6c34ea0
        push esi
        call public_6c34ea0
        add esp, 8
        xor eax, eax
        public_6c305e8 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c305b0)
    }
}

#undef public_6c305c0
#undef public_6c305e8
