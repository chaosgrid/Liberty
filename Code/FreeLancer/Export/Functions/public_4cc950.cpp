#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cc970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4cc950, internal_4cc950, public_4cc950);
extern "C" NAKED register_t __cdecl internal_4cc950()
{
    __asm
    {
/*FIXUP push offset _public_4cc970 @0x4cc950*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4cc970
        mov dword ptr ds : [public_673574], 0xFFFFFFFF
        mov dword ptr ds : [public_673570], 0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4cc950)
    }
}
