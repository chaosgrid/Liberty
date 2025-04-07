#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c06c70, internal_6c06c70, public_6c06c70);
extern "C" NAKED register_t __cdecl internal_6c06c70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5d0]
        mov dword ptr ds : [public_6c14268], eax
        ret 
        UNREACHABLE_TRAP(0x6c06c70)
    }
}
