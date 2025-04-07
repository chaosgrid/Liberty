#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b57f10, internal_6b57f10, public_6b57f10);
extern "C" NAKED register_t __cdecl internal_6b57f10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e558]
        mov dword ptr ds : [public_6b7410c], eax
        ret 
        UNREACHABLE_TRAP(0x6b57f10)
    }
}
