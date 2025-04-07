#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b33dc0, internal_6b33dc0, public_6b33dc0);
extern "C" NAKED register_t __cdecl internal_6b33dc0()
{
    __asm
    {
        mov word ptr ds : [public_6b7390c], 4
        mov byte ptr ds : [public_6b7390e], 1
        ret 
        UNREACHABLE_TRAP(0x6b33dc0)
    }
}
