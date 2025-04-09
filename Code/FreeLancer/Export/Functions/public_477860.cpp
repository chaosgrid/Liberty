#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_477880);
CLANG_FORWARD_PROC_SYMBOL(public_485670);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x477860, internal_477860, public_477860);
extern "C" NAKED register_t __cdecl internal_477860()
{
    __asm
    {
/*FIXUP push offset public_5caf68 @0x477860*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caf68
        mov ecx, offset public_671ca8
        call public_485670
/*FIXUP push offset _public_477880 @0x47786f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_477880
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x477860)
    }
}
