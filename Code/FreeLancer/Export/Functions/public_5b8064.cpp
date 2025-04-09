#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b8064, internal_5b8064, public_5b8064);
extern "C" NAKED register_t __cdecl internal_5b8064()
{
    __asm
    {
        jmp dword ptr ds : [public_5c70a4]
        UNREACHABLE_TRAP(0x5b8064)
    }
}
