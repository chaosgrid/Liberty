#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_487c30);
CLANG_FORWARD_PROC_SYMBOL(public_4890c0);

#define public_4890e0 _public_4890e0
#define public_489128 _public_489128
#define public_489131 _public_489131
#define public_489147 _public_489147

PROC_DECLARE(0x4890c0, internal_4890c0, public_4890c0);
extern "C" NAKED register_t __cdecl internal_4890c0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ds : [ecx+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        cmp edi, ebx
        mov dword ptr ss : [esp+0xC], ecx
        mov esi, eax
        je public_489128
        push ebp
        mov ebp, edi
        sub ebp, eax
        mov edi, edi
        public_4890e0 : nop
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ds:[esi+ebp+4]
        push eax
        lea ecx, ds:[esi+4]
        call dword ptr ds : [public_5c7060]
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        lea eax, ds:[edi+0x14]
        push eax
        lea ecx, ds:[esi+0x14]
        call dword ptr ds : [public_5c7060]
        add edi, 0x24
        add esi, 0x24
        cmp edi, ebx
        jne public_4890e0
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        pop ebp
        public_489128 : nop
        mov ebx, dword ptr ds : [ecx+8]
        cmp esi, ebx
        mov edi, esi
        je public_489147
        public_489131 : nop
        mov ecx, edi
        call public_487c30
        add edi, 0x24
        cmp edi, ebx
        jne public_489131
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        public_489147 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x4890c0)
    }
}

#undef public_4890e0
#undef public_489128
#undef public_489131
#undef public_489147
