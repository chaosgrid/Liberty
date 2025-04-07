#include "Movie-PCH.h"

PROC_DECLARE(0x6ac1aa0, internal_6ac1aa0, public_6ac1aa0);
extern "C" NAKED register_t __cdecl internal_6ac1aa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 4
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [public_6ada10c]
        UNREACHABLE_TRAP(0x6ac1aa0)
    }
}
