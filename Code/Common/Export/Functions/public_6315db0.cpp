#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63159e0);
CLANG_FORWARD_PROC_SYMBOL(public_6315a50);
CLANG_FORWARD_PROC_SYMBOL(public_6315db0);
CLANG_FORWARD_PROC_SYMBOL(public_6316770);
CLANG_FORWARD_PROC_SYMBOL(public_6318130);
CLANG_FORWARD_PROC_SYMBOL(public_6318650);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63967a2);

#define public_6315f43 _public_6315f43
#define public_6315f6a _public_6315f6a

PROC_DECLARE(0x6315db0, internal_6315db0, public_6315db0);
extern "C" NAKED register_t __cdecl internal_6315db0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63967a2 @0x6315db2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63967a2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xB4
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6333e40
        mov al, byte ptr ss : [esp+6]
        push 0
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1C], al
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+6]
        push ecx
        push 0
        lea edx, ss:[esp+0xF]
        push edx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0xCC], 0
        call public_6316770
        lea eax, ss:[esp+5]
        push eax
        lea ecx, ss:[esp+9]
        push ecx
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0xC8], 1
        call public_63159e0
        lea edx, ss:[esp+5]
        push edx
        lea eax, ss:[esp+9]
        push eax
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0xC8], 2
        call public_63159e0
        mov ecx, dword ptr ss : [esp+0xC8]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0xC4], 3
        mov dword ptr ss : [esp+0x68], edx
        call public_6318130
        lea ecx, ss:[esp+0x64]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0xC8], 4
        call public_6318650
        lea eax, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ss:[esp+0xA4]
        mov byte ptr ss : [esp+0xC0], 7
        call public_6315a50
        lea ecx, ss:[esp+0x90]
        mov byte ptr ss : [esp+0xC0], 6
        call public_6315a50
        lea ecx, ss:[esp+0x7C]
        mov byte ptr ss : [esp+0xC0], 5
        call public_6315a50
        push 1
        lea ecx, ss:[esp+0x70]
        mov byte ptr ss : [esp+0xC4], 3
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0xC0], 0xA
        call public_6315a50
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0xC0], 9
        call public_6315a50
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0xC0], 8
        call public_6315a50
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        pop esi
        je public_6315f6a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6315f43
        cmp cl, 0xFF
        je public_6315f43
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+4]
        lea eax, ds:[ecx+0x10]
        mov ecx, dword ptr ss : [esp+0xB4]
        mov dword ptr fs : [0], ecx
        add esp, 0xC0
        ret 4
        public_6315f43 : nop
        push eax
        call public_6391d5a
        mov edx, dword ptr ss : [esp+8]
        add esp, 4
        lea eax, ds:[edx+0x10]
        mov ecx, dword ptr ss : [esp+0xB4]
        mov dword ptr fs : [0], ecx
        add esp, 0xC0
        ret 4
        public_6315f6a : nop
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xB4]
        add eax, 0x10
        mov dword ptr fs : [0], ecx
        add esp, 0xC0
        ret 4
        UNREACHABLE_TRAP(0x6315db0)
    }
}

#undef public_6315f43
#undef public_6315f6a
