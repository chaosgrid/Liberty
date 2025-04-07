#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b73fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6b76be0);
CLANG_FORWARD_PROC_SYMBOL(public_6b782a0);

#define public_6b72928 _public_6b72928
#define public_6b72940 _public_6b72940
#define public_6b7294a _public_6b7294a
#define public_6b7295f _public_6b7295f
#define public_6b72983 _public_6b72983

PROC_DECLARE(0x6b728f0, internal_6b728f0, public_6b728f0);
extern "C" NAKED register_t __cdecl internal_6b728f0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        push edi
        lea ebx, ds:[esi+0x10]
        mov dword ptr ds : [esi], offset public_6b790bc
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov dword ptr ds : [esi+8], ebp
        mov eax, dword ptr ds : [ebx+4]
        push eax
        mov ecx, dword ptr ds : [eax]
        lea eax, ss:[esp+0x14]
        push ecx
        push eax
        mov ecx, ebx
        call public_6b76be0
        mov dword ptr ds : [ebx+0xC], ebp
        mov eax, dword ptr ds : [esi+0x20]
        cmp eax, ebp
        je public_6b72940
        public_6b72928 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, ecx
        mov edi, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [public_6b79070]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ds : [esi+0x20], edi
        jne public_6b72928
        public_6b72940 : nop
        mov ebp, dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6b7295f
        public_6b7294a : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebx
        call public_6b73fc0
        cmp edi, ebp
        jne public_6b7294a
        public_6b7295f : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6b782a0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        test byte ptr ss : [esp+0x18], 1
        je public_6b72983
        push esi
        call public_6b782a0
        add esp, 4
        public_6b72983 : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6b728f0)
    }
}

#undef public_6b72928
#undef public_6b72940
#undef public_6b7294a
#undef public_6b7295f
#undef public_6b72983
