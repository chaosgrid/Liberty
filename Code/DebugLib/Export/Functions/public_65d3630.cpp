#include "DebugLib-PCH.h"


#define public_65d3646 _public_65d3646
#define public_65d365f _public_65d365f
#define public_65d3668 _public_65d3668
#define public_65d367f _public_65d367f
#define public_65d368e _public_65d368e
#define public_65d36a0 _public_65d36a0

PROC_DECLARE(0x65d3630, internal_65d3630, public_65d3630);
extern "C" NAKED register_t __cdecl internal_65d3630()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0x38]
        mov esi, dword ptr ds : [edi+0x3C]
        test eax, eax
        jne public_65d3646
        mov eax, offset public_65e13a4
        public_65d3646 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        push eax
        push ebx
        mov ecx, dword ptr ds : [ebx]
        call dword ptr ds : [ecx+0x14]
        cmp eax, esi
        je public_65d365f
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_65d365f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_65d367f
        public_65d3668 : nop
        mov eax, dword ptr ds : [esi+8]
        push ebx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jne public_65d36a0
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+0x1C]
        cmp esi, eax
        jne public_65d3668
        public_65d367f : nop
        mov esi, dword ptr ds : [edi+0x4C]
        mov edi, dword ptr ds : [edi+0x48]
        test edi, edi
        jne public_65d368e
        mov edi, offset public_65e13a4
        public_65d368e : nop
        mov eax, dword ptr ds : [ebx]
        push esi
        push edi
        push ebx
        call dword ptr ds : [eax+0x14]
        mov ecx, eax
        mov eax, esi
        sub eax, ecx
        neg eax
        sbb eax, eax
        public_65d36a0 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65d3630)
    }
}

#undef public_65d3646
#undef public_65d365f
#undef public_65d3668
#undef public_65d367f
#undef public_65d368e
#undef public_65d36a0
