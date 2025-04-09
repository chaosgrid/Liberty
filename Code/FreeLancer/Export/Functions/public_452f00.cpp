#include "FreeLancer-PCH.h"

PROC_DECLARE(0x452f00, internal_452f00, public_452f00);
extern "C" NAKED register_t __cdecl internal_452f00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cd3d8]
        mov dword ptr ds : [public_66d278], eax
        ret 
        UNREACHABLE_TRAP(0x452f00)
    }
}
