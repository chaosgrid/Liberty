#include "THORN-PCH.h"

PROC_DECLARE(0x6f58288, internal_6f58288, public_6f58288);
extern "C" NAKED register_t __cdecl internal_6f58288()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0ec]
        UNREACHABLE_TRAP(0x6f58288)
    }
}
