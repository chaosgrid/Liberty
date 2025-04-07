#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d11b0);
CLANG_FORWARD_PROC_SYMBOL(public_65d21e0);

#define public_65d178c _public_65d178c
#define public_65d17aa _public_65d17aa
#define public_65d17ac _public_65d17ac
#define public_65d17b2 _public_65d17b2
#define public_65d17b5 _public_65d17b5

PROC_DECLARE(0x65d1770, internal_65d1770, public_65d1770);
extern "C" NAKED register_t __cdecl internal_65d1770()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        or eax, 0xFFFFFFFF
        cmp dword ptr ds : [edi+8], eax
        je public_65d17b5
        mov eax, dword ptr ds : [edi+0x10]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_65d17b2
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        public_65d178c : nop
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        call public_65d21e0
        test al, al
        jne public_65d17aa
        lea eax, ss:[esp+0x10]
        push esi
        push eax
        mov ecx, edi
        call public_65d11b0
        mov esi, dword ptr ds : [eax]
        jmp public_65d17ac
        public_65d17aa : nop
        mov esi, dword ptr ds : [esi]
        public_65d17ac : nop
        cmp esi, dword ptr ds : [edi+0x10]
        jne public_65d178c
        pop ebx
        public_65d17b2 : nop
        xor eax, eax
        pop esi
        public_65d17b5 : nop
        pop edi
        ret 8
        UNREACHABLE_TRAP(0x65d1770)
    }
}

#undef public_65d178c
#undef public_65d17aa
#undef public_65d17ac
#undef public_65d17b2
#undef public_65d17b5
