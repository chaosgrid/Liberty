#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43a460);
CLANG_FORWARD_PROC_SYMBOL(public_43b630);
CLANG_FORWARD_PROC_SYMBOL(public_43e050);
CLANG_FORWARD_PROC_SYMBOL(public_43f2e0);

#define public_43e024 _public_43e024
#define public_43e034 _public_43e034
#define public_43e03a _public_43e03a
#define public_43e03c _public_43e03c
#define public_43e04b _public_43e04b

PROC_DECLARE(0x43dfe0, internal_43dfe0, public_43dfe0);
extern "C" NAKED register_t __cdecl internal_43dfe0()
{
    __asm
    {
        push edi
        mov edi, ecx
        mov ecx, offset public_668708
        mov byte ptr ds : [edi+0x3D5], 0
        call public_43a460
        test eax, eax
        je public_43e04b
        mov ecx, offset public_668708
        call public_43b630
        test eax, eax
        je public_43e04b
        push esi
        mov ecx, edi
        call public_43f2e0
        mov ecx, offset public_668708
        call public_43a460
        mov esi, dword ptr ds : [edi+0x380]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        je public_43e03a
        public_43e024 : nop
        mov ecx, dword ptr ds : [eax+0x24]
        test ecx, ecx
        lea edx, ds:[eax+8]
        je public_43e034
        cmp dword ptr ds : [ecx+0x18], 1
        je public_43e03c
        public_43e034 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        jne public_43e024
        public_43e03a : nop
        xor edx, edx
        public_43e03c : nop
        pop esi
        mov dword ptr ds : [edi+0x3B8], edx
        mov ecx, edi
        pop edi
        jmp public_43e050
        public_43e04b : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x43dfe0)
    }
}

#undef public_43e024
#undef public_43e034
#undef public_43e03a
#undef public_43e03c
#undef public_43e04b
