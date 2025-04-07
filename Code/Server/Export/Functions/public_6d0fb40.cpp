#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d06ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6d06ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f230);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f290);
CLANG_FORWARD_PROC_SYMBOL(public_6d0fb40);
CLANG_FORWARD_PROC_SYMBOL(public_6d10520);
CLANG_FORWARD_PROC_SYMBOL(public_6d10780);
CLANG_FORWARD_PROC_SYMBOL(public_6d112d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d17170);
CLANG_FORWARD_PROC_SYMBOL(public_6d171b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d28880);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d618d1);

#define public_6d0fb82 _public_6d0fb82
#define public_6d0fe1d _public_6d0fe1d

PROC_DECLARE(0x6d0fb40, internal_6d0fb40, public_6d0fb40);
extern "C" NAKED register_t __cdecl internal_6d0fb40()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d618d1 @0x6d0fb48*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d618d1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x210
        push ebx
        push esi
        call dword ptr ds : [public_6d64720]
        mov esi, eax
        xor ebx, ebx
        cmp esi, ebx
        je public_6d0fe1d
        push ebp
        mov ebp, dword ptr ds : [public_6d6471c]
        lea eax, ss:[esp+0x11C]
        push edi
        mov dword ptr ss : [esp+0x18], eax
        public_6d0fb82 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        lea ecx, ss:[esp+0x1C]
        mov edi, eax
        call public_6d06ce0
        push eax
        lea ecx, ss:[esp+0x124]
        mov dword ptr ss : [esp+0x22C], ebx
        mov dword ptr ss : [esp+0x120], edi
        call public_6d10520
        lea eax, ss:[esp+0x11C]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6d8da2c
        mov byte ptr ss : [esp+0x230], 1
        call public_6d10780
        lea ecx, ss:[esp+0x208]
        mov byte ptr ss : [esp+0x228], 0xD
        call public_6d112d0
        lea ecx, ss:[esp+0x1F4]
        mov byte ptr ss : [esp+0x228], 0xC
        call public_6d112d0
        lea ecx, ss:[esp+0x1E0]
        mov byte ptr ss : [esp+0x228], 0xB
        call public_6d112d0
        lea ecx, ss:[esp+0x1CC]
        mov byte ptr ss : [esp+0x228], 0xA
        call public_6d112d0
        lea ecx, ss:[esp+0x1B8]
        mov byte ptr ss : [esp+0x228], 9
        call public_6d112d0
        lea ecx, ss:[esp+0x1A4]
        mov byte ptr ss : [esp+0x228], 8
        call public_6d112d0
        lea ecx, ss:[esp+0x190]
        mov byte ptr ss : [esp+0x228], 7
        call public_6d112d0
        lea ecx, ss:[esp+0x17C]
        mov byte ptr ss : [esp+0x228], 6
        call public_6d112d0
        lea ecx, ss:[esp+0x168]
        mov byte ptr ss : [esp+0x228], 5
        call public_6d112d0
        lea ecx, ss:[esp+0x154]
        mov byte ptr ss : [esp+0x228], 4
        call public_6d112d0
        lea ecx, ss:[esp+0x144]
        mov byte ptr ss : [esp+0x228], 3
        call public_6d0b7e0
        lea ecx, ss:[esp+0x134]
        mov byte ptr ss : [esp+0x228], 2
        call public_6d0f290
        lea ecx, ss:[esp+0x128]
        mov byte ptr ss : [esp+0x228], bl
        call public_6d0f230
        lea ecx, ss:[esp+0x104]
        mov dword ptr ss : [esp+0x228], 0x19
        call public_6d112d0
        lea ecx, ss:[esp+0xF0]
        mov byte ptr ss : [esp+0x228], 0x18
        call public_6d112d0
        lea ecx, ss:[esp+0xDC]
        mov byte ptr ss : [esp+0x228], 0x17
        call public_6d112d0
        lea ecx, ss:[esp+0xC8]
        mov byte ptr ss : [esp+0x228], 0x16
        call public_6d112d0
        lea ecx, ss:[esp+0xB4]
        mov byte ptr ss : [esp+0x228], 0x15
        call public_6d112d0
        lea ecx, ss:[esp+0xA0]
        mov byte ptr ss : [esp+0x228], 0x14
        call public_6d112d0
        lea ecx, ss:[esp+0x8C]
        mov byte ptr ss : [esp+0x228], 0x13
        call public_6d112d0
        lea ecx, ss:[esp+0x78]
        mov byte ptr ss : [esp+0x228], 0x12
        call public_6d112d0
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0x228], 0x11
        call public_6d112d0
        lea ecx, ss:[esp+0x50]
        mov byte ptr ss : [esp+0x228], 0x10
        mov dword ptr ss : [esp+0x50], offset public_6d67d00
        call public_6d17170
        lea ecx, ss:[esp+0x50]
        call public_6d171b0
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x44]
        push edx
        push eax
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x230], 0xF
        call public_6d28880
        mov ecx, dword ptr ss : [esp+0x44]
        push ecx
        call public_6d5ffb0
        add esp, 4
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov byte ptr ss : [esp+0x228], 0xE
        call public_6d0f290
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x228], 0xFFFFFFFF
        call public_6d0f230
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ds:[eax+0x10]
        call public_6d06ea0
        call ebp
        mov esi, eax
        cmp esi, ebx
        jne public_6d0fb82
        pop edi
        pop ebp
        public_6d0fe1d : nop
        mov ecx, dword ptr ss : [esp+0x218]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x21C
        ret 
        UNREACHABLE_TRAP(0x6d0fb40)
    }
}

#undef public_6d0fb82
#undef public_6d0fe1d
