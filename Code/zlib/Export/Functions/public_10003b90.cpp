#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10003940);
CLANG_FORWARD_PROC_SYMBOL(public_1000a488);

#define public_10003ba5 _public_10003ba5

PROC_DECLARE(0x10003b90, internal_10003b90, public_10003b90);
extern "C" NAKED register_t __cdecl internal_10003b90()
{
    __asm
    {
        sub esp, 0x14
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        test esi, esi
        jge public_10003ba5
        xor eax, eax
        pop esi
        add esp, 0x14
        ret 8
        public_10003ba5 : nop
        push esi
        lea eax, ss:[esp+8]
/*FIXUP push offset public_1000b14c @0x10003baa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_1000b14c
        push eax
        call public_1000a488
        mov eax, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x10]
        push esi
        push ecx
        call public_10003940
        add esp, 0x14
        pop esi
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x10003b90)
    }
}

#undef public_10003ba5
