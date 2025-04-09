#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d5bc0);
CLANG_FORWARD_PROC_SYMBOL(public_4d6180);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4d5ba0, internal_4d5ba0, public_4d5ba0);
extern "C" NAKED register_t __cdecl internal_4d5ba0()
{
    __asm
    {
/*FIXUP push offset public_5d7e9c @0x4d5ba0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7e9c
        mov ecx, offset public_674998
        call public_4d6180
/*FIXUP push offset _public_4d5bc0 @0x4d5baf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4d5bc0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4d5ba0)
    }
}
