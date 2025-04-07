#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b33d80, internal_6b33d80, public_6b33d80);
extern "C" NAKED register_t __cdecl internal_6b33d80()
{
    __asm
    {
        mov word ptr ds : [public_6b73914], 2
        mov byte ptr ds : [public_6b73916], 1
        ret 
        UNREACHABLE_TRAP(0x6b33d80)
    }
}
