#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46f6e);

PROC_DECLARE(0x6d46f6e, internal_6d46f6e, public_6d46f6e);
extern "C" NAKED register_t __cdecl internal_6d46f6e()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        push 0x112
        push 0
        push eax
        call dword ptr ds : [ecx]
        and byte ptr ds : [eax+0x111], 0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d46f6e)
    }
}
