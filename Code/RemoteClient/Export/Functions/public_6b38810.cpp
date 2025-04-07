#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b38810, internal_6b38810, public_6b38810);
extern "C" NAKED register_t __cdecl internal_6b38810()
{
    __asm
    {
        mov word ptr ds : [public_6b73d54], 2
        mov byte ptr ds : [public_6b73d56], 1
        ret 
        UNREACHABLE_TRAP(0x6b38810)
    }
}
