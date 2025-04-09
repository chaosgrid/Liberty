#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b70ec, internal_5b70ec, public_5b70ec);
extern "C" NAKED register_t __cdecl internal_5b70ec()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66a0]
        UNREACHABLE_TRAP(0x5b70ec)
    }
}
