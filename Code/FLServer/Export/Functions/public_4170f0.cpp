#include "FLServer-PCH.h"

PROC_DECLARE(0x4170f0, internal_4170f0, public_4170f0);
extern "C" NAKED register_t __cdecl internal_4170f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e83c]
        mov dword ptr ds : [public_429dc8], eax
        ret 
        UNREACHABLE_TRAP(0x4170f0)
    }
}
