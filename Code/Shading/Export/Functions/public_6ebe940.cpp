#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebe940);

#define public_6ebe974 _public_6ebe974

PROC_DECLARE(0x6ebe940, internal_6ebe940, public_6ebe940);
extern "C" NAKED register_t __cdecl internal_6ebe940()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        add eax, 0x10
        push esi
        mov esi, dword ptr ds : [eax+4]
        test esi, esi
        je public_6ebe974
        mov edx, dword ptr ds : [eax+8]
        sub edx, esi
        mov eax, 0x66666667
        imul edx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edx
        jae public_6ebe974
        mov dword ptr ds : [ecx+0x10], eax
        xor eax, eax
        pop esi
        ret 4
        public_6ebe974 : nop
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ebe940)
    }
}

#undef public_6ebe974
