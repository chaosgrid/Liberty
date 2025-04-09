#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f79a0);
CLANG_FORWARD_PROC_SYMBOL(public_4f8060);

#define public_5033b8 _public_5033b8
#define public_5033c0 _public_5033c0

PROC_DECLARE(0x5033a0, internal_5033a0, public_5033a0);
extern "C" NAKED register_t __cdecl internal_5033a0()
{
    __asm
    {
        push 0x84
        call public_4f79a0
        add esp, 4
        test eax, eax
        je public_5033b8
        mov ecx, eax
        jmp public_5033c0
        public_5033b8 : nop
        xor eax, eax
        ret 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_5033c0 : nop
        push esi
        push 0x25
        mov esi, ecx
        call public_4f8060
        mov dword ptr ds : [esi], offset public_5daac4
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5033a0)
    }
}

#undef public_5033b8
#undef public_5033c0
