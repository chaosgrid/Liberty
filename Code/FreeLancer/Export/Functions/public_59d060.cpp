#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d080);
CLANG_FORWARD_PROC_SYMBOL(public_59d400);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x59d060, internal_59d060, public_59d060);
extern "C" NAKED register_t __cdecl internal_59d060()
{
    __asm
    {
        mov ecx, offset public_67dbf0
        call public_59d080
/*FIXUP push offset _public_59d400 @0x59d06a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59d400
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x59d060)
    }
}
