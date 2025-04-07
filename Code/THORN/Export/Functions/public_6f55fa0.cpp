#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f510);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f630);

#define public_6f55fd6 _public_6f55fd6

PROC_DECLARE(0x6f55fa0, internal_6f55fa0, public_6f55fa0);
extern "C" NAKED register_t __cdecl internal_6f55fa0()
{
    __asm
    {
        push esi
/*FIXUP push offset public_6f616dc @0x6f55fa1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f616dc
        push 0
/*FIXUP push offset public_6f61868 @0x6f55fa8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61868
        push 2
        call public_6f4f630
        add esp, 0xC
        push eax
        call public_6f4f510
        mov esi, eax
        add esp, 8
        cmp esi, 0xFFFFFFFF
        jne public_6f55fd6
/*FIXUP push offset public_6f61960 @0x6f55fc7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61960
        push 2
        call public_6f4f570
        add esp, 8
        public_6f55fd6 : nop
        push 0
        push 1
        call public_6f4f5e0
        push eax
        mov eax, dword ptr ds : [esi*4+public_6f616c4]
        push eax
        call dword ptr ds : [public_6f5a130]
        push eax
        call public_6f4b790
        add esp, 0x14
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f55fa0)
    }
}

#undef public_6f55fd6
