#include "Common-PCH.h"


#define public_626c97c _public_626c97c

PROC_DECLARE(0x626c950, internal_626c950, public_626c950);
extern "C" NAKED register_t __cdecl internal_626c950()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp esi, 0xFFFFFFFF
        je public_626c97c
        mov edx, dword ptr ds : [ecx+0x88]
        test edx, edx
        je public_626c97c
        mov eax, dword ptr ds : [ecx+0x8C]
        sub eax, edx
        sar eax, 4
        cmp esi, eax
        jae public_626c97c
        mov eax, 1
        pop esi
        ret 4
        public_626c97c : nop
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x626c950)
    }
}

#undef public_626c97c
