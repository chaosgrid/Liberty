#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62df430);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x62df410, internal_62df410, public_62df410);
extern "C" NAKED register_t __cdecl internal_62df410()
{
    __asm
    {
        xor eax, eax
/*FIXUP push offset _public_62df430 @0x62df412*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62df430
        mov dword ptr ds : [public_63fca18], eax
        mov dword ptr ds : [public_63fca1c], eax
        call public_6391f9e
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62df410)
    }
}
