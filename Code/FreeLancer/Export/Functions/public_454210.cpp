#include "FreeLancer-PCH.h"

PROC_DECLARE(0x454210, internal_454210, public_454210);
extern "C" NAKED register_t __cdecl internal_454210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cde9c]
        mov dword ptr ds : [public_66d2c4], eax
        ret 
        UNREACHABLE_TRAP(0x454210)
    }
}
