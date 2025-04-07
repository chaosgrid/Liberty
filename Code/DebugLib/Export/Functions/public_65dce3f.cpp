#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7f23);
CLANG_FORWARD_PROC_SYMBOL(public_65dce3f);

#define public_65dce4c _public_65dce4c
#define public_65dce7d _public_65dce7d

PROC_DECLARE(0x65dce3f, internal_65dce3f, public_65dce3f);
extern "C" NAKED register_t __cdecl internal_65dce3f()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [public_65e10a8]
        mov esi, offset public_65e55f0
        public_65dce4c : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_65dce7d
        cmp esi, offset public_65e5634
        je public_65dce7d
        cmp esi, offset public_65e5624
        je public_65dce7d
        cmp esi, offset public_65e5614
        je public_65dce7d
        cmp esi, offset public_65e55f4
        je public_65dce7d
        push eax
        call edi
        push dword ptr ds : [esi]
        call public_65d7f23
        pop ecx
        public_65dce7d : nop
        add esi, 4
        cmp esi, offset public_65e56b0
        jl public_65dce4c
        push dword ptr ds : [public_65e5614]
        call edi
        push dword ptr ds : [public_65e5624]
        call edi
        push dword ptr ds : [public_65e5634]
        call edi
        push dword ptr ds : [public_65e55f4]
        call edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65dce3f)
    }
}

#undef public_65dce4c
#undef public_65dce7d
