#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c06c90, internal_6c06c90, public_6c06c90);
extern "C" NAKED register_t __cdecl internal_6c06c90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e5d4]
        mov dword ptr ds : [public_6c14264], eax
        ret 
        UNREACHABLE_TRAP(0x6c06c90)
    }
}
