#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce6870);
CLANG_FORWARD_PROC_SYMBOL(public_6cf73d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0ebf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4f100);

#define public_6d0ec98 _public_6d0ec98
#define public_6d0ec9a _public_6d0ec9a
#define public_6d0eceb _public_6d0eceb
#define public_6d0ecf8 _public_6d0ecf8
#define public_6d0ed29 _public_6d0ed29
#define public_6d0ed30 _public_6d0ed30

PROC_DECLARE(0x6d0ebf0, internal_6d0ebf0, public_6d0ebf0);
extern "C" NAKED register_t __cdecl internal_6d0ebf0()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x10], ecx
        push ebp
        mov ecx, edi
        call public_6ce6870
        mov ecx, eax
        add ecx, 0xE4
        call dword ptr ds : [public_6d641c4]
        test eax, eax
        je public_6d0ed30
        push eax
        call dword ptr ds : [public_6d641e0]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6d0ed30
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_6d0ed30
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6d64248]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov ebx, dword ptr ss : [esp+0x40]
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6d641dc]
        mov edx, dword ptr ds : [esi+0x28]
        push edx
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d645ac]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x44]
        push ecx
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp]
        call dword ptr ds : [public_6d64708]
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        je public_6d0ec98
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6d0ec9a
        public_6d0ec98 : nop
        xor eax, eax
        public_6d0ec9a : nop
        mov edx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [eax+0xB4]
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        test esi, esi
        jbe public_6d0eceb
        mov edx, dword ptr ds : [public_6d90264]
        lea ecx, ds:[esi-1]
        cmp ecx, edx
        jae public_6d0eceb
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        cmp dword ptr ds : [ecx+edx+0x348], 0
        je public_6d0eceb
        imul esi, 0x418
        lea ecx, ds:[esi+edx]
        cmp dword ptr ds : [ecx-0x34], eax
        jne public_6d0eceb
        push 0
        push ebx
        push ebp
        add ecx, 0xFFFFFBE8
        call public_6d4f100
        public_6d0eceb : nop
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d0ed30
        public_6d0ecf8 : nop
        push edi
        lea ecx, ds:[esi+8]
        call public_6cf73d0
        test al, al
        je public_6d0ed29
        mov eax, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [edi]
        mov ebp, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [public_6d8fb14]
        push eax
        lea eax, ds:[esi+0x40]
        push eax
        call dword ptr ss : [ebp+0x158]
        public_6d0ed29 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0xC]
        jne public_6d0ecf8
        public_6d0ed30 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 0xC
        UNREACHABLE_TRAP(0x6d0ebf0)
    }
}

#undef public_6d0ec98
#undef public_6d0ec9a
#undef public_6d0eceb
#undef public_6d0ecf8
#undef public_6d0ed29
#undef public_6d0ed30
