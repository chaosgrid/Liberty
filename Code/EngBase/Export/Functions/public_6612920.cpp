#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612920);
CLANG_FORWARD_PROC_SYMBOL(public_661b070);

#define public_661292c _public_661292c
#define public_661293a _public_661293a

PROC_DECLARE(0x6612920, internal_6612920, public_6612920);
extern "C" NAKED register_t __cdecl internal_6612920()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        push edi
        mov edi, dword ptr ds : [ecx+0x10]
        cmp esi, edi
        jae public_661293a
        public_661292c : nop
        mov ecx, dword ptr ds : [esi]
        call public_661b070
        add esi, 4
        cmp esi, edi
        jb public_661292c
        public_661293a : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6612920)
    }
}

#undef public_661292c
#undef public_661293a
