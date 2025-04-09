#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f3ae0);
CLANG_FORWARD_PROC_SYMBOL(public_4f4d30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4f3ac0, internal_4f3ac0, public_4f3ac0);
extern "C" NAKED register_t __cdecl internal_4f3ac0()
{
    __asm
    {
/*FIXUP push offset public_5d969c @0x4f3ac0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d969c
        mov ecx, offset public_674b88
        call public_4f4d30
/*FIXUP push offset _public_4f3ae0 @0x4f3acf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4f3ae0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4f3ac0)
    }
}
