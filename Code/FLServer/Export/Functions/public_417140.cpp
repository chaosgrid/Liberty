#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417170);
CLANG_FORWARD_PROC_SYMBOL(public_417760);
CLANG_FORWARD_PROC_SYMBOL(public_419410);

PROC_DECLARE(0x417140, internal_417140, public_417140);
extern "C" NAKED register_t __cdecl internal_417140()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_429ddc
        call public_417760
/*FIXUP push offset _public_417170 @0x417155*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_417170
        call public_419410
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x417140)
    }
}
