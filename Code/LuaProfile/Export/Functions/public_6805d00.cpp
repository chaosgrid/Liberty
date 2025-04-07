#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805a80);
CLANG_FORWARD_PROC_SYMBOL(public_6805d00);

PROC_DECLARE(0x6805d00, internal_6805d00, public_6805d00);
extern "C" NAKED register_t __cdecl internal_6805d00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6805a80
        mov edx, dword ptr ds : [eax+0x10]
        xor ecx, ecx
        add esp, 4
        cmp edx, 0xFFFFFFFA
        setne cl
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x6805d00)
    }
}
