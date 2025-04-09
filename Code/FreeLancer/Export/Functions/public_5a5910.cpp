#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a54e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a5910);

PROC_DECLARE(0x5a5910, internal_5a5910, public_5a5910);
extern "C" NAKED register_t __cdecl internal_5a5910()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push 0x80
        push eax
/*FIXUP push offset public_67e670 @0x5a591a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67e670
        call dword ptr ds : [public_5c71c0]
        add esp, 0xC
/*FIXUP push offset _public_5a54e0 @0x5a5928*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5a54e0
        mov word ptr ds : [public_67e76e], 0
        call dword ptr ds : [public_5c6f44]
        ret 
        UNREACHABLE_TRAP(0x5a5910)
    }
}
