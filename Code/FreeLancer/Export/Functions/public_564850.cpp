#include "FreeLancer-PCH.h"

PROC_DECLARE(0x564850, internal_564850, public_564850);
extern "C" NAKED register_t __cdecl internal_564850()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e254c]
        mov dword ptr ds : [public_67c1ec], eax
        ret 
        UNREACHABLE_TRAP(0x564850)
    }
}
