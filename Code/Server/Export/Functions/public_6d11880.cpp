#include "Server-PCH.h"

PROC_DECLARE(0x6d11880, internal_6d11880, public_6d11880);
extern "C" NAKED register_t __cdecl internal_6d11880()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d68328]
        mov dword ptr ds : [public_6d8e530], eax
        ret 
        UNREACHABLE_TRAP(0x6d11880)
    }
}
