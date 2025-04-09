#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e7e20);

#define public_4e7e6b _public_4e7e6b

PROC_DECLARE(0x4e7e20, internal_4e7e20, public_4e7e20);
extern "C" NAKED register_t __cdecl internal_4e7e20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [public_5c6368]
        cmp dx, word ptr ds : [eax]
        je public_4e7e6b
        mov eax, dword ptr ds : [ecx+0x28]
        test eax, eax
        je public_4e7e6b
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e7e6b
        add eax, 0xC
        test eax, eax
        je public_4e7e6b
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_4e7e6b
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_4e7e6b
        mov dword ptr ss : [esp+4], edx
        lea ecx, ds:[eax+0xE4]
        jmp dword ptr ds : [public_5c6574]
        public_4e7e6b : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x4e7e20)
    }
}

#undef public_4e7e6b
