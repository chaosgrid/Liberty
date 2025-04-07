#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b60b10, internal_6b60b10, public_6b60b10);
extern "C" NAKED register_t __cdecl internal_6b60b10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e80c]
        mov dword ptr ds : [public_6b743b4], eax
        ret 
        UNREACHABLE_TRAP(0x6b60b10)
    }
}
