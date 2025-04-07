#include "Movie-PCH.h"

PROC_DECLARE(0x6ac242c, internal_6ac242c, public_6ac242c);
extern "C" NAKED register_t __cdecl internal_6ac242c()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 4
        push eax
        call dword ptr ds : [public_6ada10c]
        ret 4
        UNREACHABLE_TRAP(0x6ac242c)
    }
}
