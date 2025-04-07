#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4bb60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e7b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f730);
CLANG_FORWARD_PROC_SYMBOL(public_6f505e0);

#define public_6f50675 _public_6f50675
#define public_6f50680 _public_6f50680
#define public_6f50694 _public_6f50694

PROC_DECLARE(0x6f50650, internal_6f50650, public_6f50650);
extern "C" NAKED register_t __cdecl internal_6f50650()
{
    __asm
    {
        push esi
        push 1
        call public_6f505e0
        push 2
        mov esi, eax
        call public_6f4f730
        push eax
        call public_6f4af60
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        cmp ecx, 0xFFFFFFFA
        jne public_6f50675
        xor eax, eax
        jmp public_6f50680
        public_6f50675 : nop
        push eax
        push esi
        call public_6f4e7b0
        add esp, 8
        inc eax
        public_6f50680 : nop
        push eax
        push esi
        call public_6f4bb60
        add esp, 8
        test eax, eax
        pop esi
        jne public_6f50694
        jmp public_6f4b6c0
        public_6f50694 : nop
        ret 
        UNREACHABLE_TRAP(0x6f50650)
    }
}

#undef public_6f50675
#undef public_6f50680
#undef public_6f50694
