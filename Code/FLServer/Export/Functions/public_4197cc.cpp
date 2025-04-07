#include "FLServer-PCH.h"

PROC_DECLARE(0x4197cc, internal_4197cc, public_4197cc);
extern "C" NAKED register_t __cdecl internal_4197cc()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbbc]
        UNREACHABLE_TRAP(0x4197cc)
    }
}
