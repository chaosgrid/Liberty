#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d460f0);

#define public_6d4611f _public_6d4611f
#define public_6d46129 _public_6d46129

PROC_DECLARE(0x6d460f0, internal_6d460f0, public_6d460f0);
extern "C" NAKED register_t __cdecl internal_6d460f0()
{
    __asm
    {
        lea eax, ss:[esp-0x104]
        sub esp, 0x104
        push eax
        call dword ptr ds : [public_6d64874]
        add esp, 4
        call dword ptr ds : [public_6d647e8]
        test al, al
        push 0
        je public_6d4611f
/*FIXUP push offset public_6d8d308 @0x6d46113*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d308
        lea ecx, ss:[esp+8]
        push ecx
        jmp public_6d46129
/*FIXUP public_6d4611f : nop
        push offset public_6d8d200 @0x6d4611f*/
  FIXUP public_6d4611f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8d200
        lea edx, ss:[esp+8]
        push edx
        public_6d46129 : nop
        push 0
/*FIXUP push offset public_6d90158 @0x6d4612b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d90158
        call dword ptr ds : [public_6d64bc0]
        add esp, 0x14
        mov eax, offset public_6d90158
        add esp, 0x104
        ret 
        UNREACHABLE_TRAP(0x6d460f0)
    }
}

#undef public_6d4611f
#undef public_6d46129
