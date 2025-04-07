#include "Server-PCH.h"

PROC_DECLARE(0x6d5fdda, internal_6d5fdda, public_6d5fdda);
extern "C" NAKED register_t __cdecl internal_6d5fdda()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640c8]
        UNREACHABLE_TRAP(0x6d5fdda)
    }
}
