#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac40e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac85c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac89d0);

#define public_6ac4114 _public_6ac4114
#define public_6ac412a _public_6ac412a
#define public_6ac4134 _public_6ac4134
#define public_6ac414e _public_6ac414e

PROC_DECLARE(0x6ac40e0, internal_6ac40e0, public_6ac40e0);
extern "C" NAKED register_t __cdecl internal_6ac40e0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp+8]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax+0x100]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        push esi
        push edi
        push ecx
        push edx
        mov dword ptr ss : [ebp-4], esi
        call public_6ac85c0
        mov ebx, eax
        test ebx, ebx
        jne public_6ac4134
        mov eax, dword ptr ss : [ebp-4]
        mov esi, dword ptr ss : [ebp+0x10]
        mov edi, dword ptr ss : [ebp+0x14]
        public_6ac4114 : nop
        test eax, eax
        je public_6ac412a
        mov ecx, dword ptr ds : [esi+eax*4-4]
        mov edx, dword ptr ds : [edi+eax*4-4]
        dec eax
        cmp ecx, edx
        je public_6ac4114
        sbb eax, eax
        or eax, 1
        public_6ac412a : nop
        test eax, eax
        jl public_6ac414e
        mov edi, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [ebp-4]
        public_6ac4134 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        push esi
        push edi
        push eax
        push edi
        call public_6ac89d0
        sub ebx, eax
        je public_6ac414e
        mov dword ptr ds : [public_6ae097c], 0x19
        public_6ac414e : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6ac40e0)
    }
}

#undef public_6ac4114
#undef public_6ac412a
#undef public_6ac4134
#undef public_6ac414e
