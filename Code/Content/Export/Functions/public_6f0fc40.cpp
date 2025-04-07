#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0fc40);
CLANG_FORWARD_PROC_SYMBOL(public_6f1de90);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1ec00);
CLANG_FORWARD_PROC_SYMBOL(public_6f1ecc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1f130);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa80);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fb00);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);

#define public_6f0fc52 _public_6f0fc52
#define public_6f0fc68 _public_6f0fc68
#define public_6f0fcd8 _public_6f0fcd8
#define public_6f0fcfd _public_6f0fcfd
#define public_6f0fd43 _public_6f0fd43
#define public_6f0fd58 _public_6f0fd58
#define public_6f0fd70 _public_6f0fd70
#define public_6f0fd85 _public_6f0fd85

PROC_DECLARE(0x6f0fc40, internal_6f0fc40, public_6f0fc40);
extern "C" NAKED register_t __cdecl internal_6f0fc40()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x18]
        test eax, eax
        je public_6f0fc68
        public_6f0fc52 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x18]
        test eax, eax
        jne public_6f0fc52
        public_6f0fc68 : nop
        mov ebx, dword ptr ds : [public_6fb3068]
        lea edi, ds:[esi+0x50]
        mov ecx, edi
        call ebx
        xor eax, eax
        mov ecx, 6
        rep stosd
        lea edi, ds:[esi+0x68]
        mov ecx, edi
        call ebx
        xor eax, eax
        mov ecx, 6
        rep stosd
        mov eax, dword ptr ds : [esi+0x188]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x184]
        push eax
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        call public_6f1f130
        mov eax, dword ptr ds : [esi+0xA8]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0xA4]
        push eax
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        call public_6f1e6a0
        mov edi, dword ptr ds : [esi+0xBC]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        lea ebx, ds:[esi+0xB8]
        mov dword ptr ss : [esp+0x10], eax
        je public_6f0fcfd
        public_6f0fcd8 : nop
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebx
        call public_6f1de90
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6f0fcd8
        public_6f0fcfd : nop
        mov eax, dword ptr ds : [esi+0x104]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x100]
        push eax
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_6f1ec00
        mov eax, dword ptr ds : [esi+0x118]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x114]
        push eax
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        call public_6f1ecc0
        mov ebx, dword ptr ds : [esi+0xC8]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        lea ebp, ds:[esi+0xC4]
        je public_6f0fd58
        public_6f0fd43 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebp
        call public_6f1fb00
        cmp edi, ebx
        jne public_6f0fd43
        public_6f0fd58 : nop
        mov ebx, dword ptr ds : [esi+0x9C]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        lea ebp, ds:[esi+0x98]
        je public_6f0fd85
        lea ebx, ds:[ebx]
        public_6f0fd70 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        call public_6f1fa80
        cmp edi, ebx
        jne public_6f0fd70
        public_6f0fd85 : nop
        pop edi
        mov byte ptr ds : [esi+0x19], 1
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f0fc40)
    }
}

#undef public_6f0fc52
#undef public_6f0fc68
#undef public_6f0fcd8
#undef public_6f0fcfd
#undef public_6f0fd43
#undef public_6f0fd58
#undef public_6f0fd70
#undef public_6f0fd85
