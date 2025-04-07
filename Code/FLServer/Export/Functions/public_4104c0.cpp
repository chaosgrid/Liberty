#include "FLServer-PCH.h"

PROC_DECLARE(0x4104c0, internal_4104c0, public_4104c0);
extern "C" NAKED register_t __cdecl internal_4104c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b2a0]
        ret 
        UNREACHABLE_TRAP(0x4104c0)
    }
}
