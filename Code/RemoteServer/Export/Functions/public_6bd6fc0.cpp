#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd6fc0, internal_6bd6fc0, public_6bd6fc0);
extern "C" NAKED register_t __cdecl internal_6bd6fc0()
{
    __asm
    {
        mov word ptr ds : [public_6c139f0], 4
        mov byte ptr ds : [public_6c139f2], 1
        ret 
        UNREACHABLE_TRAP(0x6bd6fc0)
    }
}
