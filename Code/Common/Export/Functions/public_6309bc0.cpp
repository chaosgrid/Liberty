#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6333ca0);

PROC_DECLARE(0x6309bc0, internal_6309bc0, public_6309bc0);
extern "C" NAKED register_t __cdecl internal_6309bc0()
{
    __asm
    {
        push 0
/*FIXUP push offset public_63a347c @0x6309bc2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a347c
        call public_6333ca0
        add esp, 8
        mov dword ptr ds : [public_63fcf0c], eax
        ret 
        UNREACHABLE_TRAP(0x6309bc0)
    }
}
