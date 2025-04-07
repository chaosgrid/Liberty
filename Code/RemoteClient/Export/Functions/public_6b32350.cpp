#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b32350, internal_6b32350, public_6b32350);
extern "C" NAKED register_t __cdecl internal_6b32350()
{
    __asm
    {
        mov word ptr ds : [public_6b738a0], 4
        mov byte ptr ds : [public_6b738a2], 1
        ret 
        UNREACHABLE_TRAP(0x6b32350)
    }
}
