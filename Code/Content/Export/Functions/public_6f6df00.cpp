#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f6df00);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fafe48);

#define public_6f6df3c _public_6f6df3c
#define public_6f6df84 _public_6f6df84
#define public_6f6dfad _public_6f6dfad
#define public_6f6dfc8 _public_6f6dfc8

PROC_DECLARE(0x6f6df00, internal_6f6df00, public_6f6df00);
extern "C" NAKED register_t __cdecl internal_6f6df00()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fafe48 @0x6f6df08*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fafe48
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        lea eax, ss:[esp+0x24]
        push esi
        push eax
        call public_6f49bc0
        add esp, 4
        test eax, eax
        je public_6f6df3c
        mov al, 1
        pop esi
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_6f6df3c : nop
        mov cl, byte ptr ss : [esp+0x28]
        xor eax, eax
        mov byte ptr ss : [esp+4], cl
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], eax
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        call public_6f73930
        mov eax, dword ptr ds : [eax+0x154]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        call public_6f66220
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 8
        cmp esi, eax
        je public_6f6dfad
        public_6f6df84 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx+4]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov dword ptr ss : [esp+0x28], eax
        call public_6f49bc0
        add esp, 4
        test eax, eax
        jne public_6f6dfc8
        mov eax, dword ptr ss : [esp+0xC]
        add esi, 4
        cmp esi, eax
        jne public_6f6df84
        mov esi, dword ptr ss : [esp+8]
        public_6f6dfad : nop
        push esi
        call public_6fa8fe0
        add esp, 4
        xor al, al
        pop esi
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_6f6dfc8 : nop
        mov edx, dword ptr ss : [esp+8]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov al, 1
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f6df00)
    }
}

#undef public_6f6df3c
#undef public_6f6df84
#undef public_6f6dfad
#undef public_6f6dfc8
