#include "FreeLancer-PCH.h"

PROC_DECLARE(0x583590, internal_583590, public_583590);
extern "C" NAKED register_t __cdecl internal_583590()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e4bb4]
        mov dword ptr ds : [public_67c4fc], eax
        ret 
        UNREACHABLE_TRAP(0x583590)
    }
}
