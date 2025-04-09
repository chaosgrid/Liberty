#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b6260, internal_5b6260, public_5b6260);
extern "C" NAKED register_t __cdecl internal_5b6260()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_67ed28], eax
        ret 4
        UNREACHABLE_TRAP(0x5b6260)
    }
}
