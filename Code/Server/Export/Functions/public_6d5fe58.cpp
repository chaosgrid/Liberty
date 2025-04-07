#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe58, internal_6d5fe58, public_6d5fe58);
extern "C" NAKED register_t __cdecl internal_6d5fe58()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6411c]
        UNREACHABLE_TRAP(0x6d5fe58)
    }
}
