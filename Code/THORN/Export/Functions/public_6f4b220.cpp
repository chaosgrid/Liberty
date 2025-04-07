#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b220);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b370);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b3b0);

PROC_DECLARE(0x6f4b220, internal_6f4b220, public_6f4b220);
extern "C" NAKED register_t __cdecl internal_6f4b220()
{
    __asm
    {
        push esi
        push 1
        call public_6f4aff0
/*FIXUP push offset public_6f603a4 @0x6f4b228*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f603a4
        call public_6f4b370
/*FIXUP push offset public_6f603a4 @0x6f4b232*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f603a4
        mov esi, eax
        call public_6f4b3b0
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4b220)
    }
}
