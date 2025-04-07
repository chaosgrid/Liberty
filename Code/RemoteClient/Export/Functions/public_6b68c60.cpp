#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b68c60, internal_6b68c60, public_6b68c60);
extern "C" NAKED register_t __cdecl internal_6b68c60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6eaa4]
        mov dword ptr ds : [public_6b74610], eax
        ret 
        UNREACHABLE_TRAP(0x6b68c60)
    }
}
