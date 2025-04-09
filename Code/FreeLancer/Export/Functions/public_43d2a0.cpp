#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);

#define public_43d2b1 _public_43d2b1
#define public_43d2c4 _public_43d2c4
#define public_43d2d3 _public_43d2d3

PROC_DECLARE(0x43d2a0, internal_43d2a0, public_43d2a0);
extern "C" NAKED register_t __cdecl internal_43d2a0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_43d2d3
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_43d2c4
        push esi
        public_43d2b1 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_43d2b1
        pop esi
        public_43d2c4 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_43d2d3 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x43d2a0)
    }
}

#undef public_43d2b1
#undef public_43d2c4
#undef public_43d2d3
