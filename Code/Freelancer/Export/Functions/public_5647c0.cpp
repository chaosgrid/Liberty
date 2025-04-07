#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5647e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5647c0, internal_5647c0, public_5647c0);
extern "C" NAKED register_t __cdecl internal_5647c0()
{
    __asm
    {
        xor eax, eax
/*FIXUP push offset _public_5647e0 @0x5647c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5647e0
        mov dword ptr ds : [public_67a570], eax
        mov dword ptr ds : [public_67a568], eax
        mov dword ptr ds : [public_67a56c], eax
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5647c0)
    }
}
