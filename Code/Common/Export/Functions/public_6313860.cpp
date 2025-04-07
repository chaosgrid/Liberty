#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6313880);
CLANG_FORWARD_PROC_SYMBOL(public_6313890);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x6313860, internal_6313860, public_6313860);
extern "C" NAKED register_t __cdecl internal_6313860()
{
    __asm
    {
        mov ecx, offset public_64012e0
        call public_6313890
/*FIXUP push offset _public_6313880 @0x631386a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6313880
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6313860)
    }
}
