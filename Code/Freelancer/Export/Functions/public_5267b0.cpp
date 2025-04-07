#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5267b0);

#define public_5267c4 _public_5267c4
#define public_5267e2 _public_5267e2
#define public_5267ea _public_5267ea

PROC_DECLARE(0x5267b0, internal_5267b0, public_5267b0);
extern "C" NAKED register_t __cdecl internal_5267b0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_5267ea
        mov eax, dword ptr ds : [edi+0x14]
        xor esi, esi
        test eax, eax
        jle public_5267ea
        public_5267c4 : nop
        mov eax, dword ptr ds : [edi+0xC]
        mov ecx, dword ptr ds : [eax+esi*4]
        test ecx, ecx
        je public_5267e2
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x15C]
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [eax+esi*4], 0
        public_5267e2 : nop
        mov eax, dword ptr ds : [edi+0x14]
        inc esi
        cmp esi, eax
        jl public_5267c4
        public_5267ea : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5267b0)
    }
}

#undef public_5267c4
#undef public_5267e2
#undef public_5267ea
