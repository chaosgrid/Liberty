#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf6100, internal_6bf6100, public_6bf6100);
extern "C" NAKED register_t __cdecl internal_6bf6100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e11c]
        mov dword ptr ds : [public_6c13de4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf6100)
    }
}
