#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b52c60, internal_6b52c60, public_6b52c60);
extern "C" NAKED register_t __cdecl internal_6b52c60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e3d4]
        mov dword ptr ds : [public_6b73fa0], eax
        ret 
        UNREACHABLE_TRAP(0x6b52c60)
    }
}
