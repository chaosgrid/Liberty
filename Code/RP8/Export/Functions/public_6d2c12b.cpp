#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2c12b);
CLANG_FORWARD_PROC_SYMBOL(public_6d2c13d);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f32a);

PROC_DECLARE(0x6d2c12b, internal_6d2c12b, public_6d2c12b);
extern "C" NAKED register_t __cdecl internal_6d2c12b()
{
    __asm
    {
        push ebp
        mov ebp, esp
/*FIXUP push offset _public_6d2c13d @0x6d2c12e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d2c13d
        call public_6d2f32a
        add esp, 4
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2c12b)
    }
}
