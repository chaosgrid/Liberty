#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_468310);
CLANG_FORWARD_PROC_SYMBOL(public_58f640);

#define public_468334 _public_468334
#define public_46834a _public_46834a
#define public_46834b _public_46834b
#define public_468360 _public_468360
#define public_46836c _public_46836c
#define public_468374 _public_468374
#define public_46837e _public_46837e
#define public_468385 _public_468385
#define public_46838a _public_46838a

PROC_DECLARE(0x468310, internal_468310, public_468310);
extern "C" NAKED register_t __cdecl internal_468310()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3B0]
        push edi
        xor edi, edi
        xor ebx, ebx
        test eax, eax
        je public_46838a
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_46838a
        push ebp
        mov ebp, dword ptr ds : [public_66da48]
        public_468334 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], ecx
        je public_46834b
        mov cl, byte ptr ss : [esp+0x12]
        test cl, cl
        je public_46834a
        inc ebx
        jmp public_46834b
        public_46834a : nop
        inc edi
        public_46834b : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp byte ptr ds : [ecx+0x15], 0
        jne public_46836c
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x15], 0
        jne public_468385
        mov edi, edi
        public_468360 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x15], 0
        je public_468360
        jmp public_468385
        public_46836c : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_46837e
        public_468374 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_468374
        public_46837e : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_468385
        mov eax, ecx
        public_468385 : nop
        cmp eax, edx
        jne public_468334
        pop ebp
        public_46838a : nop
        mov ecx, dword ptr ds : [esi+0x3C8]
        push 1
        lea eax, ds:[edi+edi]
        push eax
        call public_58f640
        mov ecx, dword ptr ds : [esi+0x3C4]
        push 0
        push ebx
        call public_58f640
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x468310)
    }
}

#undef public_468334
#undef public_46834a
#undef public_46834b
#undef public_468360
#undef public_46836c
#undef public_468374
#undef public_46837e
#undef public_468385
#undef public_46838a
