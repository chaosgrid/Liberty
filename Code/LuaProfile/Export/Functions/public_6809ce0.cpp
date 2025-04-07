#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801bd0);
CLANG_FORWARD_PROC_SYMBOL(public_68021e0);
CLANG_FORWARD_PROC_SYMBOL(public_6802680);
CLANG_FORWARD_PROC_SYMBOL(public_6805550);
CLANG_FORWARD_PROC_SYMBOL(public_6805f40);
CLANG_FORWARD_PROC_SYMBOL(public_6809c70);

#define public_6809d05 _public_6809d05
#define public_6809d10 _public_6809d10
#define public_6809d24 _public_6809d24

PROC_DECLARE(0x6809ce0, internal_6809ce0, public_6809ce0);
extern "C" NAKED register_t __cdecl internal_6809ce0()
{
    __asm
    {
        push esi
        push 1
        call public_6809c70
        push 2
        mov esi, eax
        call public_6805f40
        push eax
        call public_6801bd0
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        cmp ecx, 0xFFFFFFFA
        jne public_6809d05
        xor eax, eax
        jmp public_6809d10
        public_6809d05 : nop
        push eax
        push esi
        call public_6805550
        add esp, 8
        inc eax
        public_6809d10 : nop
        push eax
        push esi
        call public_6802680
        add esp, 8
        test eax, eax
        pop esi
        jne public_6809d24
        jmp public_68021e0
        public_6809d24 : nop
        ret 
        UNREACHABLE_TRAP(0x6809ce0)
    }
}

#undef public_6809d05
#undef public_6809d10
#undef public_6809d24
