#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf9340, internal_6bf9340, public_6bf9340);
extern "C" NAKED register_t __cdecl internal_6bf9340()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e264]
        mov dword ptr ds : [public_6c13ef8], eax
        ret 
        UNREACHABLE_TRAP(0x6bf9340)
    }
}
