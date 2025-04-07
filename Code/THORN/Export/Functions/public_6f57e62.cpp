#include "THORN-PCH.h"

PROC_DECLARE(0x6f57e62, internal_6f57e62, public_6f57e62);
extern "C" NAKED register_t __cdecl internal_6f57e62()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a03c]
        UNREACHABLE_TRAP(0x6f57e62)
    }
}
