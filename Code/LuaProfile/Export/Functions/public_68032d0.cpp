#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68032d0);
CLANG_FORWARD_PROC_SYMBOL(public_68032f0);

PROC_DECLARE(0x68032d0, internal_68032d0, public_68032d0);
extern "C" NAKED register_t __cdecl internal_68032d0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        push edx
        dec ecx
        push ecx
        push edx
        call public_68032f0
        add esp, 0xC
        pop edi
        ret 
        UNREACHABLE_TRAP(0x68032d0)
    }
}
