#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d442b6);
CLANG_FORWARD_PROC_SYMBOL(public_6d4981d);

PROC_DECLARE(0x6d442b6, internal_6d442b6, public_6d442b6);
extern "C" NAKED register_t __cdecl internal_6d442b6()
{
    __asm
    {
        xor eax, eax
        push eax
        push eax
        push eax
        call public_6d4981d
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 0xC
        mov dword ptr ds : [ecx+0x100], eax
        ret 
        UNREACHABLE_TRAP(0x6d442b6)
    }
}
