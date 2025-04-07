#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6302870);
CLANG_FORWARD_PROC_SYMBOL(public_6302ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x6302840, internal_6302840, public_6302840);
extern "C" NAKED register_t __cdecl internal_6302840()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_63fcc58
        call public_6302ce0
/*FIXUP push offset _public_6302870 @0x6302855*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6302870
        call public_6391f9e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6302840)
    }
}
