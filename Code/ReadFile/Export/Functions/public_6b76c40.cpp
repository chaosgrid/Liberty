#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76c40);
CLANG_FORWARD_PROC_SYMBOL(public_6b782a0);

#define public_6b76c55 _public_6b76c55
#define public_6b76c7d _public_6b76c7d
#define public_6b76c8c _public_6b76c8c
#define public_6b76c92 _public_6b76c92
#define public_6b76ca5 _public_6b76ca5

PROC_DECLARE(0x6b76c40, internal_6b76c40, public_6b76c40);
extern "C" NAKED register_t __cdecl internal_6b76c40()
{
    __asm
    {
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp+8]
        push edi
        cmp esi, eax
        mov edi, esi
        je public_6b76ca5
        push ebx
        xor ebx, ebx
        public_6b76c55 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, ebp
        push eax
        call public_6b76c40
        mov eax, dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [edi]
        cmp eax, ebx
        je public_6b76c8c
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, ebx
        je public_6b76c7d
        push eax
        call dword ptr ds : [public_6b79010]
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        public_6b76c7d : nop
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        call dword ptr ds : [public_6b79014]
        mov dword ptr ds : [esi+0x14], ebx
        jmp public_6b76c92
        public_6b76c8c : nop
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        public_6b76c92 : nop
        push esi
        call public_6b782a0
        mov eax, dword ptr ss : [ebp+8]
        add esp, 4
        cmp edi, eax
        mov esi, edi
        jne public_6b76c55
        pop ebx
        public_6b76ca5 : nop
        pop edi
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6b76c40)
    }
}

#undef public_6b76c55
#undef public_6b76c7d
#undef public_6b76c8c
#undef public_6b76c92
#undef public_6b76ca5
