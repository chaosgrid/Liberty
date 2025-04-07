#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d05d90);
CLANG_FORWARD_PROC_SYMBOL(public_6d06720);
CLANG_FORWARD_PROC_SYMBOL(public_6d0cd60);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d0cd70 _public_6d0cd70
#define public_6d0cd7d _public_6d0cd7d
#define public_6d0cd7f _public_6d0cd7f
#define public_6d0cdad _public_6d0cdad
#define public_6d0cdaf _public_6d0cdaf
#define public_6d0cdc5 _public_6d0cdc5
#define public_6d0cde2 _public_6d0cde2
#define public_6d0ce40 _public_6d0ce40
#define public_6d0ce42 _public_6d0ce42
#define public_6d0ce4f _public_6d0ce4f
#define public_6d0ce52 _public_6d0ce52
#define public_6d0ce7c _public_6d0ce7c
#define public_6d0ce7e _public_6d0ce7e
#define public_6d0ce94 _public_6d0ce94
#define public_6d0ceb0 _public_6d0ceb0
#define public_6d0cec4 _public_6d0cec4
#define public_6d0ced0 _public_6d0ced0

PROC_DECLARE(0x6d0cd60, internal_6d0cd60, public_6d0cd60);
extern "C" NAKED register_t __cdecl internal_6d0cd60()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        xor edi, edi
        lea ecx, ds:[ecx]
        public_6d0cd70 : nop
        test edi, edi
        jne public_6d0cd7d
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+0x60]
        jmp public_6d0cd7f
        public_6d0cd7d : nop
        mov edi, dword ptr ds : [edi]
        public_6d0cd7f : nop
        test edi, edi
        je public_6d0ce40
        mov edx, dword ptr ds : [edi+8]
        test edx, edx
        je public_6d0cdad
        lea eax, ds:[edx+0xC]
        test eax, eax
        je public_6d0cdad
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6d0cdad
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        je public_6d0cdaf
        public_6d0cdad : nop
        xor eax, eax
        public_6d0cdaf : nop
        mov ecx, dword ptr ds : [eax+0x164]
        test ecx, ecx
        je public_6d0cde2
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_6d0cdc5
        cmp ecx, eax
        jne public_6d0cd70
        public_6d0cdc5 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x14], edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        call public_6d05d90
        jmp public_6d0cd70
        public_6d0cde2 : nop
        mov eax, dword ptr ds : [eax+0xE0]
        mov ecx, eax
        and ecx, 0xC40
        cmp eax, ecx
        jne public_6d0cd70
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        jne public_6d0cd70
        mov ebx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+4]
        push edx
        push esi
        mov ecx, ebx
        call public_6cfc340
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6d06720
        mov eax, dword ptr ds : [ebx+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [ebx+8], eax
        jmp public_6d0cd70
        public_6d0ce40 : nop
        xor ebp, ebp
        public_6d0ce42 : nop
        test ebp, ebp
        jne public_6d0ce4f
        mov eax, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [eax+0x38]
        jmp public_6d0ce52
        public_6d0ce4f : nop
        mov ebp, dword ptr ss : [ebp]
        public_6d0ce52 : nop
        test ebp, ebp
        je public_6d0ced0
        mov ebx, dword ptr ss : [ebp+8]
        test ebx, ebx
        je public_6d0ce7c
        lea eax, ds:[ebx+0xC]
        test eax, eax
        je public_6d0ce7c
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6d0ce7c
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6d0ce7e
        public_6d0ce7c : nop
        xor eax, eax
        public_6d0ce7e : nop
        mov eax, dword ptr ds : [eax+0x164]
        test eax, eax
        je public_6d0ce42
        mov ecx, dword ptr ss : [esp+0x24]
        test ecx, ecx
        je public_6d0ce94
        cmp eax, ecx
        jne public_6d0ce42
        public_6d0ce94 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6d60012
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6d0ceb0
        mov edi, eax
        public_6d0ceb0 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d0cec4
        mov dword ptr ds : [eax], ebx
        public_6d0cec4 : nop
        mov eax, dword ptr ss : [esp+0x20]
        inc dword ptr ds : [eax+8]
        jmp public_6d0ce42
        public_6d0ced0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6d0cd60)
    }
}

#undef public_6d0cd70
#undef public_6d0cd7d
#undef public_6d0cd7f
#undef public_6d0cdad
#undef public_6d0cdaf
#undef public_6d0cdc5
#undef public_6d0cde2
#undef public_6d0ce40
#undef public_6d0ce42
#undef public_6d0ce4f
#undef public_6d0ce52
#undef public_6d0ce7c
#undef public_6d0ce7e
#undef public_6d0ce94
#undef public_6d0ceb0
#undef public_6d0cec4
#undef public_6d0ced0
