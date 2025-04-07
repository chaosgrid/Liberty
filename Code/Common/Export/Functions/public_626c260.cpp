#include "Common-PCH.h"

PROC_DECLARE(0x626c260, internal_626c260, public_626c260);
extern "C" NAKED register_t __cdecl internal_626c260()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639981c]
        mov dword ptr ds : [public_63fbbb0], eax
        ret 
        UNREACHABLE_TRAP(0x626c260)
    }
}
