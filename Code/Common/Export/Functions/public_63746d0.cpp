#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63746d0);

#define public_63746dc _public_63746dc
#define public_63746f3 _public_63746f3
#define public_63746fa _public_63746fa

PROC_DECLARE(0x63746d0, internal_63746d0, public_63746d0);
extern "C" NAKED register_t __cdecl internal_63746d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        xor edx, edx
        mov eax, offset public_658b118
        public_63746dc : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, esi
        je public_63746fa
        test ecx, ecx
        je public_63746f3
        add eax, 4
        inc edx
        cmp eax, offset public_658b188
        jl public_63746dc
        pop esi
        ret 
        public_63746f3 : nop
        mov dword ptr ds : [edx*4+public_658b118], esi
        public_63746fa : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63746d0)
    }
}

#undef public_63746dc
#undef public_63746f3
#undef public_63746fa
