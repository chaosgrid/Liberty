#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4eba0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ebd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ec10);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ec60);

PROC_DECLARE(0x6f4eba0, internal_6f4eba0, public_6f4eba0);
extern "C" NAKED register_t __cdecl internal_6f4eba0()
{
    __asm
    {
/*FIXUP push offset _public_6f4ec60 @0x6f4eba0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f4ec60
        call public_6f4c7b0
        call public_6f4ec10
        call public_6f4ebd0
/*FIXUP push offset _public_6f4ec60 @0x6f4ebb4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f4ec60
        call public_6f4e3d0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f4eba0)
    }
}
