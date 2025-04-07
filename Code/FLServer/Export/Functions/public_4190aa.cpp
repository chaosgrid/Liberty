#include "FLServer-PCH.h"

PROC_DECLARE(0x4190aa, internal_4190aa, public_4190aa);
extern "C" NAKED register_t __cdecl internal_4190aa()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7d8]
        UNREACHABLE_TRAP(0x4190aa)
    }
}
