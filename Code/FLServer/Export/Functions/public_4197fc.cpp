#include "FLServer-PCH.h"

PROC_DECLARE(0x4197fc, internal_4197fc, public_4197fc);
extern "C" NAKED register_t __cdecl internal_4197fc()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbc8]
        UNREACHABLE_TRAP(0x4197fc)
    }
}
