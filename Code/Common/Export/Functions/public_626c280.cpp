#include "Common-PCH.h"

PROC_DECLARE(0x626c280, internal_626c280, public_626c280);
extern "C" NAKED register_t __cdecl internal_626c280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399820]
        mov dword ptr ds : [public_63fbba8], eax
        ret 
        UNREACHABLE_TRAP(0x626c280)
    }
}
