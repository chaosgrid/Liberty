#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfe920, internal_6bfe920, public_6bfe920);
extern "C" NAKED register_t __cdecl internal_6bfe920()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e3b4]
        mov dword ptr ds : [public_6c1402c], eax
        ret 
        UNREACHABLE_TRAP(0x6bfe920)
    }
}
