#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8c750);
CLANG_FORWARD_PROC_SYMBOL(public_6d8fa90);
CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_JUMP_SYMBOL(public_6db24f8);

#define public_6d8851c _public_6d8851c

PROC_DECLARE(0x6d884a0, internal_6d884a0, public_6d884a0);
extern "C" NAKED register_t __cdecl internal_6d884a0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6db24f8 @0x6d884a8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db24f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        lea eax, ss:[esp+8]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x24
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8851c
        mov dword ptr ss : [esp+4], eax
        mov edx, dword ptr ss : [esp+0x20]
        push 1
        lea ecx, ss:[esp+8]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x20], eax
        call public_6d8c750
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 0xC
        lea eax, ss:[esp+4]
        push eax
        call public_6d8fa90
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_6d91340
        public_6d8851c : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6d884a0)
    }
}

#undef public_6d8851c
