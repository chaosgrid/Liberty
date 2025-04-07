#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5740);
CLANG_FORWARD_PROC_SYMBOL(public_65c57a0);
CLANG_FORWARD_PROC_SYMBOL(public_65c6aac);

PROC_DECLARE(0x65c5720, internal_65c5720, public_65c5720);
extern "C" NAKED register_t __cdecl internal_65c5720()
{
    __asm
    {
        mov ecx, offset public_65ca2a0
        call public_65c57a0
/*FIXUP push offset _public_65c5740 @0x65c572a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65c5740
        call public_65c6aac
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65c5720)
    }
}
