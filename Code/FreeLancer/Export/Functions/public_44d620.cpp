#include "FreeLancer-PCH.h"

PROC_DECLARE(0x44d620, internal_44d620, public_44d620);
extern "C" NAKED register_t __cdecl internal_44d620()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cc0b4]
        mov dword ptr ds : [public_668ae4], eax
        ret 
        UNREACHABLE_TRAP(0x44d620)
    }
}
