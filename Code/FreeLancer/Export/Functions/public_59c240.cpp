#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59c260);
CLANG_FORWARD_PROC_SYMBOL(public_59c680);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x59c240, internal_59c240, public_59c240);
extern "C" NAKED register_t __cdecl internal_59c240()
{
    __asm
    {
/*FIXUP push offset public_5e54b4 @0x59c240*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e54b4
        mov ecx, offset public_67db18
        call public_59c680
/*FIXUP push offset _public_59c260 @0x59c24f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59c260
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x59c240)
    }
}
