#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02520, internal_6c02520, public_6c02520);
extern "C" NAKED register_t __cdecl internal_6c02520()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e478]
        mov dword ptr ds : [public_6c14124], eax
        ret 
        UNREACHABLE_TRAP(0x6c02520)
    }
}
