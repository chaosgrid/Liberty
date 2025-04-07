#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6302ce0);
CLANG_FORWARD_PROC_SYMBOL(public_631e6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x631e6c0, internal_631e6c0, public_631e6c0);
extern "C" NAKED register_t __cdecl internal_631e6c0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6401900
        call public_6302ce0
/*FIXUP push offset _public_631e6f0 @0x631e6d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_631e6f0
        call public_6391f9e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x631e6c0)
    }
}
