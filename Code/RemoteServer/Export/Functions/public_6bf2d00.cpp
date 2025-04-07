#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf2d00, internal_6bf2d00, public_6bf2d00);
extern "C" NAKED register_t __cdecl internal_6bf2d00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dff8]
        mov dword ptr ds : [public_6c13cf4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf2d00)
    }
}
