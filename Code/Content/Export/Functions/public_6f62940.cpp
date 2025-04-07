#include "Content-PCH.h"

PROC_DECLARE(0x6f62940, internal_6f62940, public_6f62940);
extern "C" NAKED register_t __cdecl internal_6f62940()
{
    __asm
    {
        mov dword ptr ds : [public_6fd0eb0], 0x1388
        ret 
        UNREACHABLE_TRAP(0x6f62940)
    }
}
