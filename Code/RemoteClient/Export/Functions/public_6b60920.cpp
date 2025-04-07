#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60920, internal_6b60920, public_6b60920);
extern "C" NAKED register_t __cdecl internal_6b60920()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e7fc]
        mov dword ptr ds : [public_6b743a4], eax
        ret 
        UNREACHABLE_TRAP(0x6b60920)
    }
}
