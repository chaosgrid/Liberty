#include "Common-PCH.h"

PROC_DECLARE(0x62bb910, internal_62bb910, public_62bb910);
extern "C" NAKED register_t __cdecl internal_62bb910()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639ecd0]
        mov dword ptr ds : [public_63fc494], eax
        ret 
        UNREACHABLE_TRAP(0x62bb910)
    }
}
