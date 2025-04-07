#include "FLServer-PCH.h"

PROC_DECLARE(0x419874, internal_419874, public_419874);
extern "C" NAKED register_t __cdecl internal_419874()
{
    __asm
    {
        jmp dword ptr ds : [public_41bc28]
        UNREACHABLE_TRAP(0x419874)
    }
}
