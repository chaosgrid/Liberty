#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55ba0);

#define public_6f55bdb _public_6f55bdb

PROC_DECLARE(0x6f55ba0, internal_6f55ba0, public_6f55ba0);
extern "C" NAKED register_t __cdecl internal_6f55ba0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 8
        lea eax, ss:[esp]
        push eax
/*FIXUP push offset public_6f61930 @0x6f55bac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61930
        push ecx
        call dword ptr ds : [public_6f5a0f4]
        add esp, 0xC
        cmp eax, 1
        jne public_6f55bdb
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp]
        push edx
        push eax
        call public_6f4b6f0
        add esp, 8
        mov eax, 1
        add esp, 8
        ret 
        public_6f55bdb : nop
        xor eax, eax
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f55ba0)
    }
}

#undef public_6f55bdb
