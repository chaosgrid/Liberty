#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432240);

#define public_432260 _public_432260
#define public_43226a _public_43226a
#define public_43226e _public_43226e
#define public_432273 _public_432273
#define public_432294 _public_432294

PROC_DECLARE(0x432240, internal_432240, public_432240);
extern "C" NAKED register_t __cdecl internal_432240()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, edx
        je public_432273
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_432260 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jae public_43226a
        mov eax, dword ptr ds : [eax+8]
        jmp public_43226e
        public_43226a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_43226e : nop
        cmp eax, ecx
        jne public_432260
        pop edi
        public_432273 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_432294
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_432294
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_432294 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x432240)
    }
}

#undef public_432260
#undef public_43226a
#undef public_43226e
#undef public_432273
#undef public_432294
