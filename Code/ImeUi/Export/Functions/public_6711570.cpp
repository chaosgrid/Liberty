#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67169d0);

#define public_6711588 _public_6711588
#define public_671159a _public_671159a
#define public_67115ad _public_67115ad
#define public_67115ce _public_67115ce

PROC_DECLARE(0x6711570, internal_6711570, public_6711570);
extern "C" NAKED register_t __cdecl internal_6711570()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push ebx
        push esi
        xor eax, eax
        push edi
        mov edi, ecx
        test edx, edx
        jl public_67115ce
        mov ecx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ecx]
        cmp esi, ecx
        je public_67115ce
        public_6711588 : nop
        mov ebx, dword ptr ds : [esi+8]
        dec edx
        js public_671159a
        mov esi, dword ptr ds : [esi]
        cmp esi, ecx
        jne public_6711588
        pop edi
        pop esi
        pop ebx
        ret 4
        public_671159a : nop
        mov ecx, dword ptr ds : [edi+0x10]
        cmp ecx, ebx
        jne public_67115ad
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+0x10], 0
        public_67115ad : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        push esi
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], ecx
        call public_67169d0
        mov eax, dword ptr ds : [edi+0xC]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0xC], eax
        mov eax, ebx
        public_67115ce : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6711570)
    }
}

#undef public_6711588
#undef public_671159a
#undef public_67115ad
#undef public_67115ce
