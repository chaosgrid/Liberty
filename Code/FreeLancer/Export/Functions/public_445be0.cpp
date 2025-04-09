#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_4be390);
CLANG_FORWARD_PROC_SYMBOL(public_59e6a0);

#define public_445c07 _public_445c07

PROC_DECLARE(0x445be0, internal_445be0, public_445be0);
extern "C" NAKED register_t __cdecl internal_445be0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_59e6a0
        test al, al
        jne public_445c07
        push 0
/*FIXUP push offset public_5cb128 @0x445bee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb128
        call public_41dde0
        add esp, 8
        mov byte ptr ds : [esi+0x2F8], 0
        call public_4be390
        public_445c07 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x445be0)
    }
}

#undef public_445c07
