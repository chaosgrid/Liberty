#include "THORN-PCH.h"

PROC_DECLARE(0x6f58324, internal_6f58324, public_6f58324);
extern "C" NAKED register_t __cdecl internal_6f58324()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a154]
        UNREACHABLE_TRAP(0x6f58324)
    }
}
