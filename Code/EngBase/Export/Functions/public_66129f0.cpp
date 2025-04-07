#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66129f0);

PROC_DECLARE(0x66129f0, internal_66129f0, public_66129f0);
extern "C" NAKED register_t __cdecl internal_66129f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        fld dword ptr ds : [eax+0x1C]
        ret 
        UNREACHABLE_TRAP(0x66129f0)
    }
}
