#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f920);

#define public_623f936 _public_623f936
#define public_623f94b _public_623f94b
#define public_623f94d _public_623f94d

PROC_DECLARE(0x623f920, internal_623f920, public_623f920);
extern "C" NAKED register_t __cdecl internal_623f920()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_623f94b
        mov edi, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x14]
        public_623f936 : nop
        push edi
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_623f94d
        mov eax, dword ptr ds : [esi+0x18]
        add esi, 0x14
        test eax, eax
        jne public_623f936
        public_623f94b : nop
        xor eax, eax
        public_623f94d : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x623f920)
    }
}

#undef public_623f936
#undef public_623f94b
#undef public_623f94d
