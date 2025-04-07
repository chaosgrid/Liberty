#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5e4b0, internal_6b5e4b0, public_6b5e4b0);
extern "C" NAKED register_t __cdecl internal_6b5e4b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e72c]
        mov dword ptr ds : [public_6b742fc], eax
        ret 
        UNREACHABLE_TRAP(0x6b5e4b0)
    }
}
