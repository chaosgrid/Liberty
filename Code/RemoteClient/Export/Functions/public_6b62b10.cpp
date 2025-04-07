#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b62b10, internal_6b62b10, public_6b62b10);
extern "C" NAKED register_t __cdecl internal_6b62b10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e90c]
        mov dword ptr ds : [public_6b7446c], eax
        ret 
        UNREACHABLE_TRAP(0x6b62b10)
    }
}
