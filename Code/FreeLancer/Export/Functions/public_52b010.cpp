#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52b010, internal_52b010, public_52b010);
extern "C" NAKED register_t __cdecl internal_52b010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dd334]
        mov dword ptr ds : [public_675424], eax
        ret 
        UNREACHABLE_TRAP(0x52b010)
    }
}
