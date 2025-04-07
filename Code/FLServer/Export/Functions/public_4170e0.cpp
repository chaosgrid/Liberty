#include "FLServer-PCH.h"

PROC_DECLARE(0x4170e0, internal_4170e0, public_4170e0);
extern "C" NAKED register_t __cdecl internal_4170e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e83c]
        mov dword ptr ds : [public_429dc4], eax
        ret 
        UNREACHABLE_TRAP(0x4170e0)
    }
}
