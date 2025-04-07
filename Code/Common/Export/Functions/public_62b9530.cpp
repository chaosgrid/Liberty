#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9530);

#define public_62b9541 _public_62b9541
#define public_62b954f _public_62b954f
#define public_62b955a _public_62b955a

PROC_DECLARE(0x62b9530, internal_62b9530, public_62b9530);
extern "C" NAKED register_t __cdecl internal_62b9530()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_62b955a
        push esi
        public_62b9541 : nop
        test eax, eax
        je public_62b954f
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        public_62b954f : nop
        add ecx, 8
        add eax, 8
        cmp ecx, edx
        jne public_62b9541
        pop esi
        public_62b955a : nop
        ret 0xC
        UNREACHABLE_TRAP(0x62b9530)
    }
}

#undef public_62b9541
#undef public_62b954f
#undef public_62b955a
