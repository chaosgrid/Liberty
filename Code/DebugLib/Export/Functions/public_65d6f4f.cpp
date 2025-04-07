#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d54f0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f4f);
CLANG_FORWARD_PROC_SYMBOL(public_65d7753);

PROC_DECLARE(0x65d6f4f, internal_65d6f4f, public_65d6f4f);
extern "C" NAKED register_t __cdecl internal_65d6f4f()
{
    __asm
    {
/*FIXUP push offset _public_65d54f0 @0x65d6f4f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65d54f0
        call public_65d7753
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65d6f4f)
    }
}
