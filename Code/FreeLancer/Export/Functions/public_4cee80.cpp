#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4cee80, internal_4cee80, public_4cee80);
extern "C" NAKED register_t __cdecl internal_4cee80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d7954]
        mov dword ptr ds : [public_674944], eax
        ret 
        UNREACHABLE_TRAP(0x4cee80)
    }
}
