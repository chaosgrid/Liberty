#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4be390);
CLANG_FORWARD_PROC_SYMBOL(public_54bcb0);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_4e4b65 _public_4e4b65
#define public_4e4b67 _public_4e4b67
#define public_4e4b88 _public_4e4b88

PROC_DECLARE(0x4e4af0, internal_4e4af0, public_4e4af0);
extern "C" NAKED register_t __cdecl internal_4e4af0()
{
    __asm
    {
        sub esp, 0x28
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x34]
        cmp dword ptr ds : [edi], 0xFFFFFFFF
        mov esi, ecx
        jne public_4e4b88
        call public_4be390
        mov ax, word ptr ds : [esi+0x37C]
        mov ecx, dword ptr ds : [public_5c6368]
        cmp ax, word ptr ds : [ecx]
        je public_4e4b88
        cmp dword ptr ds : [edi+4], 2
        jne public_4e4b88
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_4e4b88
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e4b88
        push 0x18
        call public_5645c0
        xor eax, eax
        mov ecx, 0xA
        lea edi, ss:[esp+0xC]
        rep stosd
        mov eax, dword ptr ds : [esi+0x360]
        add esp, 4
        test eax, eax
        mov byte ptr ss : [esp+0x2E], 1
        mov dword ptr ss : [esp+8], 0x1C
        je public_4e4b65
        lea ecx, ds:[eax-8]
        jmp public_4e4b67
        public_4e4b65 : nop
        xor ecx, ecx
        public_4e4b67 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x18], eax
        movzx eax, word ptr ds : [esi+0x37C]
        lea ecx, ss:[esp+8]
        push ecx
        mov dword ptr ss : [esp+0x20], eax
        call public_54bcb0
        add esp, 4
        public_4e4b88 : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x4e4af0)
    }
}

#undef public_4e4b65
#undef public_4e4b67
#undef public_4e4b88
