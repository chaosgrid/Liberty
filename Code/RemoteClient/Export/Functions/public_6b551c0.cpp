#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b551c0, internal_6b551c0, public_6b551c0);
extern "C" NAKED register_t __cdecl internal_6b551c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e474]
        mov dword ptr ds : [public_6b7406c], eax
        ret 
        UNREACHABLE_TRAP(0x6b551c0)
    }
}
