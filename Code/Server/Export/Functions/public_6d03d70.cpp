#include "Server-PCH.h"

PROC_DECLARE(0x6d03d70, internal_6d03d70, public_6d03d70);
extern "C" NAKED register_t __cdecl internal_6d03d70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x10], eax
        ret 4
        UNREACHABLE_TRAP(0x6d03d70)
    }
}
