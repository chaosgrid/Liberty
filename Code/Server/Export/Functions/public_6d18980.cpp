#include "Server-PCH.h"

PROC_DECLARE(0x6d18980, internal_6d18980, public_6d18980);
extern "C" NAKED register_t __cdecl internal_6d18980()
{
    __asm
    {
        mov word ptr ds : [public_6d8f5e4], 2
        mov byte ptr ds : [public_6d8f5e6], 1
        ret 
        UNREACHABLE_TRAP(0x6d18980)
    }
}
