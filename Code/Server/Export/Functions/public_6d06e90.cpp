#include "Server-PCH.h"

PROC_DECLARE(0x6d06e90, internal_6d06e90, public_6d06e90);
extern "C" NAKED register_t __cdecl internal_6d06e90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        ret 4
        UNREACHABLE_TRAP(0x6d06e90)
    }
}
