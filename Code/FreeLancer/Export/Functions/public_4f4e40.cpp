#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f4e40, internal_4f4e40, public_4f4e40);
extern "C" NAKED register_t __cdecl internal_4f4e40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d97ec]
        mov dword ptr ds : [public_674bf8], eax
        ret 
        UNREACHABLE_TRAP(0x4f4e40)
    }
}
