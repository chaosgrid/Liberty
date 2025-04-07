#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415f10);
CLANG_FORWARD_PROC_SYMBOL(public_416810);
CLANG_FORWARD_PROC_SYMBOL(public_419410);

PROC_DECLARE(0x415ee0, internal_415ee0, public_415ee0);
extern "C" NAKED register_t __cdecl internal_415ee0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_429da4
        call public_416810
/*FIXUP push offset _public_415f10 @0x415ef5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_415f10
        call public_419410
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x415ee0)
    }
}
