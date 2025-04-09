#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5aace0);

#define public_5aacf4 _public_5aacf4
#define public_5aad04 _public_5aad04
#define public_5aad06 _public_5aad06
#define public_5aad22 _public_5aad22

PROC_DECLARE(0x5aace0, internal_5aace0, public_5aace0);
extern "C" NAKED register_t __cdecl internal_5aace0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ds : [public_5c6bd4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xC], ecx
        xor esi, esi
        public_5aacf4 : nop
        test esi, esi
        jne public_5aad04
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [eax+0x1B8]
        jmp public_5aad06
        public_5aad04 : nop
        mov esi, dword ptr ds : [esi]
        public_5aad06 : nop
        test esi, esi
        je public_5aad22
        mov ecx, dword ptr ds : [esi+8]
        push edi
        push ecx
        call ebx
        add esp, 8
        test al, al
        je public_5aacf4
        mov eax, dword ptr ds : [esi+8]
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_5aad22 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x5aace0)
    }
}

#undef public_5aacf4
#undef public_5aad04
#undef public_5aad06
#undef public_5aad22
