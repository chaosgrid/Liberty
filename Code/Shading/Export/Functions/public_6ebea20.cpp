#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebea20);
CLANG_FORWARD_PROC_SYMBOL(public_6ebea30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ccb);

PROC_DECLARE(0x6ebea20, internal_6ebea20, public_6ebea20);
/* CHUNK of public_6ebe9f0 */
extern "C" NAKED register_t __cdecl internal_6ebea20()
{
    __asm
    {
/*FIXUP push offset _public_6ebea30 @0x6ebea20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ebea30
        call public_6ed0ccb
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ebea20)
    }
}
