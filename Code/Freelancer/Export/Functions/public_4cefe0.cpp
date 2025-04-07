#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cf000);
CLANG_FORWARD_PROC_SYMBOL(public_4d4630);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4cefe0, internal_4cefe0, public_4cefe0);
extern "C" NAKED register_t __cdecl internal_4cefe0()
{
    __asm
    {
/*FIXUP push offset public_5d796c @0x4cefe0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d796c
        mov ecx, offset public_674910
        call public_4d4630
/*FIXUP push offset _public_4cf000 @0x4cefef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4cf000
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4cefe0)
    }
}
