#include "THORN-PCH.h"

PROC_DECLARE(0x6f58258, internal_6f58258, public_6f58258);
extern "C" NAKED register_t __cdecl internal_6f58258()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0cc]
        UNREACHABLE_TRAP(0x6f58258)
    }
}
