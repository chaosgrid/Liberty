#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd6f80, internal_6bd6f80, public_6bd6f80);
extern "C" NAKED register_t __cdecl internal_6bd6f80()
{
    __asm
    {
        mov word ptr ds : [public_6c139f8], 2
        mov byte ptr ds : [public_6c139fa], 1
        ret 
        UNREACHABLE_TRAP(0x6bd6f80)
    }
}
