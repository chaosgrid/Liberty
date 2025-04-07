#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68058a0);
CLANG_FORWARD_PROC_SYMBOL(public_6805a80);

PROC_DECLARE(0x6805a80, internal_6805a80, public_6805a80);
extern "C" NAKED register_t __cdecl internal_6805a80()
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
        dec ecx
        push ecx
        push edx
        call public_68058a0
        add esp, 8
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6805a80)
    }
}
