#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320080);
CLANG_FORWARD_PROC_SYMBOL(public_6320110);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x6320060, internal_6320060, public_6320060);
extern "C" NAKED register_t __cdecl internal_6320060()
{
    __asm
    {
        call public_6320080
/*FIXUP push offset _public_6320110 @0x6320065*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6320110
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6320060)
    }
}
