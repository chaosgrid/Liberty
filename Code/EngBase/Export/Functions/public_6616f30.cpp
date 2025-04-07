#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6614020);
CLANG_FORWARD_PROC_SYMBOL(public_6619240);
CLANG_FORWARD_PROC_SYMBOL(public_661a1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6627050);

#define public_6616f57 _public_6616f57
#define public_6616f69 _public_6616f69
#define public_6616f6c _public_6616f6c
#define public_6616f70 _public_6616f70
#define public_6616f9a _public_6616f9a
#define public_6616fde _public_6616fde
#define public_6616feb _public_6616feb
#define public_6617017 _public_6617017
#define public_6617026 _public_6617026
#define public_6617041 _public_6617041

PROC_DECLARE(0x6616f30, internal_6616f30, public_6616f30);
extern "C" NAKED register_t __cdecl internal_6616f30()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        sub esp, 0x20
        cmp edx, 0xFFFFFFFF
        push esi
        push edi
        je public_6617041
        mov edi, dword ptr ds : [public_662acc8]
        mov ecx, dword ptr ds : [public_662accc]
        mov al, 1
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ecx
        je public_6616f70
        public_6616f57 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov edi, esi
        cmp edx, eax
        setl al
        test al, al
        je public_6616f69
        mov esi, dword ptr ds : [esi]
        jmp public_6616f6c
        public_6616f69 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6616f6c : nop
        cmp esi, ecx
        jne public_6616f57
        public_6616f70 : nop
        mov cl, byte ptr ds : [public_662acd0]
        test cl, cl
        je public_6616f9a
        lea eax, ss:[esp+0x30]
        lea ecx, ss:[esp+0x10]
        push eax
        push edi
        push esi
        push ecx
        mov ecx, offset public_662acc4
        call public_6619240
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x20
        ret 8
        public_6616f9a : nop
        test al, al
        mov dword ptr ss : [esp+0xC], edi
        je public_6616feb
        lea edx, ss:[esp+0x14]
        mov ecx, offset public_662acc4
        push edx
        call public_6627050
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, edx
        jne public_6616fde
        lea edx, ss:[esp+9]
        lea eax, ss:[esp+0x30]
        push edx
        push eax
        push edi
        lea ecx, ss:[esp+0x24]
        push esi
        push ecx
        mov ecx, offset public_662acc4
        mov byte ptr ss : [esp+0x1D], 1
        call public_6619240
        push eax
        jmp public_6617026
        public_6616fde : nop
        lea ecx, ss:[esp+0xC]
        call public_661a1e0
        mov edx, dword ptr ss : [esp+0x30]
        public_6616feb : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [eax+0xC], edx
        jge public_6617017
        lea ecx, ss:[esp+0xA]
        lea edx, ss:[esp+0x30]
        push ecx
        push edx
        push edi
        lea eax, ss:[esp+0x28]
        push esi
        push eax
        mov ecx, offset public_662acc4
        mov byte ptr ss : [esp+0x1E], 1
        call public_6619240
        push eax
        jmp public_6617026
        public_6617017 : nop
        lea ecx, ss:[esp+0xB]
        lea edx, ss:[esp+0xC]
        push ecx
        mov byte ptr ss : [esp+0xF], 0
        push edx
        public_6617026 : nop
        lea ecx, ss:[esp+0x28]
        call public_6614020
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        je public_6617041
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x20
        ret 8
        public_6617041 : nop
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6616f30)
    }
}

#undef public_6616f57
#undef public_6616f69
#undef public_6616f6c
#undef public_6616f70
#undef public_6616f9a
#undef public_6616fde
#undef public_6616feb
#undef public_6617017
#undef public_6617026
#undef public_6617041
