#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62882e0);
CLANG_FORWARD_PROC_SYMBOL(public_628eb40);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62882b0, internal_62882b0, public_62882b0);
extern "C" NAKED register_t __cdecl internal_62882b0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_63fc098
        call public_628eb40
/*FIXUP push offset _public_62882e0 @0x62882c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62882e0
        call public_6391f9e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62882b0)
    }
}
