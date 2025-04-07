#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c01b70, internal_6c01b70, public_6c01b70);
extern "C" NAKED register_t __cdecl internal_6c01b70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e450]
        mov dword ptr ds : [public_6c140fc], eax
        ret 
        UNREACHABLE_TRAP(0x6c01b70)
    }
}
