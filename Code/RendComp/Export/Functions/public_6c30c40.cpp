#include "RendComp-PCH.h"

PROC_DECLARE(0x6c30c40, internal_6c30c40, public_6c30c40);
extern "C" NAKED register_t __cdecl internal_6c30c40()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0xC]
        xor eax, eax
        test edx, edx
        setge al
        dec eax
        ret 4
        UNREACHABLE_TRAP(0x6c30c40)
    }
}
