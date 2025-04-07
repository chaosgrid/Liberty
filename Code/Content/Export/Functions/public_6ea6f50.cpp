#include "Content-PCH.h"

CLANG_FORWARD_JUMP_SYMBOL(public_6fa98bb);

#define public_6ea6fc4 _public_6ea6fc4

PROC_DECLARE(0x6ea6f50, internal_6ea6f50, public_6ea6f50);
extern "C" NAKED register_t __cdecl internal_6ea6f50()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fa98bb @0x6ea6f58*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa98bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], esp
        sub esp, 0x10C
        cmp eax, 7
        jne public_6ea6fc4
        mov dword ptr ss : [esp], offset public_6fb439c
        mov eax, dword ptr ss : [esp+0x120]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_6fcf3a4]
        push 0x104
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        mov dword ptr ss : [esp+0x120], 0
        mov dword ptr ss : [esp+0x10], ecx
        call dword ptr ds : [public_6fb32a4]
        push 2
        lea ecx, ss:[esp+4]
        push ecx
        lea edx, ss:[esp+0x10]
/*FIXUP push offset public_6fb4258 @0x6ea6fb5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4258
        push edx
        call dword ptr ds : [public_6fb3614]
        add esp, 0x10
        public_6ea6fc4 : nop
        mov ecx, dword ptr ss : [esp+0x10C]
        mov dword ptr fs : [0], ecx
        add esp, 0x118
        ret 8
        UNREACHABLE_TRAP(0x6ea6f50)
    }
}

#undef public_6ea6fc4
