#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e08a0);
CLANG_FORWARD_PROC_SYMBOL(public_4e5680);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4e0880, internal_4e0880, public_4e0880);
extern "C" NAKED register_t __cdecl internal_4e0880()
{
    __asm
    {
/*FIXUP push offset public_5d8878 @0x4e0880*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8878
        mov ecx, offset public_674aa8
        call public_4e5680
/*FIXUP push offset _public_4e08a0 @0x4e088f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4e08a0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4e0880)
    }
}
