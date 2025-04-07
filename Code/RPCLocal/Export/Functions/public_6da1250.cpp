#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1280);
CLANG_FORWARD_PROC_SYMBOL(public_6da16c0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f78);

PROC_DECLARE(0x6da1250, internal_6da1250, public_6da1250);
extern "C" NAKED register_t __cdecl internal_6da1250()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6dbbf4c
        call public_6da16c0
/*FIXUP push offset _public_6da1280 @0x6da1265*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6da1280
        call public_6db1f78
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6da1250)
    }
}
