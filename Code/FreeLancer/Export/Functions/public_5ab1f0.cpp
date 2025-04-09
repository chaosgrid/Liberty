#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ab1f0);
CLANG_FORWARD_PROC_SYMBOL(public_5ab250);

#define public_5ab204 _public_5ab204
#define public_5ab214 _public_5ab214
#define public_5ab216 _public_5ab216
#define public_5ab23c _public_5ab23c

PROC_DECLARE(0x5ab1f0, internal_5ab1f0, public_5ab1f0);
extern "C" NAKED register_t __cdecl internal_5ab1f0()
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
        public_5ab204 : nop
        test esi, esi
        jne public_5ab214
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [eax+0x1B8]
        jmp public_5ab216
        public_5ab214 : nop
        mov esi, dword ptr ds : [esi]
        public_5ab216 : nop
        test esi, esi
        je public_5ab23c
        mov ecx, dword ptr ds : [esi+8]
        push edi
        push ecx
        call ebx
        add esp, 8
        test al, al
        je public_5ab204
        mov esi, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        call public_5ab250
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        public_5ab23c : nop
        mov ecx, dword ptr ss : [esp+0xC]
        xor esi, esi
        push esi
        call public_5ab250
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x5ab1f0)
    }
}

#undef public_5ab204
#undef public_5ab214
#undef public_5ab216
#undef public_5ab23c
