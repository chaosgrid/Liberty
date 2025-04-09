#include "FreeLancer-PCH.h"

PROC_DECLARE(0x564500, internal_564500, public_564500);
extern "C" NAKED register_t __cdecl internal_564500()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e250c]
        mov dword ptr ds : [public_67a560], eax
        ret 
        UNREACHABLE_TRAP(0x564500)
    }
}
