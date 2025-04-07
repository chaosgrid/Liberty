#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf2ce0, internal_6bf2ce0, public_6bf2ce0);
extern "C" NAKED register_t __cdecl internal_6bf2ce0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0dff4]
        mov dword ptr ds : [public_6c13cf8], eax
        ret 
        UNREACHABLE_TRAP(0x6bf2ce0)
    }
}
