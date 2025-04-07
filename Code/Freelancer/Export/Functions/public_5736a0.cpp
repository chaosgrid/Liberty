#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_5736c9 _public_5736c9
#define public_5736d8 _public_5736d8

PROC_DECLARE(0x5736a0, internal_5736a0, public_5736a0);
extern "C" NAKED register_t __cdecl internal_5736a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x3004
        push esi
        mov esi, ecx
        jne public_5736d8
        push 0
        call public_5645c0
        mov eax, dword ptr ss : [esp+0x10]
        add esp, 4
        cmp eax, 0x300C
        je public_5736c9
        xor al, al
        pop esi
        ret 0xC
        public_5736c9 : nop
        mov eax, 1
        mov dword ptr ds : [esi+0xB4], eax
        pop esi
        ret 0xC
        public_5736d8 : nop
        cmp eax, 0xF002
        sete al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x5736a0)
    }
}

#undef public_5736c9
#undef public_5736d8
