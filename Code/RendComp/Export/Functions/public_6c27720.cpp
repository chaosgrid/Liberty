#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c27720);
CLANG_FORWARD_PROC_SYMBOL(public_6c27910);
CLANG_FORWARD_PROC_SYMBOL(public_6c29040);
CLANG_FORWARD_PROC_SYMBOL(public_6c29210);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c27748 _public_6c27748
#define public_6c2777d _public_6c2777d

PROC_DECLARE(0x6c27720, internal_6c27720, public_6c27720);
extern "C" NAKED register_t __cdecl internal_6c27720()
{
    __asm
    {
        push esi
        push 0
        push 0
        push 0
        mov esi, ecx
        call public_6c27910
        mov eax, dword ptr ds : [esi+0x2C]
        cmp eax, dword ptr ds : [esi+0x30]
        je public_6c27748
        push eax
        call public_6c29210
        mov eax, dword ptr ds : [esi+0x2C]
        push eax
        call public_6c34ea0
        add esp, 8
        public_6c27748 : nop
        mov ecx, esi
        mov dword ptr ds : [esi+0x2C], 0
        mov dword ptr ds : [esi+0x30], 0
        call public_6c29040
        mov ecx, dword ptr ds : [esi+0x18]
        push ecx
        call public_6c34ea0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        test eax, eax
        je public_6c2777d
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], 0
        public_6c2777d : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c27720)
    }
}

#undef public_6c27748
#undef public_6c2777d
