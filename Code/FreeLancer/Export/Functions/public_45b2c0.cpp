#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45b2c0);

PROC_DECLARE(0x45b2c0, internal_45b2c0, public_45b2c0);
extern "C" NAKED register_t __cdecl internal_45b2c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x32C]
        mov al, byte ptr ds : [eax+0x6C]
        shr al, 1
        and al, 1
        ret 
        UNREACHABLE_TRAP(0x45b2c0)
    }
}
