#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59c200);
CLANG_FORWARD_PROC_SYMBOL(public_59c360);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x59c1e0, internal_59c1e0, public_59c1e0);
extern "C" NAKED register_t __cdecl internal_59c1e0()
{
    __asm
    {
/*FIXUP push offset public_5e551c @0x59c1e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e551c
        mov ecx, offset public_67db70
        call public_59c360
/*FIXUP push offset _public_59c200 @0x59c1ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59c200
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x59c1e0)
    }
}
