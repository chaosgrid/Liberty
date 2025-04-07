#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b71000);
CLANG_FORWARD_PROC_SYMBOL(public_6b76be0);
CLANG_FORWARD_PROC_SYMBOL(public_6b782a0);

#define public_6b71024 _public_6b71024
#define public_6b7102a _public_6b7102a
#define public_6b71036 _public_6b71036
#define public_6b7104c _public_6b7104c
#define public_6b71062 _public_6b71062
#define public_6b71079 _public_6b71079
#define public_6b7109a _public_6b7109a
#define public_6b710a5 _public_6b710a5
#define public_6b710ab _public_6b710ab
#define public_6b710bd _public_6b710bd
#define public_6b71103 _public_6b71103
#define public_6b71119 _public_6b71119
#define public_6b71132 _public_6b71132
#define public_6b7113d _public_6b7113d
#define public_6b71143 _public_6b71143
#define public_6b71155 _public_6b71155
#define public_6b7116e _public_6b7116e
#define public_6b7117c _public_6b7117c

PROC_DECLARE(0x6b71000, internal_6b71000, public_6b71000);
extern "C" NAKED register_t __cdecl internal_6b71000()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov edx, dword ptr ds : [esi+0x22C]
        cmp edx, ebx
        je public_6b71036
        mov eax, dword ptr ds : [esi+0x230]
        cmp eax, ebx
        je public_6b71024
        mov ecx, dword ptr ds : [eax+0x238]
        jmp public_6b7102a
        public_6b71024 : nop
        mov ecx, dword ptr ds : [esi+0x238]
        public_6b7102a : nop
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x28]
        mov dword ptr ds : [esi+0x22C], ebx
        public_6b71036 : nop
        mov eax, dword ptr ds : [esi+0x234]
        cmp eax, ebx
        je public_6b7104c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x234], ebx
        public_6b7104c : nop
        mov eax, dword ptr ds : [esi+0x230]
        cmp eax, ebx
        je public_6b71062
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x230], ebx
        public_6b71062 : nop
        mov ecx, dword ptr ds : [esi+0x238]
        cmp ecx, ebx
        je public_6b71079
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x14]
        mov dword ptr ds : [esi+0x238], ebx
        public_6b71079 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ebp, dword ptr ds : [public_6b79014]
        cmp eax, ebx
        je public_6b710a5
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_6b7109a
        push eax
        call dword ptr ds : [public_6b79010]
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        public_6b7109a : nop
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call ebp
        mov dword ptr ds : [esi+8], ebx
        jmp public_6b710ab
        public_6b710a5 : nop
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        public_6b710ab : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0xFFFFFFFF
        je public_6b710bd
        push eax
        call ebp
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_6b710bd : nop
        mov eax, dword ptr ds : [esi+0x244]
        push edi
        lea edi, ds:[esi+0x240]
        push eax
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push ecx
        push edx
        mov ecx, edi
        call public_6b76be0
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6b782a0
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x234]
        add esp, 4
        cmp eax, ebx
        pop edi
        je public_6b71103
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x234], ebx
        public_6b71103 : nop
        mov eax, dword ptr ds : [esi+0x230]
        cmp eax, ebx
        je public_6b71119
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x230], ebx
        public_6b71119 : nop
        cmp dword ptr ds : [esi+8], ebx
        je public_6b7113d
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_6b71132
        push eax
        call dword ptr ds : [public_6b79010]
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        public_6b71132 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        call ebp
        mov dword ptr ds : [esi+8], ebx
        jmp public_6b71143
        public_6b7113d : nop
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        public_6b71143 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0xFFFFFFFF
        je public_6b71155
        push eax
        call ebp
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_6b71155 : nop
        cmp dword ptr ds : [esi+8], ebx
        je public_6b7117c
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_6b7116e
        push eax
        call dword ptr ds : [public_6b79010]
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        public_6b7116e : nop
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        call ebp
        mov dword ptr ds : [esi+8], ebx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6b7117c : nop
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6b71000)
    }
}

#undef public_6b71024
#undef public_6b7102a
#undef public_6b71036
#undef public_6b7104c
#undef public_6b71062
#undef public_6b71079
#undef public_6b7109a
#undef public_6b710a5
#undef public_6b710ab
#undef public_6b710bd
#undef public_6b71103
#undef public_6b71119
#undef public_6b71132
#undef public_6b7113d
#undef public_6b71143
#undef public_6b71155
#undef public_6b7116e
#undef public_6b7117c
