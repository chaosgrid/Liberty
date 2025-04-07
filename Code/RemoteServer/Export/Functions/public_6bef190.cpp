#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bef190, internal_6bef190, public_6bef190);
extern "C" NAKED register_t __cdecl internal_6bef190()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dee0]
        mov dword ptr ds : [public_6c13c18], eax
        ret 
        UNREACHABLE_TRAP(0x6bef190)
    }
}
