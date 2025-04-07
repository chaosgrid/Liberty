#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63569e0);

PROC_DECLARE(0x6361580, internal_6361580, public_6361580);
extern "C" NAKED register_t __cdecl internal_6361580()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        push ecx
        push eax
        call public_63569e0
        add esp, 8
        neg eax
        sbb eax, eax
        inc eax
        ret 8
        UNREACHABLE_TRAP(0x6361580)
    }
}
