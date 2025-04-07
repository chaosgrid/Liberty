#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63416b0);
CLANG_FORWARD_PROC_SYMBOL(public_6341ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x6341680, internal_6341680, public_6341680);
extern "C" NAKED register_t __cdecl internal_6341680()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_658a9c0
        call public_6341ce0
/*FIXUP push offset _public_63416b0 @0x6341695*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_63416b0
        call public_6391f9e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6341680)
    }
}
