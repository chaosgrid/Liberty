#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b33d40, internal_6b33d40, public_6b33d40);
extern "C" NAKED register_t __cdecl internal_6b33d40()
{
    __asm
    {
        mov word ptr ds : [public_6b73910], 0
        mov byte ptr ds : [public_6b73912], 1
        ret 
        UNREACHABLE_TRAP(0x6b33d40)
    }
}
