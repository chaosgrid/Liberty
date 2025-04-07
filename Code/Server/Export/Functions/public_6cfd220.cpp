#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfd240);
CLANG_FORWARD_PROC_SYMBOL(public_6cfd320);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6cfd220, internal_6cfd220, public_6cfd220);
extern "C" NAKED register_t __cdecl internal_6cfd220()
{
    __asm
    {
        mov ecx, offset public_6d8d870
        call public_6cfd320
/*FIXUP push offset _public_6cfd240 @0x6cfd22a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6cfd240
        call public_6d6013e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6cfd220)
    }
}
