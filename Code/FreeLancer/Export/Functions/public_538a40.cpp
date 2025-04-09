#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_538a60);
CLANG_FORWARD_PROC_SYMBOL(public_538a70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x538a40, internal_538a40, public_538a40);
extern "C" NAKED register_t __cdecl internal_538a40()
{
    __asm
    {
        mov ecx, offset public_675558
        call public_538a70
/*FIXUP push offset _public_538a60 @0x538a4a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_538a60
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x538a40)
    }
}
