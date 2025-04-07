#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802010);

#define public_6802031 _public_6802031

PROC_DECLARE(0x6802010, internal_6802010, public_6802010);
extern "C" NAKED register_t __cdecl internal_6802010()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6802031
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx+4]
        shl eax, 4
        cmp dword ptr ds : [edx+eax-0x10], 0xFFFFFFFA
        jne public_6802031
        mov eax, 1
        ret 
        public_6802031 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6802010)
    }
}

#undef public_6802031
