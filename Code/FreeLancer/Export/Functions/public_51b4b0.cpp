#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a420);
CLANG_FORWARD_PROC_SYMBOL(public_422610);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_51b4b0);
CLANG_FORWARD_PROC_SYMBOL(public_51b500);

#define public_51b4d6 _public_51b4d6

PROC_DECLARE(0x51b4b0, internal_51b4b0, public_51b4b0);
extern "C" NAKED register_t __cdecl internal_51b4b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_42d680
        push ecx
        fstp dword ptr ss : [esp]
        push esi
        call public_41a420
        mov al, byte ptr ds : [esi+0xE8]
        add esp, 8
        test al, 3
        je public_51b4d6
        mov ecx, esi
        call public_51b500
        public_51b4d6 : nop
        push 0x85
/*FIXUP push offset public_5dbfe8 @0x51b4db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbfe8
        push esi
        call public_422610
        push esi
        call public_422950
        add esp, 0x10
        pop esi
        ret 
        UNREACHABLE_TRAP(0x51b4b0)
    }
}

#undef public_51b4d6
