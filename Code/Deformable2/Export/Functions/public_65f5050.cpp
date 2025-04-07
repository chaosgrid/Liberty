#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f5050);

#define public_65f5060 _public_65f5060
#define public_65f5075 _public_65f5075
#define public_65f507c _public_65f507c
#define public_65f5088 _public_65f5088
#define public_65f5090 _public_65f5090

PROC_DECLARE(0x65f5050, internal_65f5050, public_65f5050);
extern "C" NAKED register_t __cdecl internal_65f5050()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0xC]
        test esi, esi
        je public_65f507c
        public_65f5060 : nop
        cmp byte ptr ds : [esi], 0
        jne public_65f5075
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [public_6603138]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x4C]
        public_65f5075 : nop
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        jne public_65f5060
        public_65f507c : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        jne public_65f5088
        or ecx, 0xFFFFFFFF
        jmp public_65f5090
        public_65f5088 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+4]
        public_65f5090 : nop
        mov eax, dword ptr ds : [public_6603134]
        mov edx, dword ptr ds : [eax]
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0x94]
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65f5050)
    }
}

#undef public_65f5060
#undef public_65f5075
#undef public_65f507c
#undef public_65f5088
#undef public_65f5090
