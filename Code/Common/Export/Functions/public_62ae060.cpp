#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ae080);
CLANG_FORWARD_PROC_SYMBOL(public_62ae130);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62ae060, internal_62ae060, public_62ae060);
extern "C" NAKED register_t __cdecl internal_62ae060()
{
    __asm
    {
        call public_62ae080
/*FIXUP push offset _public_62ae130 @0x62ae065*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ae130
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ae060)
    }
}
