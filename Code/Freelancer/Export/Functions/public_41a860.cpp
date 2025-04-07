#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a880);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x41a860, internal_41a860, public_41a860);
extern "C" NAKED register_t __cdecl internal_41a860()
{
    __asm
    {
/*FIXUP push offset public_6166ec @0x41a860*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6166ec
        call dword ptr ds : [public_5c6ef0]
/*FIXUP push offset _public_41a880 @0x41a86b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_41a880
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x41a860)
    }
}
