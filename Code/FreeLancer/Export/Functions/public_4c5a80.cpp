#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5a80);
CLANG_FORWARD_PROC_SYMBOL(public_4c5b40);
CLANG_FORWARD_PROC_SYMBOL(public_4c5f20);
CLANG_FORWARD_PROC_SYMBOL(public_4c5fa0);
CLANG_FORWARD_PROC_SYMBOL(public_4c6010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4c5ab0 _public_4c5ab0
#define public_4c5ad7 _public_4c5ad7
#define public_4c5b03 _public_4c5b03
#define public_4c5b07 _public_4c5b07
#define public_4c5b27 _public_4c5b27

PROC_DECLARE(0x4c5a80, internal_4c5a80, public_4c5a80);
extern "C" NAKED register_t __cdecl internal_4c5a80()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_4c5b03
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_4c5b03
        cmp ebx, eax
        jne public_4c5b03
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_4c5ad7
        lea esp, ss:[esp]
        public_4c5ab0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_4c5f20
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_4c6010
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_4c5ab0
        public_4c5ad7 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_4c5b03 : nop
        cmp ecx, ebx
        je public_4c5b27
        public_4c5b07 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_4c5fa0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_4c5b40
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_4c5b07
        public_4c5b27 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4c5a80)
    }
}

#undef public_4c5ab0
#undef public_4c5ad7
#undef public_4c5b03
#undef public_4c5b07
#undef public_4c5b27
