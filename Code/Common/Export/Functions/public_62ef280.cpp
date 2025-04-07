#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ef2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6302ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62ef280, internal_62ef280, public_62ef280);
extern "C" NAKED register_t __cdecl internal_62ef280()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_63fcb0c
        call public_6302ce0
/*FIXUP push offset _public_62ef2b0 @0x62ef295*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62ef2b0
        call public_6391f9e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62ef280)
    }
}
