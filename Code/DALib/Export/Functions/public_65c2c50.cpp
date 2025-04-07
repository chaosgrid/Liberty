#include "DALib-PCH.h"

PROC_DECLARE(0x65c2c50, internal_65c2c50, public_65c2c50);
extern "C" NAKED register_t __cdecl internal_65c2c50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_65ca1c4], eax
        ret 
        UNREACHABLE_TRAP(0x65c2c50)
    }
}
