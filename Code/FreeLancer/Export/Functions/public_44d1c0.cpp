#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44d1c0);

#define public_44d1d7 _public_44d1d7
#define public_44d1e9 _public_44d1e9
#define public_44d1f8 _public_44d1f8

PROC_DECLARE(0x44d1c0, internal_44d1c0, public_44d1c0);
extern "C" NAKED register_t __cdecl internal_44d1c0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x1334]
        push edi
        xor edi, edi
        test eax, eax
        jle public_44d1f8
        push esi
        lea esi, ds:[ebx+0x1134]
        public_44d1d7 : nop
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_44d1e9
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi], 0
        public_44d1e9 : nop
        mov eax, dword ptr ds : [ebx+0x1334]
        inc edi
        add esi, 4
        cmp edi, eax
        jl public_44d1d7
        pop esi
        public_44d1f8 : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x44d1c0)
    }
}

#undef public_44d1d7
#undef public_44d1e9
#undef public_44d1f8
