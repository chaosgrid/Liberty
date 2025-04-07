#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ac2);
CLANG_FORWARD_PROC_SYMBOL(public_418ac8);
CLANG_FORWARD_PROC_SYMBOL(public_418ace);
CLANG_FORWARD_PROC_SYMBOL(public_418ad4);
CLANG_FORWARD_PROC_SYMBOL(public_418ada);
CLANG_FORWARD_JUMP_SYMBOL(public_41a798);

#define public_412b13 _public_412b13

PROC_DECLARE(0x412a70, internal_412a70, public_412a70);
extern "C" NAKED register_t __cdecl internal_412a70()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_41a798 @0x412a78*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a798
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x48
        cmp eax, 0x410
        push esi
        mov esi, ecx
        jne public_412b13
        lea ecx, ss:[esp+4]
        call public_418ada
        push 0
        mov dword ptr ss : [esp+0x58], 0
        call dword ptr ds : [public_41b120]
        push eax
        lea ecx, ss:[esp+8]
        call public_418ad4
        add esi, 0x1E4
        push esi
        lea ecx, ss:[esp+8]
        call public_418ace
        mov ecx, dword ptr ss : [esp+0xC]
        mov esi, eax
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        call dword ptr ds : [public_41b124]
        push esi
        lea ecx, ss:[esp+8]
        call public_418ace
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+4]
        mov dword ptr ds : [edx+0x10], eax
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_418ac8
        pop esi
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 8
        public_412b13 : nop
        mov ecx, dword ptr ss : [esp+0x60]
        push ecx
        push eax
        mov ecx, esi
        call public_418ac2
        mov ecx, dword ptr ss : [esp+0x4C]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x54
        ret 8
        UNREACHABLE_TRAP(0x412a70)
    }
}

#undef public_412b13
