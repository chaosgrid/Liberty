#include "FreeLancer-PCH.h"

PROC_DECLARE(0x41a850, internal_41a850, public_41a850);
extern "C" NAKED register_t __cdecl internal_41a850()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c927c]
        mov dword ptr ds : [public_616704], eax
        ret 
        UNREACHABLE_TRAP(0x41a850)
    }
}
