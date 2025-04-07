#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801bd0);

#define public_6801be9 _public_6801be9

PROC_DECLARE(0x6801bd0, internal_6801bd0, public_6801bd0);
extern "C" NAKED register_t __cdecl internal_6801bd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6801be9
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 4
        lea eax, ds:[edx+eax-0x10]
        ret 
        public_6801be9 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6801bd0)
    }
}

#undef public_6801be9
