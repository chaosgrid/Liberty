#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd6f40, internal_6bd6f40, public_6bd6f40);
extern "C" NAKED register_t __cdecl internal_6bd6f40()
{
    __asm
    {
        mov word ptr ds : [public_6c139f4], 0
        mov byte ptr ds : [public_6c139f6], 1
        ret 
        UNREACHABLE_TRAP(0x6bd6f40)
    }
}
