#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b387d0, internal_6b387d0, public_6b387d0);
extern "C" NAKED register_t __cdecl internal_6b387d0()
{
    __asm
    {
        mov word ptr ds : [public_6b73d5c], 0
        mov byte ptr ds : [public_6b73d5e], 1
        ret 
        UNREACHABLE_TRAP(0x6b387d0)
    }
}
