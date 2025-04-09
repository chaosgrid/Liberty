#include "FreeLancer-PCH.h"

PROC_DECLARE(0x54bd70, internal_54bd70, public_54bd70);
extern "C" NAKED register_t __cdecl internal_54bd70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e086c]
        mov dword ptr ds : [public_6797a0], eax
        ret 
        UNREACHABLE_TRAP(0x54bd70)
    }
}
