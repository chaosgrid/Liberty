#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_587070);

#define public_58709d _public_58709d

PROC_DECLARE(0x587070, internal_587070, public_587070);
extern "C" NAKED register_t __cdecl internal_587070()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        jl public_58709d
        mov esi, dword ptr ds : [ecx+0x564]
        test esi, esi
        je public_58709d
        mov edx, dword ptr ds : [ecx+0x568]
        sub edx, esi
        sar edx, 5
        cmp eax, edx
        jae public_58709d
        mov edx, esi
        shl eax, 5
        add eax, edx
        pop esi
        ret 4
        public_58709d : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x587070)
    }
}

#undef public_58709d
