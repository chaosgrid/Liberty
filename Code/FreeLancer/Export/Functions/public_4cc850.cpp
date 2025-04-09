#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cc870);
CLANG_FORWARD_PROC_SYMBOL(public_4cd270);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4cc850, internal_4cc850, public_4cc850);
extern "C" NAKED register_t __cdecl internal_4cc850()
{
    __asm
    {
/*FIXUP push offset public_5d7480 @0x4cc850*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7480
        mov ecx, offset public_673578
        call public_4cd270
/*FIXUP push offset _public_4cc870 @0x4cc85f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4cc870
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4cc850)
    }
}
