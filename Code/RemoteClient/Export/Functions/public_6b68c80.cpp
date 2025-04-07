#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b68c80, internal_6b68c80, public_6b68c80);
extern "C" NAKED register_t __cdecl internal_6b68c80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6eaa8]
        mov dword ptr ds : [public_6b7460c], eax
        ret 
        UNREACHABLE_TRAP(0x6b68c80)
    }
}
