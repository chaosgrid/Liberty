#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a9a0);
CLANG_FORWARD_PROC_SYMBOL(public_41b380);
CLANG_FORWARD_JUMP_SYMBOL(public_5b89d8);

#define public_41aa37 _public_41aa37

PROC_DECLARE(0x41a9a0, internal_41a9a0, public_41a9a0);
extern "C" NAKED register_t __cdecl internal_41a9a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b89d8 @0x41a9a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b89d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
/*FIXUP push offset public_6166ec @0x41a9b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        call dword ptr ds : [public_5c6f70]
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        call dword ptr ds : [public_5c6d14]
        mov dword ptr ss : [esp+0xC], eax
        or eax, 0xFFFFFFFF
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 1
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+4]
        push edx
        mov ecx, offset public_6166d8
        mov dword ptr ss : [esp+0x30], 0
        call public_41b380
/*FIXUP push offset public_6166ec @0x41aa14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        call dword ptr ds : [public_5c6ee8]
        mov eax, dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp+0x34]
        lea ecx, ds:[eax+0xC]
        mov al, byte ptr ss : [esp+4]
        test al, al
        mov dword ptr ds : [edx], ecx
        jne public_41aa37
        inc dword ptr ds : [ecx+0x14]
        public_41aa37 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x41a9a0)
    }
}

#undef public_41aa37
