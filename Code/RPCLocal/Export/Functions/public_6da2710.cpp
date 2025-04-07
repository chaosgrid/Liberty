#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da2740);
CLANG_FORWARD_PROC_SYMBOL(public_6da2aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f78);

PROC_DECLARE(0x6da2710, internal_6da2710, public_6da2710);
extern "C" NAKED register_t __cdecl internal_6da2710()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6dbbf64
        call public_6da2aa0
/*FIXUP push offset _public_6da2740 @0x6da2725*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6da2740
        call public_6db1f78
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6da2710)
    }
}
