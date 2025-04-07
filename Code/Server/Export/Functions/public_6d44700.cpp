#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3730);
CLANG_FORWARD_PROC_SYMBOL(public_6d44730);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6d44700, internal_6d44700, public_6d44700);
extern "C" NAKED register_t __cdecl internal_6d44700()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6d8fad8
        call public_6ce3730
/*FIXUP push offset _public_6d44730 @0x6d44715*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d44730
        call public_6d6013e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d44700)
    }
}
