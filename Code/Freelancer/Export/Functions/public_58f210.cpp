#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dde0);

PROC_DECLARE(0x58f210, internal_58f210, public_58f210);
extern "C" NAKED register_t __cdecl internal_58f210()
{
    __asm
    {
        push 0
/*FIXUP push offset public_5c95fc @0x58f212*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        call public_41dde0
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x58f210)
    }
}
