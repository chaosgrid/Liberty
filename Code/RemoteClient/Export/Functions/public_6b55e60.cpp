#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b55e60, internal_6b55e60, public_6b55e60);
extern "C" NAKED register_t __cdecl internal_6b55e60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e4a4]
        mov dword ptr ds : [public_6b740a4], eax
        ret 
        UNREACHABLE_TRAP(0x6b55e60)
    }
}
