#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ee40);
CLANG_FORWARD_PROC_SYMBOL(public_4706b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x46ee10, internal_46ee10, public_46ee10);
extern "C" NAKED register_t __cdecl internal_46ee10()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_66daa4
        call public_4706b0
/*FIXUP push offset _public_46ee40 @0x46ee25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_46ee40
        call public_5b7e6c
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x46ee10)
    }
}
