#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b390);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b520);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);

#define public_6f4febd _public_6f4febd

PROC_DECLARE(0x6f4fe70, internal_6f4fe70, public_6f4fe70);
extern "C" NAKED register_t __cdecl internal_6f4fe70()
{
    __asm
    {
        sub esp, 0x258
        push esi
/*FIXUP push offset public_6f60d08 @0x6f4fe77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60d08
        call public_6f4b390
        mov esi, eax
        push esi
        call public_6f4b520
        add esp, 8
        test eax, eax
        je public_6f4febd
        push 0
        push 1
        call public_6f4f5e0
        push eax
        lea eax, ss:[esp+0x10]
/*FIXUP push offset public_6f60d10 @0x6f4fe9e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f60d10
        push eax
        call dword ptr ds : [public_6f5a06c]
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_6f4b790
        push esi
        call public_6f4b0b0
        add esp, 0x1C
        public_6f4febd : nop
        pop esi
        add esp, 0x258
        ret 
        UNREACHABLE_TRAP(0x6f4fe70)
    }
}

#undef public_6f4febd
