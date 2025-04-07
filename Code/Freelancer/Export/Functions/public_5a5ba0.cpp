#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b9c60);

PROC_DECLARE(0x5a5ba0, internal_5a5ba0, public_5a5ba0);
extern "C" NAKED register_t __cdecl internal_5a5ba0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x18]
        push ecx
        push eax
        call public_4b9c60
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x5a5ba0)
    }
}
