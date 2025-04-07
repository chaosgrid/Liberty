#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6301640);

#define public_633c594 _public_633c594
#define public_633c5b0 _public_633c5b0
#define public_633c5ba _public_633c5ba
#define public_633c5c2 _public_633c5c2

PROC_DECLARE(0x633c550, internal_633c550, public_633c550);
extern "C" NAKED register_t __cdecl internal_633c550()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        test edi, edi
        je public_633c5ba
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_658a828
        mov dword ptr ss : [esp+0x20], eax
        call public_6301640
        mov ebx, dword ptr ss : [esp+0x10]
        cmp ebx, dword ptr ds : [public_658a82c]
        je public_633c5ba
        mov eax, dword ptr ds : [ebx+0x94]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_633c5ba
        public_633c594 : nop
        mov ecx, dword ptr ds : [esi+0xC10]
        test ecx, ecx
        je public_633c5b0
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov ebp, eax
        call dword ptr ds : [edx+4]
        cmp ebp, eax
        je public_633c5c2
        public_633c5b0 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0x94]
        jne public_633c594
        public_633c5ba : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 
        public_633c5c2 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0x94]
        je public_633c5ba
        mov eax, dword ptr ds : [esi+0xC10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x633c550)
    }
}

#undef public_633c594
#undef public_633c5b0
#undef public_633c5ba
#undef public_633c5c2
