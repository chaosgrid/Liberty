#include "FLServer-PCH.h"

PROC_DECLARE(0x4135c0, internal_4135c0, public_4135c0);
extern "C" NAKED register_t __cdecl internal_4135c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e174]
        mov dword ptr ds : [public_428c78], eax
        ret 
        UNREACHABLE_TRAP(0x4135c0)
    }
}
