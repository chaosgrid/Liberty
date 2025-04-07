#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

PROC_DECLARE(0x429bd0, internal_429bd0, public_429bd0);
extern "C" NAKED register_t __cdecl internal_429bd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x20]
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x429bd0)
    }
}
