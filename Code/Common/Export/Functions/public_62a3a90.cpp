#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a3ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6311d40);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62a3a90, internal_62a3a90, public_62a3a90);
extern "C" NAKED register_t __cdecl internal_62a3a90()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_63fc294
        call public_6311d40
/*FIXUP push offset _public_62a3ac0 @0x62a3aa5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a3ac0
        call public_6391f9e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62a3a90)
    }
}
