#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802040);

#define public_6802061 _public_6802061

PROC_DECLARE(0x6802040, internal_6802040, public_6802040);
extern "C" NAKED register_t __cdecl internal_6802040()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6802061
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 4
        cmp dword ptr ds : [edx+eax-0x10], 0xFFFFFFFD
        jne public_6802061
        mov eax, 1
        ret 
        public_6802061 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6802040)
    }
}

#undef public_6802061
