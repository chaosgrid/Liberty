#include "FLServer-PCH.h"

PROC_DECLARE(0x4186cc, internal_4186cc, public_4186cc);
extern "C" NAKED register_t __cdecl internal_4186cc()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb30]
        UNREACHABLE_TRAP(0x4186cc)
    }
}
