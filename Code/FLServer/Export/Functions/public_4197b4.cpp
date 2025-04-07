#include "FLServer-PCH.h"

PROC_DECLARE(0x4197b4, internal_4197b4, public_4197b4);
extern "C" NAKED register_t __cdecl internal_4197b4()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbf8]
        UNREACHABLE_TRAP(0x4197b4)
    }
}
