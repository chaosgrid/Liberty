#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe6a, internal_6d5fe6a, public_6d5fe6a);
extern "C" NAKED register_t __cdecl internal_6d5fe6a()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64128]
        UNREACHABLE_TRAP(0x6d5fe6a)
    }
}
