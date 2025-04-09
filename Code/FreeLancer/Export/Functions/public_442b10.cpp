#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_442b10);
CLANG_FORWARD_PROC_SYMBOL(public_4431d0);
CLANG_FORWARD_PROC_SYMBOL(public_5a7c20);

#define public_442b28 _public_442b28
#define public_442b40 _public_442b40
#define public_442b43 _public_442b43
#define public_442b4c _public_442b4c
#define public_442b77 _public_442b77
#define public_442b89 _public_442b89
#define public_442b92 _public_442b92
#define public_442bad _public_442bad
#define public_442bd0 _public_442bd0

PROC_DECLARE(0x442b10, internal_442b10, public_442b10);
extern "C" NAKED register_t __cdecl internal_442b10()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, dword ptr ds : [edi+8]
        mov al, 1
        je public_442b4c
        public_442b28 : nop
        lea eax, ds:[esi+0xC]
        push eax
        push ebp
        mov ebx, esi
        call dword ptr ds : [public_5c6fa4]
        add esp, 8
        test al, al
        je public_442b40
        mov esi, dword ptr ds : [esi]
        jmp public_442b43
        public_442b40 : nop
        mov esi, dword ptr ds : [esi+8]
        public_442b43 : nop
        cmp esi, dword ptr ds : [edi+8]
        mov ebp, dword ptr ss : [esp+0x1C]
        jne public_442b28
        public_442b4c : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_442b77
        push ebp
        push ebx
        push esi
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_4431d0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_442b77 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], ebx
        je public_442b92
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx]
        jne public_442b89
        push ebp
        jmp public_442bad
        public_442b89 : nop
        lea ecx, ss:[esp+0x10]
        call public_5a7c20
        public_442b92 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[ecx+0xC]
        push ebp
        push eax
        call dword ptr ds : [public_5c6fa4]
        add esp, 8
        test al, al
        je public_442bd0
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        public_442bad : nop
        push ebx
        push esi
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, edi
        call public_4431d0
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dl, 1
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        public_442bd0 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        xor dl, dl
        pop ebp
        mov dword ptr ds : [eax], ecx
        mov byte ptr ds : [eax+4], dl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x442b10)
    }
}

#undef public_442b28
#undef public_442b40
#undef public_442b43
#undef public_442b4c
#undef public_442b77
#undef public_442b89
#undef public_442b92
#undef public_442bad
#undef public_442bd0
