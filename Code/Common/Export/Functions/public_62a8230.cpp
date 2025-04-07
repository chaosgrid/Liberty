#include "Common-PCH.h"

PROC_DECLARE(0x62a8230, internal_62a8230, public_62a8230);
extern "C" NAKED register_t __cdecl internal_62a8230()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639dff8]
        mov dword ptr ds : [public_63fc2bc], eax
        ret 
        UNREACHABLE_TRAP(0x62a8230)
    }
}
