#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630bc30);
CLANG_FORWARD_PROC_SYMBOL(public_630c140);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x630bc00, internal_630bc00, public_630bc00);
extern "C" NAKED register_t __cdecl internal_630bc00()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_63fcf3c
        call public_630c140
/*FIXUP push offset _public_630bc30 @0x630bc15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_630bc30
        call public_6391f9e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x630bc00)
    }
}
