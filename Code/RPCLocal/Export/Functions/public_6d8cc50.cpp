#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8cc50, internal_6d8cc50, public_6d8cc50);
extern "C" NAKED register_t __cdecl internal_6d8cc50()
{
    __asm
    {
        mov word ptr ds : [public_6dbbba0], 4
        mov byte ptr ds : [public_6dbbba2], 1
        ret 
        UNREACHABLE_TRAP(0x6d8cc50)
    }
}
