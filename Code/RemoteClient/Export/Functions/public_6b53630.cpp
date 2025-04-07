#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b53630, internal_6b53630, public_6b53630);
extern "C" NAKED register_t __cdecl internal_6b53630()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3ec]
        mov dword ptr ds : [public_6b73fc0], eax
        ret 
        UNREACHABLE_TRAP(0x6b53630)
    }
}
