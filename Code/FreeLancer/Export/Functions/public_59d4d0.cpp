#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d4f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x59d4d0, internal_59d4d0, public_59d4d0);
extern "C" NAKED register_t __cdecl internal_59d4d0()
{
    __asm
    {
        xor eax, eax
/*FIXUP push offset _public_59d4f0 @0x59d4d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59d4f0
        mov dword ptr ds : [public_67dbd8], eax
        mov dword ptr ds : [public_67dbe0], eax
        mov dword ptr ds : [public_67dbdc], eax
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x59d4d0)
    }
}
