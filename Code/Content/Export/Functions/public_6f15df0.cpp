#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15df0);

#define public_6f15e07 _public_6f15e07
#define public_6f15e12 _public_6f15e12
#define public_6f15e19 _public_6f15e19

PROC_DECLARE(0x6f15df0, internal_6f15df0, public_6f15df0);
extern "C" NAKED register_t __cdecl internal_6f15df0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xE4]
        mov ecx, dword ptr ds : [ecx+0xE0]
        push esi
        xor al, al
        cmp ecx, edx
        je public_6f15e12
        mov esi, dword ptr ss : [esp+8]
        public_6f15e07 : nop
        cmp dword ptr ds : [ecx], esi
        je public_6f15e12
        add ecx, 4
        cmp ecx, edx
        jne public_6f15e07
        public_6f15e12 : nop
        cmp ecx, edx
        pop esi
        je public_6f15e19
        mov al, 1
        public_6f15e19 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f15df0)
    }
}

#undef public_6f15e07
#undef public_6f15e12
#undef public_6f15e19
