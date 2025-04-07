#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b38830, internal_6b38830, public_6b38830);
extern "C" NAKED register_t __cdecl internal_6b38830()
{
    __asm
    {
        mov word ptr ds : [public_6b73d50], 3
        mov byte ptr ds : [public_6b73d52], 1
        ret 
        UNREACHABLE_TRAP(0x6b38830)
    }
}
