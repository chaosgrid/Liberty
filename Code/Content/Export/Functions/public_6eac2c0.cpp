#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac2c0);

#define public_6eac2d4 _public_6eac2d4
#define public_6eac2df _public_6eac2df
#define public_6eac2e4 _public_6eac2e4

PROC_DECLARE(0x6eac2c0, internal_6eac2c0, public_6eac2c0);
extern "C" NAKED register_t __cdecl internal_6eac2c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xA8]
        mov ecx, dword ptr ds : [ecx+0xAC]
        cmp eax, ecx
        je public_6eac2df
        mov edx, dword ptr ss : [esp+4]
        public_6eac2d4 : nop
        cmp dword ptr ds : [eax], edx
        je public_6eac2e4
        add eax, 0x14
        cmp eax, ecx
        jne public_6eac2d4
        public_6eac2df : nop
        xor eax, eax
        ret 4
        public_6eac2e4 : nop
        mov eax, dword ptr ds : [eax+4]
        ret 4
        UNREACHABLE_TRAP(0x6eac2c0)
    }
}

#undef public_6eac2d4
#undef public_6eac2df
#undef public_6eac2e4
