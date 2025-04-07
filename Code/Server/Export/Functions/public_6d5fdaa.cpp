#include "Server-PCH.h"

PROC_DECLARE(0x6d5fdaa, internal_6d5fdaa, public_6d5fdaa);
extern "C" NAKED register_t __cdecl internal_6d5fdaa()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640a8]
        UNREACHABLE_TRAP(0x6d5fdaa)
    }
}
