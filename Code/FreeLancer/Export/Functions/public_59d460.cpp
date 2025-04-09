#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d480);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x59d460, internal_59d460, public_59d460);
extern "C" NAKED register_t __cdecl internal_59d460()
{
    __asm
    {
        xor eax, eax
/*FIXUP push offset _public_59d480 @0x59d462*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59d480
        mov dword ptr ds : [public_67dbe4], eax
        mov dword ptr ds : [public_67dbec], eax
        mov dword ptr ds : [public_67dbe8], eax
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x59d460)
    }
}
