#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b61960, internal_6b61960, public_6b61960);
extern "C" NAKED register_t __cdecl internal_6b61960()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e870]
        mov dword ptr ds : [public_6b7440c], eax
        ret 
        UNREACHABLE_TRAP(0x6b61960)
    }
}
