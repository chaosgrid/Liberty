#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f496);
CLANG_FORWARD_PROC_SYMBOL(public_6d48423);

#define public_6d48430 _public_6d48430
#define public_6d4843c _public_6d4843c
#define public_6d4845d _public_6d4845d
#define public_6d48461 _public_6d48461

PROC_DECLARE(0x6d48423, internal_6d48423, public_6d48423);
extern "C" NAKED register_t __cdecl internal_6d48423()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 2
        push esi
        jne public_6d48430
        push 0x40
        pop esi
        jmp public_6d4843c
        public_6d48430 : nop
        cmp dword ptr ss : [esp+8], 1
        jne public_6d48461
        mov esi, 0x19C
        public_6d4843c : nop
        push esi
        call public_6d2f496
        mov edx, eax
        test edx, edx
        pop ecx
        je public_6d4845d
        push edi
        mov ecx, esi
        shr ecx, 2
        xor eax, eax
        mov edi, edx
        rep stosd
        mov ecx, esi
        and ecx, 3
        rep stosb
        pop edi
        public_6d4845d : nop
        mov eax, edx
        pop esi
        ret 
        public_6d48461 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d48423)
    }
}

#undef public_6d48430
#undef public_6d4843c
#undef public_6d4845d
#undef public_6d48461
