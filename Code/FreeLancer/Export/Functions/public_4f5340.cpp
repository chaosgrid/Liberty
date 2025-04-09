#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f5340);

PROC_DECLARE(0x4f5340, internal_4f5340, public_4f5340);
extern "C" NAKED register_t __cdecl internal_4f5340()
{
    __asm
    {
        mov al, byte ptr ds : [public_674c08]
        ret 
        UNREACHABLE_TRAP(0x4f5340)
    }
}
