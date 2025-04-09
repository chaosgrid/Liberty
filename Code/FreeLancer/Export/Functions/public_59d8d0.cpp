#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d8d0);

#define public_59d8f0 _public_59d8f0
#define public_59d8fd _public_59d8fd
#define public_59d909 _public_59d909
#define public_59d928 _public_59d928
#define public_59d946 _public_59d946

PROC_DECLARE(0x59d8d0, internal_59d8d0, public_59d8d0);
extern "C" NAKED register_t __cdecl internal_59d8d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x38]
        test edi, edi
        je public_59d946
        mov esi, dword ptr ds : [public_67dce0]
        mov eax, esi
        xor edx, edx
        test eax, eax
        je public_59d8fd
        nop 
        lea esp, ss:[esp]
        public_59d8f0 : nop
        cmp eax, ecx
        je public_59d909
        mov edx, eax
        mov eax, dword ptr ds : [eax+0x38]
        test eax, eax
        jne public_59d8f0
        public_59d8fd : nop
        mov dword ptr ds : [ecx+0x38], esi
        pop edi
        mov dword ptr ds : [public_67dce0], ecx
        pop esi
        ret 
        public_59d909 : nop
        test edx, edx
        je public_59d928
        mov dword ptr ds : [edx+0x38], edi
        mov dword ptr ds : [ecx+0x38], 0
        mov eax, dword ptr ds : [public_67dce0]
        pop edi
        mov dword ptr ds : [ecx+0x38], eax
        mov dword ptr ds : [public_67dce0], ecx
        pop esi
        ret 
        public_59d928 : nop
        mov dword ptr ds : [public_67dce0], edi
        mov dword ptr ds : [ecx+0x38], 0
        mov eax, dword ptr ds : [public_67dce0]
        pop edi
        mov dword ptr ds : [ecx+0x38], eax
        mov dword ptr ds : [public_67dce0], ecx
        pop esi
        ret 
        public_59d946 : nop
        mov edx, dword ptr ds : [public_67dce0]
        pop edi
        mov dword ptr ds : [ecx+0x38], edx
        mov dword ptr ds : [public_67dce0], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x59d8d0)
    }
}

#undef public_59d8f0
#undef public_59d8fd
#undef public_59d909
#undef public_59d928
#undef public_59d946
