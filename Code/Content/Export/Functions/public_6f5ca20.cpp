#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5ca40);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ca60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f5ca20, internal_6f5ca20, public_6f5ca20);
extern "C" NAKED register_t __cdecl internal_6f5ca20()
{
    __asm
    {
        mov ecx, offset public_6fd1bd8
        call public_6f5ca60
/*FIXUP push offset _public_6f5ca40 @0x6f5ca2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f5ca40
        call public_6fa9162
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f5ca20)
    }
}
