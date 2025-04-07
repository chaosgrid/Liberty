#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d050a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b240);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6d5b210, internal_6d5b210, public_6d5b210);
extern "C" NAKED register_t __cdecl internal_6d5b210()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6d90400
        call public_6d050a0
/*FIXUP push offset _public_6d5b240 @0x6d5b225*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d5b240
        call public_6d6013e
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d5b210)
    }
}
