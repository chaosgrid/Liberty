#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5b5c0, internal_6b5b5c0, public_6b5b5c0);
extern "C" NAKED register_t __cdecl internal_6b5b5c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e618]
        mov dword ptr ds : [public_6b74214], eax
        ret 
        UNREACHABLE_TRAP(0x6b5b5c0)
    }
}
