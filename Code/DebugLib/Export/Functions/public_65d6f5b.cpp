#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6f5b);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f67);
CLANG_FORWARD_PROC_SYMBOL(public_65d7753);

PROC_DECLARE(0x65d6f5b, internal_65d6f5b, public_65d6f5b);
/* CHUNK of public_65d6f25 */
extern "C" NAKED register_t __cdecl internal_65d6f5b()
{
    __asm
    {
/*FIXUP push offset _public_65d6f67 @0x65d6f5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65d6f67
        call public_65d7753
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65d6f5b)
    }
}
