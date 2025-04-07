#include "Common-PCH.h"

PROC_DECLARE(0x6295260, internal_6295260, public_6295260);
extern "C" NAKED register_t __cdecl internal_6295260()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639cca8]
        mov dword ptr ds : [public_63fc128], eax
        ret 
        UNREACHABLE_TRAP(0x6295260)
    }
}
