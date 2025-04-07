#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f19b80);
CLANG_FORWARD_PROC_SYMBOL(public_6f19ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6f19bae _public_6f19bae
#define public_6f19bb1 _public_6f19bb1
#define public_6f19bc3 _public_6f19bc3
#define public_6f19bd0 _public_6f19bd0
#define public_6f19bd3 _public_6f19bd3
#define public_6f19be1 _public_6f19be1
#define public_6f19bee _public_6f19bee
#define public_6f19bf1 _public_6f19bf1
#define public_6f19c07 _public_6f19c07
#define public_6f19c12 _public_6f19c12
#define public_6f19c26 _public_6f19c26
#define public_6f19c49 _public_6f19c49
#define public_6f19c59 _public_6f19c59
#define public_6f19c63 _public_6f19c63

PROC_DECLARE(0x6f19b80, internal_6f19b80, public_6f19b80);
extern "C" NAKED register_t __cdecl internal_6f19b80()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ds:[esi+0xA4]
        call public_6f7b0f0
        mov eax, dword ptr ds : [esi+0xA8]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, eax
        jne public_6f19bae
        xor ebp, ebp
        jmp public_6f19bb1
        public_6f19bae : nop
        mov ebp, dword ptr ds : [ecx+0x10]
        public_6f19bb1 : nop
        mov ecx, dword ptr ds : [esi+0xC8]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x18]
        xor edi, edi
        cmp eax, ecx
        je public_6f19bd3
        public_6f19bc3 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_6f19bd0
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f19bc3
        jmp public_6f19bd3
        public_6f19bd0 : nop
        lea edi, ds:[eax+8]
        public_6f19bd3 : nop
        mov esi, dword ptr ds : [esi+0xD4]
        mov eax, dword ptr ds : [esi]
        xor ebx, ebx
        cmp eax, esi
        je public_6f19bf1
        public_6f19be1 : nop
        cmp dword ptr ds : [eax+0x3C], edx
        je public_6f19bee
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        jne public_6f19be1
        jmp public_6f19bf1
        public_6f19bee : nop
        lea ebx, ds:[eax+8]
        public_6f19bf1 : nop
        test ebp, ebp
        mov esi, dword ptr ss : [esp+0x1C]
        je public_6f19c12
        mov ecx, dword ptr ss : [ebp+0x180]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f19c12
        mov edx, dword ptr ds : [esi]
        public_6f19c07 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_6f19c59
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f19c07
        public_6f19c12 : nop
        test edi, edi
        je public_6f19c49
        mov ecx, dword ptr ds : [edi+0x470]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        je public_6f19c49
        public_6f19c26 : nop
        mov edx, dword ptr ds : [eax+8]
        cmp edx, dword ptr ds : [esi]
        je public_6f19c59
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x24]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [edi+0x470]
        jne public_6f19c26
        public_6f19c49 : nop
        test ebx, ebx
        je public_6f19c63
        push esi
        mov ecx, ebx
        call public_6f19ca0
        test al, al
        je public_6f19c63
        public_6f19c59 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 8
        public_6f19c63 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f19b80)
    }
}

#undef public_6f19bae
#undef public_6f19bb1
#undef public_6f19bc3
#undef public_6f19bd0
#undef public_6f19bd3
#undef public_6f19be1
#undef public_6f19bee
#undef public_6f19bf1
#undef public_6f19c07
#undef public_6f19c12
#undef public_6f19c26
#undef public_6f19c49
#undef public_6f19c59
#undef public_6f19c63
