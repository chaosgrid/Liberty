#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805a80);
CLANG_FORWARD_PROC_SYMBOL(public_6805aa0);

#define public_6805abb _public_6805abb

PROC_DECLARE(0x6805aa0, internal_6805aa0, public_6805aa0);
extern "C" NAKED register_t __cdecl internal_6805aa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6805a80
        mov ecx, dword ptr ds : [eax+4]
        add esp, 4
        test ecx, ecx
        jne public_6805abb
        mov dword ptr ds : [eax+4], 2
        public_6805abb : nop
        ret 
        UNREACHABLE_TRAP(0x6805aa0)
    }
}

#undef public_6805abb
