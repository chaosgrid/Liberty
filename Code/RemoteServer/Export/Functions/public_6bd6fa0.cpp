#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd6fa0, internal_6bd6fa0, public_6bd6fa0);
extern "C" NAKED register_t __cdecl internal_6bd6fa0()
{
    __asm
    {
        mov word ptr ds : [public_6c139ec], 3
        mov byte ptr ds : [public_6c139ee], 1
        ret 
        UNREACHABLE_TRAP(0x6bd6fa0)
    }
}
