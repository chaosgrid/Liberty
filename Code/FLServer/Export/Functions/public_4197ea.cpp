#include "FLServer-PCH.h"

PROC_DECLARE(0x4197ea, internal_4197ea, public_4197ea);
extern "C" NAKED register_t __cdecl internal_4197ea()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbd4]
        UNREACHABLE_TRAP(0x4197ea)
    }
}
