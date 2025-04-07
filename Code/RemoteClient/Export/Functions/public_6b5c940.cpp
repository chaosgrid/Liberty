#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5c940, internal_6b5c940, public_6b5c940);
extern "C" NAKED register_t __cdecl internal_6b5c940()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e69c]
        mov dword ptr ds : [public_6b7426c], eax
        ret 
        UNREACHABLE_TRAP(0x6b5c940)
    }
}
