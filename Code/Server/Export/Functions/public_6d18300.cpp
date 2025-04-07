#include "Server-PCH.h"

PROC_DECLARE(0x6d18300, internal_6d18300, public_6d18300);
extern "C" NAKED register_t __cdecl internal_6d18300()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        jmp dword ptr ds : [public_6d647d4]
        UNREACHABLE_TRAP(0x6d18300)
    }
}
