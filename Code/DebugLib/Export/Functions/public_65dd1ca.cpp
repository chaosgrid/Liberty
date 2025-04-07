#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd184);

PROC_DECLARE(0x65dd1ca, internal_65dd1ca, public_65dd1ca);
extern "C" NAKED register_t __cdecl internal_65dd1ca()
{
    __asm
    {
/*FIXUP push offset _public_65dd184 @0x65dd1ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65dd184
        call dword ptr ds : [public_65e10ec]
        mov dword ptr ds : [public_65e63d0], eax
        ret 
        UNREACHABLE_TRAP(0x65dd1ca)
    }
}
