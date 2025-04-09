#include "FreeLancer-PCH.h"

PROC_DECLARE(0x58c350, internal_58c350, public_58c350);
extern "C" NAKED register_t __cdecl internal_58c350()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e50ec]
        mov dword ptr ds : [public_67d954], eax
        ret 
        UNREACHABLE_TRAP(0x58c350)
    }
}
