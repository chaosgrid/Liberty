#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b59c70, internal_6b59c70, public_6b59c70);
extern "C" NAKED register_t __cdecl internal_6b59c70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e5ac]
        mov dword ptr ds : [public_6b7417c], eax
        ret 
        UNREACHABLE_TRAP(0x6b59c70)
    }
}
