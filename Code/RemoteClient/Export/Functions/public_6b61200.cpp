#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b61200, internal_6b61200, public_6b61200);
extern "C" NAKED register_t __cdecl internal_6b61200()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e82c]
        mov dword ptr ds : [public_6b743d4], eax
        ret 
        UNREACHABLE_TRAP(0x6b61200)
    }
}
