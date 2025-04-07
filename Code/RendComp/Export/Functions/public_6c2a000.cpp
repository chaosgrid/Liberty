#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a000);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2a02c _public_6c2a02c
#define public_6c2a036 _public_6c2a036
#define public_6c2a038 _public_6c2a038
#define public_6c2a055 _public_6c2a055

PROC_DECLARE(0x6c2a000, internal_6c2a000, public_6c2a000);
extern "C" NAKED register_t __cdecl internal_6c2a000()
{
    __asm
    {
        push esi
        push 0xC
        call public_6c34eac
        add esp, 4
        test eax, eax
        je public_6c2a036
        mov ecx, dword ptr ds : [public_6c37390]
        test ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        jne public_6c2a02c
        mov ecx, dword ptr ds : [public_6c362ac]
        mov dword ptr ds : [eax+8], ecx
        public_6c2a02c : nop
        mov dword ptr ds : [eax], offset public_6c3629c
        mov esi, eax
        jmp public_6c2a038
        public_6c2a036 : nop
        xor esi, esi
        public_6c2a038 : nop
        call dword ptr ds : [public_6c36004]
        test eax, eax
        je public_6c2a055
        mov ecx, dword ptr ds : [public_6c37390]
        mov edx, dword ptr ds : [eax]
        push 0x80000000
        push ecx
        push esi
        push eax
        call dword ptr ds : [edx+0x10]
        public_6c2a055 : nop
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c2a000)
    }
}

#undef public_6c2a02c
#undef public_6c2a036
#undef public_6c2a038
#undef public_6c2a055
