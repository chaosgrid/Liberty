#include "FLServer-PCH.h"

PROC_DECLARE(0x413aa0, internal_413aa0, public_413aa0);
extern "C" NAKED register_t __cdecl internal_413aa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e180]
        mov dword ptr ds : [public_428cac], eax
        ret 
        UNREACHABLE_TRAP(0x413aa0)
    }
}
