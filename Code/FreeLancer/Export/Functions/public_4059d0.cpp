#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4059d0);

#define public_4059e2 _public_4059e2
#define public_4059f0 _public_4059f0
#define public_4059fb _public_4059fb

PROC_DECLARE(0x4059d0, internal_4059d0, public_4059d0);
extern "C" NAKED register_t __cdecl internal_4059d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        push esi
        mov esi, 1
        cmp eax, esi
        jle public_4059fb
        mov edx, 0x1C
        public_4059e2 : nop
        mov eax, dword ptr ds : [ecx]
        add eax, edx
        cmp byte ptr ds : [eax+0x18], 0
        je public_4059f0
        mov byte ptr ds : [eax+0x19], 0
        public_4059f0 : nop
        mov eax, dword ptr ds : [ecx+4]
        inc esi
        add edx, 0x1C
        cmp esi, eax
        jl public_4059e2
        public_4059fb : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4059d0)
    }
}

#undef public_4059e2
#undef public_4059f0
#undef public_4059fb
